/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 13. Nov 15:17:20 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *Article_v;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLineEdit *Line_for_title_art;
    QLabel *label_3;
    QTextEdit *art_text;
    QVBoxLayout *verticalLayout_8;
    QPushButton *art_button_add_front;
    QPushButton *art_button_add_back;
    QPushButton *change_art_button;
    QWidget *Selection_v;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QDateEdit *dateEdit_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *title_for_sel;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *sel_add_button;
    QSpacerItem *verticalSpacer;
    QPushButton *button_remove_first;
    QSpacerItem *verticalSpacer_2;
    QPushButton *button_remove_last;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *add_sel_back_button;
    QPushButton *sel_add_front_button;
    QPushButton *button_change_sel;
    QWidget *list_v;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QPushButton *del_button_front;
    QPushButton *del_button_end;
    QPushButton *first_button;
    QPushButton *last_button;
    QPushButton *size_button;
    QPushButton *show_changes_button;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *button_to_file;
    QTextEdit *text_for_list;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(757, 537);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(367, 465));
        tabWidget->setMaximumSize(QSize(367, 16777215));
        Article_v = new QWidget();
        Article_v->setObjectName(QString::fromUtf8("Article_v"));
        gridLayout_2 = new QGridLayout(Article_v);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_4 = new QLabel(Article_v);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_9->addWidget(label_4);

        dateEdit = new QDateEdit(Article_v);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_9->addWidget(dateEdit);

        label_2 = new QLabel(Article_v);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_9->addWidget(label_2);

        Line_for_title_art = new QLineEdit(Article_v);
        Line_for_title_art->setObjectName(QString::fromUtf8("Line_for_title_art"));

        verticalLayout_9->addWidget(Line_for_title_art);

        label_3 = new QLabel(Article_v);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);

        verticalLayout_9->addWidget(label_3);

        art_text = new QTextEdit(Article_v);
        art_text->setObjectName(QString::fromUtf8("art_text"));

        verticalLayout_9->addWidget(art_text);


        verticalLayout_10->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        art_button_add_front = new QPushButton(Article_v);
        art_button_add_front->setObjectName(QString::fromUtf8("art_button_add_front"));

        verticalLayout_8->addWidget(art_button_add_front);

        art_button_add_back = new QPushButton(Article_v);
        art_button_add_back->setObjectName(QString::fromUtf8("art_button_add_back"));

        verticalLayout_8->addWidget(art_button_add_back);

        change_art_button = new QPushButton(Article_v);
        change_art_button->setObjectName(QString::fromUtf8("change_art_button"));

        verticalLayout_8->addWidget(change_art_button);


        verticalLayout_10->addLayout(verticalLayout_8);


        gridLayout_2->addLayout(verticalLayout_10, 0, 0, 1, 1);

        tabWidget->addTab(Article_v, QString());
        Selection_v = new QWidget();
        Selection_v->setObjectName(QString::fromUtf8("Selection_v"));
        gridLayout_3 = new QGridLayout(Selection_v);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        dateEdit_2 = new QDateEdit(Selection_v);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        verticalLayout_4->addWidget(dateEdit_2);

        label_5 = new QLabel(Selection_v);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        title_for_sel = new QLineEdit(Selection_v);
        title_for_sel->setObjectName(QString::fromUtf8("title_for_sel"));

        verticalLayout_5->addWidget(title_for_sel);

        label_11 = new QLabel(Selection_v);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_5->addWidget(label_11);


        gridLayout_3->addLayout(verticalLayout_5, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(Selection_v);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        horizontalLayout_3->addWidget(label_6);

        label = new QLabel(Selection_v);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);


        gridLayout_3->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget_2 = new QListWidget(Selection_v);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        horizontalLayout_2->addWidget(listWidget_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sel_add_button = new QPushButton(Selection_v);
        sel_add_button->setObjectName(QString::fromUtf8("sel_add_button"));

        verticalLayout->addWidget(sel_add_button);

        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        button_remove_first = new QPushButton(Selection_v);
        button_remove_first->setObjectName(QString::fromUtf8("button_remove_first"));

        verticalLayout->addWidget(button_remove_first);

        verticalSpacer_2 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        button_remove_last = new QPushButton(Selection_v);
        button_remove_last->setObjectName(QString::fromUtf8("button_remove_last"));

        verticalLayout->addWidget(button_remove_last);


        horizontalLayout_2->addLayout(verticalLayout);

        listWidget = new QListWidget(Selection_v);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        horizontalLayout_2->addWidget(listWidget);


        gridLayout_3->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        add_sel_back_button = new QPushButton(Selection_v);
        add_sel_back_button->setObjectName(QString::fromUtf8("add_sel_back_button"));

        verticalLayout_3->addWidget(add_sel_back_button);

        sel_add_front_button = new QPushButton(Selection_v);
        sel_add_front_button->setObjectName(QString::fromUtf8("sel_add_front_button"));

        verticalLayout_3->addWidget(sel_add_front_button);

        button_change_sel = new QPushButton(Selection_v);
        button_change_sel->setObjectName(QString::fromUtf8("button_change_sel"));

        verticalLayout_3->addWidget(button_change_sel);


        gridLayout_3->addLayout(verticalLayout_3, 4, 0, 1, 1);

        tabWidget->addTab(Selection_v, QString());
        list_v = new QWidget();
        list_v->setObjectName(QString::fromUtf8("list_v"));
        gridLayout_5 = new QGridLayout(list_v);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        del_button_front = new QPushButton(list_v);
        del_button_front->setObjectName(QString::fromUtf8("del_button_front"));

        gridLayout_4->addWidget(del_button_front, 0, 0, 1, 1);

        del_button_end = new QPushButton(list_v);
        del_button_end->setObjectName(QString::fromUtf8("del_button_end"));

        gridLayout_4->addWidget(del_button_end, 1, 0, 1, 1);

        first_button = new QPushButton(list_v);
        first_button->setObjectName(QString::fromUtf8("first_button"));

        gridLayout_4->addWidget(first_button, 2, 0, 1, 1);

        last_button = new QPushButton(list_v);
        last_button->setObjectName(QString::fromUtf8("last_button"));

        gridLayout_4->addWidget(last_button, 3, 0, 1, 1);

        size_button = new QPushButton(list_v);
        size_button->setObjectName(QString::fromUtf8("size_button"));

        gridLayout_4->addWidget(size_button, 4, 0, 1, 1);

        show_changes_button = new QPushButton(list_v);
        show_changes_button->setObjectName(QString::fromUtf8("show_changes_button"));

        gridLayout_4->addWidget(show_changes_button, 5, 0, 1, 1);

        lineEdit = new QLineEdit(list_v);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 6, 0, 1, 1);

        pushButton_5 = new QPushButton(list_v);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_4->addWidget(pushButton_5, 7, 0, 1, 1);

        button_to_file = new QPushButton(list_v);
        button_to_file->setObjectName(QString::fromUtf8("button_to_file"));

        gridLayout_4->addWidget(button_to_file, 8, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(list_v, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        text_for_list = new QTextEdit(centralWidget);
        text_for_list->setObjectName(QString::fromUtf8("text_for_list"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text_for_list->sizePolicy().hasHeightForWidth());
        text_for_list->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(7);
        text_for_list->setFont(font3);
        text_for_list->setReadOnly(true);

        gridLayout->addWidget(text_for_list, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 757, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", " Please, enter the date of writting the article", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Enter the title of the article", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", " Enter the text of the article", 0, QApplication::UnicodeUTF8));
        art_button_add_front->setText(QApplication::translate("MainWindow", "Add front to the list", 0, QApplication::UnicodeUTF8));
        art_button_add_back->setText(QApplication::translate("MainWindow", "Add back to the list", 0, QApplication::UnicodeUTF8));
        change_art_button->setText(QApplication::translate("MainWindow", "Change", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Article_v), QApplication::translate("MainWindow", "Add articles", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", " Please, enter the date of writting the selection", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Enter the title of selection", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", " for selection", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", " from list              ", 0, QApplication::UnicodeUTF8));
        sel_add_button->setText(QApplication::translate("MainWindow", "Add to selection", 0, QApplication::UnicodeUTF8));
        button_remove_first->setText(QApplication::translate("MainWindow", "Remove first", 0, QApplication::UnicodeUTF8));
        button_remove_last->setText(QApplication::translate("MainWindow", "Remove last", 0, QApplication::UnicodeUTF8));
        add_sel_back_button->setText(QApplication::translate("MainWindow", "Add selection back", 0, QApplication::UnicodeUTF8));
        sel_add_front_button->setText(QApplication::translate("MainWindow", "Add selection front ", 0, QApplication::UnicodeUTF8));
        button_change_sel->setText(QApplication::translate("MainWindow", "Change", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Selection_v), QApplication::translate("MainWindow", "Add selections", 0, QApplication::UnicodeUTF8));
        del_button_front->setText(QApplication::translate("MainWindow", "Delete from front of the list", 0, QApplication::UnicodeUTF8));
        del_button_end->setText(QApplication::translate("MainWindow", "Delete from end of the list", 0, QApplication::UnicodeUTF8));
        first_button->setText(QApplication::translate("MainWindow", "The first member of the list", 0, QApplication::UnicodeUTF8));
        last_button->setText(QApplication::translate("MainWindow", "The last member of the list", 0, QApplication::UnicodeUTF8));
        size_button->setText(QApplication::translate("MainWindow", "The size of the list", 0, QApplication::UnicodeUTF8));
        show_changes_button->setText(QApplication::translate("MainWindow", "Show changes", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Read from file ", 0, QApplication::UnicodeUTF8));
        button_to_file->setText(QApplication::translate("MainWindow", "Read to file", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(list_v), QApplication::translate("MainWindow", "The list", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
