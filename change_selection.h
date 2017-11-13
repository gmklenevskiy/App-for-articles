#ifndef CHANGE_SELECTION_H
#define CHANGE_SELECTION_H

#include <QDialog>
#include "QStringList"
#include "selection_of_texts.h"
#include "article.h"
#include "QTimer"

namespace Ui {
class Change_selection;
}

class Change_selection : public QDialog
{
    Q_OBJECT
    
public:
    explicit Change_selection(QWidget *parent = 0);
    ~Change_selection();
    Selection_of_texts *change_item;
    QTimer *t;
    
private:
    Ui::Change_selection *ui;
private slots:
    void add_front();
    void add_back();
    void change_1();
    void close_it();
    void delete_first();
    void delete_last();
    void check();
    void change_title();
};

#endif // CHANGE_SELECTION_H
