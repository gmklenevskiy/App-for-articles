#include "change_selection.h"
#include "ui_change_selection.h"

Change_selection::Change_selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Change_selection)
{
    ui->setupUi(this);
    t = new QTimer;
    t->start(100);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(change_1()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(add_front()));
    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close_it()));
    QObject::connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(add_back()));
    QObject::connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(delete_first()));
    QObject::connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(delete_last()));
    QObject::connect(t,SIGNAL(timeout()),this,SLOT(check()));
    QObject::connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(change_title()));
}

Change_selection::~Change_selection()
{
    delete ui;
}

void Change_selection::add_front()
{
    QString str = ui->dateEdit->date().toString("dd.MM.yyyy");
    QStringList list = str.split(".");
    change_item->selection_list.push_front(new Article(list[0],list[1],list[2],ui->to_change_title_line_a->text(),ui->to_chang_text_line_a->toPlainText()));
}

void Change_selection::add_back()
{
    QString str = ui->dateEdit_2->date().toString("dd.MM.yyyy");
    QStringList list =str.split(".");
    change_item->selection_list.push_back(new Article(list[0],list[1],list[2],ui->to_change_title_line_a->text(),ui->to_chang_text_line_a->toPlainText()));
}

void Change_selection::change_1()
{
    QString str = ui->dateEdit_2->date().toString("dd.MM.yyyy");
    QStringList list = str.split(".");
    change_item->set_day(list[0]);
    change_item->set_month(list[1]);
    change_item->set_year(list[2]);
}

void Change_selection::close_it()
{
    this->close();
}

void Change_selection::delete_first()
{
    change_item->selection_list.removeFirst();
}

void Change_selection::delete_last()
{
    change_item->selection_list.removeLast();
}

void Change_selection::check()
{
    if (ui->to_change_title_line_a->text()==""||ui->to_chang_text_line_a->toPlainText()=="")
    {
        ui->pushButton_2->setDisabled(true);
        ui->pushButton_4->setDisabled(true);
    }
    else
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
    }
    if(change_item->selection_list.size()==0)
    {
        ui->pushButton_5->setDisabled(true);
        ui->pushButton_6->setDisabled(true);
    }
    else
    {
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_6->setEnabled(true);
    }
    if(ui->to_change_title_line_1->text()=="")
        ui->pushButton_7->setDisabled(true);
    else
        ui->pushButton_7->setEnabled(true);
}

void Change_selection::change_title()
{
    change_item->set_title(ui->to_change_title_line_1->text());
}
