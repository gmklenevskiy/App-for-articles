
#include "list.h"
#include "cassert"


List::List()
{
    head = tail = NULL;
    size_of = 0;
}

List::List(const List &copy_list)
{

    head = tail = NULL;
    size_of = 0;
    for(Item *item = copy_list.head; item; item = item->next)
    {

        this->add_back(item->data);
    }
};


void List::add_back(Description *art)
{
    Item *temp = new Item;
    temp->next = NULL;
    temp->data = art;
    if(head!=NULL)
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        size_of +=1;
    }
    else
    {
        temp->prev = NULL;
        head=tail=temp;
        size_of+=1;
    }
  //  assert(art.get_text() == this->tail->data.get_text()&&art.get_title()==this->tail->data.get_title()&&art.get_day()==this->tail->data.get_day()&&art.get_month()==this->tail->data.get_month()&&art.get_year()==this->tail->data.get_year());
}

void List::add_front(Description *art)
{
    Item *temp = new Item;
    temp->prev = NULL;
    temp->data = art;
    if(head!=NULL)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
        size_of+=1;
    }
    else
    {
        temp->prev = NULL;
        head=tail= temp;
        size_of+=1;
    }
  //  assert(art.get_text()==this->head->data.get_text()&&art.get_title()==this->head->data.get_title()&&art.get_day()==this->head->data.get_day()&&art.get_month()==this->head->data.get_month()&&this->head->data.get_year()==art.get_year());
}

void List::delete_back()
{
    Item *last = this->tail;
    if (tail)
    {
        Item *temp = tail;
        if(tail->prev)
        {
            tail = tail->prev;
            delete temp;
            tail->next = NULL;
            size_of -=1;
        }
        else
        {
            delete tail;
            tail = head = NULL;
            size_of = 0;
        }
    }
//    else
//        printf("The list is empty");
}

void List::delete_front()
{
    Item *first = this->head;
    if(head->next)
    {
            Item *temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            size_of-=1;
    }
    else if(head==tail)
    {
        head->next = NULL;
        head = NULL;
        delete head;
        size_of = 0;
    }
    else if(!head)
    {
       // printf("The list is empty");
        size_of = 0;
    }
    //assert(this->head->data.get_text() != first->data.get_text()&&this->head->data.get_title()!=first->data.get_title()&& this->head->data.get_day()!=first->data.get_day()&& this->head->data.get_month()!=first->data.get_month()&& this->head->data.get_year()!=first->data.get_year());
}

Description &List::front()
{
    return *this->head->data;
}

Description &List::back()
{
    return *this->tail->data;
}

Description &List::operator [](int i)
{
    Item *it = head;
    for(int j=0;j<i;j++) it = it->next;
    return *it->data;
}



bool List::is_empty()
{
    if(this->head)
        return false;
    else
        return true;
}

int List::size()
{

    return size_of;
}

void List::read_from_file(QString file_name)
{
    QFile file;
    file.setFileName(file_name);
    file.open(QIODevice::ReadOnly);
    QDataStream stream(&file);
    while(!file.atEnd())
    {
        QString check;
        check = file.readLine();
        if (check.contains("Selection",Qt::CaseInsensitive))
        {
            QString sel_date;
            sel_date = file.readLine();
            QStringList date_1 = sel_date.split('.');
            QString title;
            title = file.readLine();
            title.remove("\n");
            title.remove("\r\n");
            QString year = date_1[2];
            year.remove("\n");
            year.remove("\r\n");
            bool flag = false;
            while(!flag)
            {
                QString art_date;
                art_date = file.readLine();
                QStringList art_date_1 = art_date.split('.');
                QString art_title;
                art_title = file.readLine();
                QString art_text;
                art_text = file.readLine();
                QString c_year = art_date_1[2];
                c_year.remove("\r\n");
                c_year.remove("\n");
                art_title.remove("\n");
                art_title.remove("\r\n");
                art_text.remove("\r\n");
                art_text.remove("\n");
                //Article *a=new Article(art_date_1[0],art_date_1[1],c_year,art_title,art_text);
                lis.append(new Article(art_date_1[0],art_date_1[1],c_year,art_title,art_text));
                QString sel_check = file.readLine();
                if (sel_check.contains("The_end_of_selection",Qt::CaseInsensitive))
                {
                    flag = true;
                }
            }
            Selection_of_texts *file_sel=new Selection_of_texts(date_1[0],date_1[1],year,title,lis);
            add_back(file_sel);
            lis.clear();
        }
        else
        {
            QString date = check;
            QStringList date_1 = date.split('.');
            QString title = file.readLine();
            QString text = file.readLine();
            QString check_year = date_1[2];
            //stream>>title;
            //stream>>text;
            check_year.remove("\r\n");
            check_year.remove("\n");
            title.remove("\n");
            title.remove("\r\n");
            text.remove("\n");
            text.remove("\r\n");
            //Description file_description(date_1[0], date_1[1], check_year, title);
            Article *file_article = new Article(date_1[0],date_1[1],check_year,title,text);
            //add_back(&file_description);
            add_back(file_article);
            QString empty ;//= file.readLine();
            empty=file.readLine();
        }
//        QString date = file.readLine();
//        QStringList date_1 = date.split('.');
//        QString title = file.readLine();
//        //QString text = file.readLine();
//        QString check_year = date_1[2];
//        check_year.remove("\r\n");
//        check_year.remove("\n");
//        title.remove("\n");
//        title.remove("\r\n");
//        //text.remove("\n");
//        //text.remove("\r\n");
//        Description file_description(date_1[0], date_1[1], check_year, title);
//        add_back(&file_description);
//        //file_article.title.remove("\r\n");
//        //file_article.text.remove("\r\n");
//        //file_article.text.remove("\n");
//        //file_article.title.remove("\n");
//        //Add_back(file_article);
    }
    file.close();
}

