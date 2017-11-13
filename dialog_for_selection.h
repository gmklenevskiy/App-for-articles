#ifndef DIALOG_FOR_SELECTION_H
#define DIALOG_FOR_SELECTION_H

#include <QDialog>
#include <article.h>
#include <selection_of_texts.h>
#include <QStringList>

namespace Ui {
class Dialog_for_selection;
}

class Dialog_for_selection : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_for_selection(QWidget *parent = 0);
    ~Dialog_for_selection();
    Selection_of_texts* selection;
    
private:
    Ui::Dialog_for_selection *ui;
private slots:
    void add_to_the_selection();
    void close_it();
};

#endif // DIALOG_FOR_SELECTION_H
