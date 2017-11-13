#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <article.h>
#include <QDateTimeEdit>
#include "list.h"
#include "description.h"
#include "selection_of_texts.h"
#include "QList"
#include "QTimer"
#include "dialog.h"
#include "dialog_for_selection.h"
#include "change_selection.h"
#include "QListWidget"
#include "QCheckBox"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Article *change_item;
    int counter_of_article;
    Selection_of_texts *change_sel;
    bool flag;

private slots:
    void check();
    void add_article_front();
    void add_article_back();
    void add_to_the_selection();
    void add_sel_front();
    void add_sel_back();
    void show_size();
    void show_artciles_for_selection();
    void show_list();
    void delete_from_front_of_the_list();
    void delete_from_end_of_the_list();
    void first();
    void change_art();
    void last();
    void read_from_file();
    void write_to_file();
    void remove_from_selection_first();
    void remove_from_selection_last();
    void show_articles_of_selection();
    void on_button_change_selection();
private:
    Ui::MainWindow *ui;
    List list;
  //  Article art;
    QTimer *timer;
    QList<Article*> lis;
};

#endif // MAINWINDOW_H
