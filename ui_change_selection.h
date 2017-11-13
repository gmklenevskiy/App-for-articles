/********************************************************************************
** Form generated from reading UI file 'change_selection.ui'
**
** Created: Sat 11. Nov 14:25:12 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_SELECTION_H
#define UI_CHANGE_SELECTION_H

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

class Ui_Change_selection
{
public:
    QLineEdit *to_change_title_line_1;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *to_change_title_line_a;
    QTextEdit *to_chang_text_line_a;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Change_selection)
    {
        if (Change_selection->objectName().isEmpty())
            Change_selection->setObjectName(QString::fromUtf8("Change_selection"));
        Change_selection->resize(582, 303);
        to_change_title_line_1 = new QLineEdit(Change_selection);
        to_change_title_line_1->setObjectName(QString::fromUtf8("to_change_title_line_1"));
        to_change_title_line_1->setGeometry(QRect(330, 90, 241, 20));
        label_2 = new QLabel(Change_selection);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 70, 46, 13));
        label = new QLabel(Change_selection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 20, 46, 13));
        pushButton = new QPushButton(Change_selection);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 220, 141, 21));
        to_change_title_line_a = new QLineEdit(Change_selection);
        to_change_title_line_a->setObjectName(QString::fromUtf8("to_change_title_line_a"));
        to_change_title_line_a->setGeometry(QRect(20, 90, 251, 20));
        to_chang_text_line_a = new QTextEdit(Change_selection);
        to_chang_text_line_a->setObjectName(QString::fromUtf8("to_chang_text_line_a"));
        to_chang_text_line_a->setGeometry(QRect(20, 140, 251, 151));
        label_3 = new QLabel(Change_selection);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 70, 46, 13));
        label_4 = new QLabel(Change_selection);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 120, 46, 13));
        label_5 = new QLabel(Change_selection);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 20, 46, 13));
        label_6 = new QLabel(Change_selection);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(420, 0, 91, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        pushButton_2 = new QPushButton(Change_selection);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 130, 141, 20));
        pushButton_3 = new QPushButton(Change_selection);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 250, 141, 21));
        pushButton_4 = new QPushButton(Change_selection);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 150, 141, 21));
        pushButton_5 = new QPushButton(Change_selection);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 170, 141, 21));
        pushButton_6 = new QPushButton(Change_selection);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(330, 190, 141, 23));
        label_7 = new QLabel(Change_selection);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 0, 141, 16));
        label_7->setFont(font);
        dateEdit = new QDateEdit(Change_selection);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(80, 40, 111, 22));
        dateEdit_2 = new QDateEdit(Change_selection);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(400, 40, 110, 22));
        pushButton_7 = new QPushButton(Change_selection);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(330, 230, 141, 21));

        retranslateUi(Change_selection);

        QMetaObject::connectSlotsByName(Change_selection);
    } // setupUi

    void retranslateUi(QDialog *Change_selection)
    {
        Change_selection->setWindowTitle(QApplication::translate("Change_selection", "Dialog", 0, QApplication::UnicodeUTF8));
        to_change_title_line_1->setText(QString());
        label_2->setText(QApplication::translate("Change_selection", "Title", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Change_selection", "Date", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Change_selection", "Change date", 0, QApplication::UnicodeUTF8));
        to_change_title_line_a->setText(QString());
        label_3->setText(QApplication::translate("Change_selection", "Title", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Change_selection", "Text", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Change_selection", "Date", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Change_selection", "SELECTION", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Change_selection", "Add front to the selection", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Change_selection", "Close", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Change_selection", "Add back to the selection", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Change_selection", "Remove first", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Change_selection", "Remove last", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Change_selection", "ARTICLE", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Change_selection", "Change title", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Change_selection: public Ui_Change_selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_SELECTION_H