void List::write_to_file(QString file_name)
{
    QFile file;
    file.setFileName(file_name);
    file.open(QIODevice::WriteOnly);
    QTextStream stream(&file);
   // Item *enumeration_item = head;
    QString day_write = "1";
    QString month_write = "1";
    QString year_write = "2000";
    QString day_write_1 = "1";
    QString month_write_1 = "1";
    QString year_write_1 = "2000";
    Article *a;
    Selection_of_texts *b;
//    for(Item * enumeration_item = head; enumeration_item ; enumeration_item = enumeration_item->next)
//    {
//        if(enumeration_item->data->get_type()==1)
//        {
//            a = dynamic_cast<Article*>((enumeration_item->data));
//            day_write = QString::number(enumeration_item->data->get_day());
//            month_write = QString::number(enumeration_item->data->get_month());
//            year_write = QString::number(enumeration_item->data->get_year());
//            stream<<day_write+"."+month_write+"."+year_write+"\r\n";
//            stream<<enumeration_item->data->get_title()+"\r\n";
//            stream<<a->get_text()+"\r\n"+"\r\n";
//        }
//        else
//        {
//            b = dynamic_cast<Selection_of_texts*>(enumeration_item->data);
//            day_write = QString::number(enumeration_item->data->get_day());
//            month_write = QString::number(enumeration_item->data->get_month());
//            year_write = QString::number(enumeration_item->data->get_year());
//            stream<<day_write+"."+month_write+"."+year_write+"\r\n";
//            stream<<enumeration_item->data->get_title()+"\r\n";
//            for(int j =0; j<b->selection_list.size();j++)
//            {
//                day_write_1 = QString::number(b->selection_list[j]->get_day());
//                month_write_1 = QString::number(b->selection_list[j]->get_month());
//                year_write_1 = QString::number(b->selection_list[j]->get_year());
//                stream<<day_write_1+"."+month_write_1+"."+year_write_1+"\r\n";
//                stream<<b->selection_list[j]->get_title()+"\r\n";
//                stream<<b->selection_list[j]->get_text()+"\r\n"+"\r\n";
//            }

//        }
//        //enumeration_item->next;
//        /*stream<<day_write+"."+month_write+"."+year_write;
//        stream<<enumeration_item->data.get_title();
//        stream<<enumeration_item->data.get_text()*/;
//    }
    for(Item * enumeration_item = head; enumeration_item ; enumeration_item = enumeration_item->next)
    {
        if(enumeration_item->data->get_type()==1)
        {
            a = dynamic_cast<Article*>((enumeration_item->data));
            day_write = QString::number(enumeration_item->data->get_day());
            month_write = QString::number(enumeration_item->data->get_month());
            year_write = QString::number(enumeration_item->data->get_year());
            stream<<day_write+"."+month_write+"."+year_write+"\r\n";
            stream<<enumeration_item->data->get_title()+"\r\n";
            stream<<a->get_text()+"\r\n"+"\r\n";
        }
        else
        {
            b = dynamic_cast<Selection_of_texts*>(enumeration_item->data);
            day_write = QString::number(enumeration_item->data->get_day());
            month_write = QString::number(enumeration_item->data->get_month());
            year_write = QString::number(enumeration_item->data->get_year());
            stream<<"Selection\r\n";
            stream<<day_write+"."+month_write+"."+year_write+"\r\n";
            stream<<enumeration_item->data->get_title()+"\r\n";
            for(int j =0; j<b->selection_list.size();j++)
            {
                if (j!=b->selection_list.size()-1)
                {
                    day_write_1 = QString::number(b->selection_list[j]->get_day());
                    month_write_1 = QString::number(b->selection_list[j]->get_month());
                    year_write_1 = QString::number(b->selection_list[j]->get_year());
                    stream<<day_write_1+"."+month_write_1+"."+year_write_1+"\r\n";
                    stream<<b->selection_list[j]->get_title()+"\r\n";
                    stream<<b->selection_list[j]->get_text()+"\r\n"+"\r\n";
                }
                else
                {
                    day_write_1 = QString::number(b->selection_list[j]->get_day());
                    month_write_1 = QString::number(b->selection_list[j]->get_month());
                    year_write_1 = QString::number(b->selection_list[j]->get_year());
                    stream<<day_write_1+"."+month_write_1+"."+year_write_1+"\r\n";
                    stream<<b->selection_list[j]->get_title()+"\r\n";
                    stream<<b->selection_list[j]->get_text()+"\r\n";
                }
            }
            if (enumeration_item != tail)
                stream<<"The_end_of_selection\r\n";
            else
                stream<<"The_end_of_selection\r";

        }
        //enumeration_item->next;
        /*stream<<day_write+"."+month_write+"."+year_write;
        stream<<enumeration_item->data.get_title();
        stream<<enumeration_item->data.get_text()*/;
    }
    file.close();
}

void List::show_list()
{
    Item *item = head;
    while(item)
    {
        item->data->show();
        item = item->next;
    }
}


List::~List()
{
    Item *del_item = head;
    while(del_item)
    {
        delete del_item->prev;
        del_item=del_item->next;
    }
    delete del_item;
}
