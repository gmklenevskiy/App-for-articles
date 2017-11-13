#include "article.h"

Article::Article()
{
    title = "Title";
    text = "Text";
    Date.day = 1;
    Date.month = 1;
    Date.year = 2000;
}

Article::Article(const Article &Article_copy)
{
    title = Article_copy.title;
    text = Article_copy.text;
    Date.day = Article_copy.Date.day;
    Date.month = Article_copy.Date.month;
    Date.year = Article_copy.Date.year;
}

Article::Article(QString day_1, QString month_1, QString year_1, QString title_1, QString text_1)
{
//    int flag = 1;
//    QRegExp check("\\d* ");
//    if((!check.exactMatch(day_1)) || (!check.exactMatch(month_1)) || (!check.exactMatch(year_1)) || day_1 == "" || month_1 == "" || year_1 == "")
//        flag = 0;
//   // qDebug("%S", day_1);
//    if(flag&&day_1.toInt()>0 && day_1.toInt()<32 && month_1.toInt()>0 && month_1.toInt()<13 && year_1.toInt()>1975  && text_1!="" && title_1!="")
//    {
//        Date.day = day_1.toInt();
//        Date.month = month_1.toInt();
//        Date.year = year_1.toInt();
//        text = text_1;
//        title = title_1;
//    }
//    if(!flag)
//    {
//        Date.day = Article().Date.day;
//        Date.month = Article().Date.month;
//        Date.year = Article().Date.year;
//        title = Article().title;
//        text = Article().text;
//    }
    Article::set_day(day_1);
    Article::set_month(month_1);
    Article::set_year(year_1);
    Article::set_title(title_1);
    Article::set_text(text_1);
}


QString Article::transformation_of_the_text()
{

       for (int j = 0; j < this->text.size(); j++)
       {
              if ( this->text.at(j) == '{' )
              {
                  if (this->text.right(text.size() - j).indexOf('}') == -1)
                      this->text.append('}');
              }
       }
       QString return_text = this->get_text();

   int count = 0;
   for (int i = 0; i < return_text.size(); i++)
   {
       if (return_text.at(i) == '{' || return_text.at(i) == '}')
       {
           if (return_text.at(i) == '{')
               count++;
           if (return_text.at(i) == '}')
               count --;
       }
       if (count > 0)
           return_text[i] = return_text[i].toUpper();
   }
   return_text.remove(QChar('{'),Qt::CaseInsensitive);
   return_text.remove(QChar('}'), Qt::CaseInsensitive);
    return(return_text);
}

void Article::show()
{
    printf("Day: %d\n",this->get_day());
    printf("Month: %d\n", this->get_month());
    printf("Year: %d\n", this->get_year());
    printf("Title: %s\n",this->get_title().toAscii().data());
    printf("Text: %s\n", this->get_text().toAscii().data());
    //printf("Day: %d\nMonth: %d\nYear: %d\nTitle: %s\nText: %s\n",this->Date.day,this->Date.month, this->Date.year, this->title.toLatin1().data(), this->text.toLatin1().data());
}

void Article::show_method()
{
    printf("Text_transform: %s\n", this->transformation_of_the_text().toLatin1().data());
}

int Article::get_type()
{
    return 1;
}

Article::~Article()
{
}

//void Article::set_day(QString set_day_1)
//{
//    QRegExp check("\\d*");
//    if(check.exactMatch(set_day_1) && set_day_1.toInt()>0 && set_day_1.toInt()<32)
//        Date.day = set_day_1.toInt();
//    else
//        Date.day = Article().Date.day;
//}

//void Article::set_month(QString set_month_1)
//{
//    QRegExp check("\\d*");
//    if(check.exactMatch(set_month_1) && set_month_1.toInt()>0 && set_month_1.toInt()<13)
//        Date.month = set_month_1.toInt();
//    else
//        Date.month = Article().Date.month;
//}

//void Article::set_year(QString set_year_1)
//{
//    QRegExp check("\\d*");
//    if(check.exactMatch(set_year_1) && set_year_1.toInt()>1975)
//        Date.year = set_year_1.toInt();
//    else
//        Date.year = Article().Date.year;
//}

void Article::set_text(QString set_text_1)
{
    if(set_text_1!="")
        text = set_text_1;
    else
        text = Article().text;
}

//void Article::set_title(QString set_title_1)
//{
//    if(set_title_1!="")
//        title = set_title_1;
//    else
//        title = Article().title;
//}

//int Article::get_day()
//{
//    return this->Date.day;
//}

//int Article::get_month()
//{
//    return this->Date.month;
//}

//int Article::get_year()
//{
//    return this->Date.year;
//}

QString Article::get_text()
{
    return this->text;
}

//QString Article::get_title()
//{
//    return this->title;
//}





