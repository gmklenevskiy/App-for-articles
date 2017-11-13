/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Fri 10. Nov 19:19:47 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *to_change_title_line;
    QLabel *label_3;
    QTextEdit *to_chang_text_line;
    QPushButton *to_change_button;
    QDateEdit *dateEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 46, 13));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 70, 46, 13));
        to_change_title_line = new QLineEdit(Dialog);
        to_change_title_line->setObjectName(QString::fromUtf8("to_change_title_line"));
        to_change_title_line->setGeometry(QRect(0, 90, 251, 20));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 120, 46, 13));
        to_chang_text_line = new QTextEdit(Dialog);
        to_chang_text_line->setObjectName(QString::fromUtf8("to_chang_text_line"));
        to_chang_text_line->setGeometry(QRect(0, 140, 251, 151));
        to_change_button = new QPushButton(Dialog);
        to_change_button->setObjectName(QString::fromUtf8("to_change_button"));
        to_change_button->setGeometry(QRect(280, 270, 75, 23));
        dateEdit = new QDateEdit(Dialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(0, 40, 110, 22));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Date", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Title", 0, QApplication::UnicodeUTF8));
        to_change_title_line->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "Text", 0, QApplication::UnicodeUTF8));
        to_change_button->setText(QApplication::translate("Dialog", "Change", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
