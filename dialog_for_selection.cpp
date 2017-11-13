#include "dialog_for_selection.h"
#include "ui_dialog_for_selection.h"

Dialog_for_selection::Dialog_for_selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_for_selection)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(add_to_the_selection()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close_it()));
    selection = new Selection_of_texts;
}

Dialog_for_selection::~Dialog_for_selection()
{
    delete ui;
}

void Dialog_for_selection::add_to_the_selection()
{
    QString str = ui->dateEdit->date().toString("dd.MM.yyyy");
    QStringList list = str.split(".");
    selection->selection_list.append(new Article(list[0],list[1],list[2],ui->to_change_title_line->text(),ui->to_chang_text_line->toPlainText()));
}

void Dialog_for_selection::close_it()
{
    this->close();
}
