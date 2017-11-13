#ifndef ARTICLE_H
#define ARTICLE_H
#include <QString>
#include <QStringList>
#include <stdio.h>
#include "description.h"

//struct date
//{
//  int day;
//  int month;
//  int year;
//};

class Article: public Description
{
public:
    Article();
    Article(const Article &Article_copy);
    Article(QString day_1, QString month_1, QString year_1, QString Title_1, QString Text_1);
    ~Article();
//    struct
//    {
//      int day;
//      int month;
//      int year;
//    } Date;
//    QString text;
//    QString title;
//    void set_day(QString set_day_1);
//    void set_month(QString set_month_1);
//    void set_year(QString set_year_1);
    void set_text(QString set_text_1);
//    void set_title(QString set_title_1);
//    int get_day();
//    int get_month();
//    int get_year();
    QString get_text();
//    QString get_title();
    virtual QString transformation_of_the_text();
    void show();
    void show_method();
    virtual int get_type();
private:
//    date Date;
    QString text;
//    QString title;
};

#endif // ARTICLE_H
