#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFont"
#include "QTextEdit"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer;
    timer->start(100);
    counter_of_article = 0;
    flag = false;
    ui->del_button_end->setDisabled(true);
    ui->del_button_front->setDisabled(true);
    ui->change_art_button->setDisabled(true);
    ui->button_change_sel->setDisabled(true);
    ui->button_remove_first->setDisabled(true);
    ui->button_remove_last->setDisabled(true);
    ui->button_change_sel->setDisabled(true);
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(check()));
    QObject::connect(ui->art_button_add_back,SIGNAL(clicked()),this,SLOT(add_article_back()));
    QObject::connect(ui->art_button_add_front,SIGNAL(clicked()),this,SLOT(add_article_front()));
    QObject::connect(ui->size_button,SIGNAL(clicked()),this,SLOT(show_size()));
    QObject::connect(ui->sel_add_front_button,SIGNAL(clicked()),this,SLOT(add_sel_front()));
    QObject::connect(ui->add_sel_back_button,SIGNAL(clicked()),this,SLOT(add_sel_back()));
    QObject::connect(ui->del_button_front,SIGNAL(clicked()),this,SLOT(delete_from_front_of_the_list()));
    QObject::connect(ui->del_button_end,SIGNAL(clicked()),this,SLOT(delete_from_end_of_the_list()));
    QObject::connect(ui->first_button,SIGNAL(clicked()),this,SLOT(first()));
    QObject::connect(ui->last_button,SIGNAL(clicked()),this,SLOT(last()));
    QObject::connect(ui->sel_add_button,SIGNAL(clicked()),this,SLOT(add_to_the_selection()));
    //QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(show_artciles_for_selection()));
    QObject::connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(read_from_file()));
    QObject::connect(ui->show_changes_button,SIGNAL(clicked()),this,SLOT(show_list()));
    QObject::connect(ui->button_to_file,SIGNAL(clicked()),this,SLOT(write_to_file()));
    QObject::connect(ui->change_art_button,SIGNAL(clicked()),this,SLOT(change_art()));
    QObject::connect(ui->button_remove_first,SIGNAL(clicked()),this,SLOT(remove_from_selection_first()));
    QObject::connect(ui->button_remove_last,SIGNAL(clicked()),this,SLOT(remove_from_selection_last()));
    QObject::connect(ui->button_change_sel,SIGNAL(clicked()),this,SLOT(on_button_change_selection()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::check()
{
    if(list.size()<=0)
    {
        ui->del_button_front->setDisabled(true);
        ui->del_button_end->setDisabled(true);
        ui->first_button->setDisabled(true);
        ui->last_button->setDisabled(true);
    }
    else
    {
        ui->del_button_end->setEnabled(true);
        ui->del_button_front->setEnabled(true);
        ui->first_button->setEnabled(true);
        ui->last_button->setEnabled(true);
    }
    if(ui->Line_for_title_art->text()==""||ui->art_text->toPlainText()=="")
    {
        ui->art_button_add_back->setDisabled(true);
        ui->art_button_add_front->setDisabled(true);
    }
    else
    {
        ui->art_button_add_back->setEnabled(true);
        ui->art_button_add_front->setEnabled(true);
    }
    if(ui->title_for_sel->text()=="")
    {
        ui->sel_add_front_button->setDisabled(true);
        ui->add_sel_back_button->setDisabled(true);
    }
    else
    {
        ui->sel_add_front_button->setEnabled(true);
        ui->add_sel_back_button->setEnabled(true);
    }
    if(ui->lineEdit->text()=="")
    {
        ui->button_to_file->setDisabled(true);
        ui->pushButton_5->setDisabled(true);
    }
    else
    {
        ui->button_to_file->setEnabled(true);
        ui->pushButton_5->setEnabled(true);
    }
}


void MainWindow::add_article_front()
{
    QString str = (ui->dateEdit->date().toString("dd.MM.yyyy"));
    QStringList list_1 = str.split(".");
    list.add_front(new Article(list_1[0], list_1[1],list_1[2],ui->Line_for_title_art->text(),ui->art_text->toPlainText()));
    show_list();
    counter_of_article++;
    show_artciles_for_selection();
}

void MainWindow::add_article_back()
{
    QString str = (ui->dateEdit->date().toString("dd.MM.yyyy"));
    QStringList list_1 = str.split(".");
    list.add_back(new Article(list_1[0],list_1[1],list_1[2],ui->Line_for_title_art->text(),ui->art_text->toPlainText()));
    show_list();
    counter_of_article++;
    show_artciles_for_selection();
}

void MainWindow::add_to_the_selection()
{

    //    for (int i = 0; i < ui->listWidget->selectedItems().size(); i++)
    //        title_list << ui->listWidget->selectedItems().at(i)->text();
    if (flag==false)
    {
        foreach (QListWidgetItem *item, ui->listWidget->selectedItems()){
            QString title_of_article_for_selection = item->text();
        //    QString title_of_article_for_selection = ui->listWidget->currentItem()->text();
            for (int i =0;i<list.size();i++)
            {
                if(list[i].get_type()==1)
                    if(list[i].get_title().contains(title_of_article_for_selection,Qt::CaseInsensitive)&&QString::compare(list[i].get_title(),title_of_article_for_selection)==0)
                    {
                        Article *a = dynamic_cast<Article*>(&list[i]);
                        lis.append(a);
                        ui->listWidget_2->insertItem(lis.size(),a->get_title());
                    }
            }
        }
    }
    else
    {
        foreach(QListWidgetItem *item,ui->listWidget->selectedItems())
        {
            QString titles = item->text();
            for(int i=0; i<list.size();i++)
            {
                if(list[i].get_type()==1)
                    if(list[i].get_title().contains(titles,Qt::CaseInsensitive)&&QString::compare(list[i].get_title(),titles)==0)
                    {
                        Article *a = dynamic_cast<Article*>(&list[i]);
                        change_sel->selection_list.append(a);
                        show_articles_of_selection();
                    }
            }
        }
    }
}


void MainWindow::add_sel_front()
{
    QString str = (ui->dateEdit_2->date().toString("dd.MM.yyyy"));
    QStringList list_1 = str.split(".");
    Selection_of_texts *selection = new Selection_of_texts(list_1[0],list_1[1],list_1[2],ui->title_for_sel->text(),lis);
    list.add_front(selection);
    ui->title_for_sel->clear();
    show_list();
    lis.clear();
    ui->listWidget_2->clear();
}

void MainWindow::add_sel_back()
{
    QString str = ui->dateEdit_2->date().toString("dd.MM.yyyy");
    QStringList list_1 = str.split(".");
    Selection_of_texts *selection = new Selection_of_texts(list_1[0],list_1[1],list_1[2],ui->title_for_sel->text(),lis);
    list.add_back(selection);
    ui->title_for_sel->clear();
    show_list();
    lis.clear();
    ui->listWidget_2->clear();
}


void MainWindow::show_size()
{
    ui->text_for_list->append("Size is "+ QString::number(list.size()));
}

void MainWindow::show_artciles_for_selection()
{
    Article *a;
    ui->listWidget->clear();
    for(int i=0;i<list.size();i++)
    {
        if(list[i].get_type()==1)
        {
            a = dynamic_cast<Article*>(&list[i]);
            ui->listWidget->insertItem(counter_of_article,a->get_title());
        }
    }
}


void MainWindow::show_list()
{
    Article *a;
    Selection_of_texts *s;
    ui->text_for_list->clear();
    for(int i=0;i<list.size();i++)
    {
        if(list[i].get_type()==1)
        {
            a = dynamic_cast<Article*>(&list[i]);
            ui->text_for_list->append(" "+QString::number(list[i].get_day())+"."+QString::number(list[i].get_month())+"."+QString::number(list[i].get_year())+"\n------------------------- Title: "+list[i].get_title()+"\n"+a->transformation_of_the_text()+"\n");
        }
        else
        {
            s = dynamic_cast<Selection_of_texts*>(&list[i]);
            ui->text_for_list->append(" "+QString::number(list[i].get_day())+"."+QString::number(list[i].get_month())+"."+QString::number(list[i].get_year())+"\n------------------------- Title: "+list[i].get_title()+"\nThe selection contains:");
            for(int j=0;j<s->selection_list.size();j++)
                ui->text_for_list->append(" "+QString::number(s->selection_list[j]->get_day())+"."+QString::number(s->selection_list[j]->get_month())+"."+QString::number(s->selection_list[j]->get_year())+"\n------------------------- Title: "+s->selection_list[j]->get_title()+"\n");
            ui->text_for_list->append("The end of selection\n");
        }
    }
}

void MainWindow::delete_from_front_of_the_list()
{
    if(list.size()>0)
        ui->del_button_front->setEnabled(true);
    else
        ui->del_button_front->setDisabled(true);
    list.delete_front();
    if(list.front().get_type()==1)
    {
        counter_of_article--;
    }
    show_list();
    show_artciles_for_selection();
}

void MainWindow::delete_from_end_of_the_list()
{
    if(list.size()>0)
        ui->del_button_front->setEnabled(true);
    else
        ui->del_button_front->setDisabled(true);
    list.delete_back();
    if(list.back().get_type()==1)
    {
        counter_of_article--;
    }
    show_list();
    show_artciles_for_selection();
}

void MainWindow::first()
{
    if(list.front().get_type()==1)
    {
        ui->tabWidget->setCurrentIndex(0);
        ui->change_art_button->setEnabled(true);
        ui->art_button_add_back->setDisabled(true);
        ui->art_button_add_front->setDisabled(true);
        change_item = dynamic_cast<Article*>(&list.front());
        ui->art_text->append(change_item->get_text());
        ui->Line_for_title_art->setText(change_item->get_title());
        QDate set_day = QDate::fromString((QString::number(change_item->get_day())+"."+
                                           QString::number(change_item->get_month())+"."+
                                           QString::number(change_item->get_year())),"dd.MM.yyyy");
        ui->dateEdit->setDate(set_day);
    }
    else
    {
        flag = true;
        ui->tabWidget->setCurrentIndex(1);
        ui->button_change_sel->setEnabled(true);
        ui->button_remove_first->setEnabled(true);
        ui->button_change_sel->setEnabled(true);
        change_sel = dynamic_cast<Selection_of_texts*>(&list.front());
        ui->title_for_sel->setText(change_sel->get_title());
        QDate set_day = QDate::fromString((QString::number(change_sel->get_day())+"."+
                                           QString::number(change_sel->get_month())+"."+
                                           QString::number(change_sel->get_year())),"dd.MM.yyyy");
        ui->dateEdit_2->setDate(set_day);
//        for (int j=0;j<change_sel->selection_list.size();j++)
//            ui->listWidget_2->insertItem(change_sel->selection_list.size(),change_sel->selection_list[j]->get_title());
//        dial_1 = new Change_selection;
//        dial_1->change_item = dynamic_cast<Selection_of_texts*>(&list.front());
//        dial_1->show();
        show_articles_of_selection();
    }
}

void MainWindow::change_art()
{
    QString str = ui->dateEdit->date().toString("dd.MM.yyyy");
    QStringList list = str.split(".");
    change_item->set_day(list[0]);
    change_item->set_month(list[1]);
    change_item->set_year(list[2]);
    change_item->set_title(ui->Line_for_title_art->text());
    change_item->set_text(ui->art_text->toPlainText());
    ui->change_art_button->setDisabled(true);
    ui->tabWidget->setCurrentIndex(2);
    show_list();
    show_artciles_for_selection();
    ui->art_text->clear();
    ui->Line_for_title_art->clear();
}

void MainWindow::last()
{
    if(list.back().get_type()==1)
    {
        ui->tabWidget->setCurrentIndex(0);
        change_item = dynamic_cast<Article*>(&list.back());
        ui->art_text->append(change_item->get_text());
        ui->Line_for_title_art->setText(change_item->get_title());
        QDate set_day = QDate::fromString((QString::number(change_item->get_day())+"."+
                                           QString::number(change_item->get_month())+"."+
                                           QString::number(change_item->get_year())),"dd.MM.yyyy");
        ui->dateEdit->setDate(set_day);
    }
    else
    {
        flag = true;
        ui->tabWidget->setCurrentIndex(1);
        change_sel = dynamic_cast<Selection_of_texts*>(&list.back());
        ui->title_for_sel->setText(change_sel->get_title());
        QDate set_day = QDate::fromString((QString::number(change_sel->get_day())+"."+
                                           QString::number(change_sel->get_month())+"."+
                                           QString::number(change_sel->get_year())),"dd.MM.yyyy");
        ui->dateEdit_2->setDate(set_day);
        show_articles_of_selection();
    }
}

void MainWindow::read_from_file()
{
    list.read_from_file(ui->lineEdit->text());
    for(int i=0;i<list.size();i++)
    {
        if(list[i].get_type()==1)
        {
            counter_of_article++;
        }
    }
    show_list();
    show_artciles_for_selection();
}

void MainWindow::write_to_file()
{
    list.write_to_file(ui->lineEdit->text());
}

void MainWindow::remove_from_selection_first()
{
    change_sel->selection_list.removeFirst();
    show_articles_of_selection();
}

void MainWindow::remove_from_selection_last()
{
    change_sel->selection_list.removeLast();
    show_articles_of_selection();
}

void MainWindow::show_articles_of_selection()
{
    ui->listWidget_2->clear();
    for (int j=0;j<change_sel->selection_list.size();j++)
        ui->listWidget_2->insertItem(change_sel->selection_list.size(),change_sel->selection_list[j]->get_title());
}

void MainWindow::on_button_change_selection()
{
    QString str = ui->dateEdit_2->date().toString("dd.MM.yyyy");
    QStringList list = str.split(".");
    change_sel->set_day(list[0]);
    change_sel->set_month(list[1]);
    change_sel->set_year(list[2]);
    change_sel->set_title(ui->title_for_sel->text());
    for(int i=0;i<lis.size();i++)
        change_sel->selection_list.append(lis[i]);
    show_list();
    show_artciles_for_selection();
    flag = false;
    ui->listWidget_2->clear();
    ui->title_for_sel->clear();
    ui->tabWidget->setCurrentIndex(2);
    ui->button_remove_first->setDisabled(true);
    ui->button_remove_last->setDisabled(true);
    ui->button_change_sel->setDisabled(true);
}

