#ifndef FORM_FOR_SELECTION_H
#define FORM_FOR_SELECTION_H

#include <QWidget>

namespace Ui {
class Form_for_selection;
}

class Form_for_selection : public QWidget
{
    Q_OBJECT
    
public:
    explicit Form_for_selection(QWidget *parent = 0);
    ~Form_for_selection();
    
private:
    Ui::Form_for_selection *ui;
};

#endif // FORM_FOR_SELECTION_H
