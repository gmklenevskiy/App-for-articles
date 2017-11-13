#include "form_for_selection.h"
#include "ui_form_for_selection.h"

Form_for_selection::Form_for_selection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_for_selection)
{
    ui->setupUi(this);
}

Form_for_selection::~Form_for_selection()
{
    delete ui;
}
