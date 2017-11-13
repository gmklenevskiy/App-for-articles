#include "description.h"

//Description::Description()
//{
//    title = "Title";
//    Date.day = 1;
//    Date.month = 1;
//    Date.year = 2000;
//}
//Description::Description(const Description &description_copy)
//{
//    title = description_copy.title;
//    Date.day = description_copy.Date.day;
//    Date.month = description_copy.Date.month;
//    Date.year = description_copy.Date.year;
//}
//Description::Description(QString day_check, QString month_check, QString year_check, QString title_check)
//{
//    Description::set_day(day_check);
//    Description::set_month(month_check);
//    Description::set_year(year_check);
//    Description::set_title(title_check);
//}

void Description::set_day(QString set_day_1)
{
    QRegExp check("\\d*");
    if(check.exactMatch(set_day_1) && set_day_1.toInt()>0 && set_day_1.toInt()<32)
        Date.day = set_day_1.toInt();
    else
        Date.day = 1;
}

void Description::set_month(QString set_month_1)
{
    QRegExp check("\\d*");
    if(check.exactMatch(set_month_1) && set_month_1.toInt()>0 && set_month_1.toInt()<13)
        Date.month = set_month_1.toInt();
    else
        Date.month = 1;
}

void Description::set_year(QString set_year_1)
{
    QRegExp check("\\d*");
    if(check.exactMatch(set_year_1) && set_year_1.toInt()>1975)
        Date.year = set_year_1.toInt();
    else
        Date.year = 2000;
}

void Description::set_title(QString set_title_1)
{
    if(set_title_1!="")
        title = set_title_1;
    else
        title = "Title";
}

int Description::get_day()
{
    return this->Date.day;
}

int Description::get_month()
{
    return this->Date.month;
}

int Description::get_year()
{
    return this->Date.year;
}

QString Description::get_title()
{
    return this->title;
}

void Description::show()
{
    printf("Day: %d\n",this->get_day());
    printf("Month: %d\n", this->get_month());
    printf("Year: %d\n", this->get_year());
    printf("Title: %s\n",this->get_title().toAscii().data());
}
