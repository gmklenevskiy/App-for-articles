#ifndef LIST_H
#define LIST_H
#include "article.h"
#include "string"
#include "QTextStream"
#include "QFile"
#include "QDataStream"
#include "iostream"
#include "stdio.h"
using namespace std;
#include "QStringList"
#include "selection_of_texts.h"
#include "QList"


struct Item
{
    Item* next, *prev;
    Description *data;
};

class List
{
    Item *head, *tail;
public:
    List();
    List(const List &copy_list);
    ~List();
    void add_back(Description *art);
    void add_front(Description *art);
    void delete_back();
    void delete_front();
    Description &front();
    Description &back();
    Description& operator [](int i);
    bool is_empty();
    int size();
    void read_from_file(QString file_name);
    void write_to_file(QString file_name);
    int size_of;
    void show_list();
    QList<Article*> lis;
    //QFile file;
};

#endif // LIST_H
