#ifndef SELECTION_OF_TEXTS_H
#define SELECTION_OF_TEXTS_H
#include "description.h"
#include "QList"
#include "stdio.h"
#include "article.h"



class Selection_of_texts: public Description
{
public:
    Selection_of_texts();
    Selection_of_texts(const Selection_of_texts &copy_selection);
    Selection_of_texts(QString day_1, QString month_1, QString year_1, QString Title_1,QList<Article*> list_1);
    ~Selection_of_texts();
    QList<Article*> selection_list;
    virtual void show();
    virtual int get_type();
};

#endif // SELECTION_OF_TEXTS_H
