#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->to_change_button,SIGNAL(clicked()),this,SLOT(change()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::change()
{
    QString str = ui->dateEdit->date().toString("dd.MM.yyyy");
    QStringList list = str.split(".");
    change_item->set_day(list[0]);
    change_item->set_month(list[1]);
    change_item->set_year(list[2]);
    change_item->set_title(ui->to_change_title_line->text());
    change_item->set_text(ui->to_chang_text_line->toPlainText());
    this->close();
}

