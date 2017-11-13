#ifndef DESCRIPTION_H
#define DESCRIPTION_H
#include "QString"
#include "QStringList"
#include "stdio.h"

struct date
{
    int day;
    int month;
    int year;
};

class Description
{
public:
//    Description();
//    Description(const Description &description_copy);
//    Description(QString day_check, QString month_check, QString year_check, QString title_check);
//    ~Description();
    void set_day(QString set_day_1);
    void set_month(QString set_month_1);
    void set_year(QString set_year_1);
    void set_title(QString set_title_1);
    int get_day();
    int get_month();
    int get_year();
    QString get_title();
    virtual void show();
    virtual int get_type()=0;
protected:
    date Date;
    QString title;
};

#endif // DESCRIPTION_H
