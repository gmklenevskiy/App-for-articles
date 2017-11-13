#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "description.h"
#include "QStringList"
#include "article.h"
#include "string"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    Article *change_item;

    
private:
    Ui::Dialog *ui;
private slots:
    void change();
};

#endif // DIALOG_H
