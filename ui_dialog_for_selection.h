/********************************************************************************
** Form generated from reading UI file 'dialog_for_selection.ui'
**
** Created: Sat 4. Nov 17:32:22 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FOR_SELECTION_H
#define UI_DIALOG_FOR_SELECTION_H

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

class Ui_Dialog_for_selection
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QTextEdit *to_chang_text_line;
    QLineEdit *to_change_title_line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;

    void setupUi(QDialog *Dialog_for_selection)
    {
        if (Dialog_for_selection->objectName().isEmpty())
            Dialog_for_selection->setObjectName(QString::fromUtf8("Dialog_for_selection"));
        Dialog_for_selection->resize(400, 300);
        label_2 = new QLabel(Dialog_for_selection);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 60, 46, 13));
        label_3 = new QLabel(Dialog_for_selection);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 110, 46, 13));
        label = new QLabel(Dialog_for_selection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 46, 13));
        to_chang_text_line = new QTextEdit(Dialog_for_selection);
        to_chang_text_line->setObjectName(QString::fromUtf8("to_chang_text_line"));
        to_chang_text_line->setGeometry(QRect(0, 130, 251, 151));
        to_change_title_line = new QLineEdit(Dialog_for_selection);
        to_change_title_line->setObjectName(QString::fromUtf8("to_change_title_line"));
        to_change_title_line->setGeometry(QRect(0, 80, 251, 20));
        pushButton = new QPushButton(Dialog_for_selection);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 230, 111, 23));
        pushButton_2 = new QPushButton(Dialog_for_selection);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 260, 111, 21));
        dateEdit = new QDateEdit(Dialog_for_selection);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(0, 30, 110, 22));

        retranslateUi(Dialog_for_selection);

        QMetaObject::connectSlotsByName(Dialog_for_selection);
    } // setupUi

    void retranslateUi(QDialog *Dialog_for_selection)
    {
        Dialog_for_selection->setWindowTitle(QApplication::translate("Dialog_for_selection", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_for_selection", "Title", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_for_selection", "Text", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_for_selection", "Date", 0, QApplication::UnicodeUTF8));
        to_change_title_line->setText(QString());
        pushButton->setText(QApplication::translate("Dialog_for_selection", "Add to the selection", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog_for_selection", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_for_selection: public Ui_Dialog_for_selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FOR_SELECTION_H
