#include <QtGui/QApplication>
#include "mainwindow.h"
#include "list.h"
#include "stdio.h"
#include "stdlib.h"
#include "QString"
#include "cassert"
#include "selection_of_texts.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
//    using namespace std;
//    Article exmp1_article;
//   // exmp1_article.show();
//    Article exmp2_article("3","11","2007","title","this text{ is big} efgdg");
//   // exmp2_article.show();
//    Article exmp3_article;
//    exmp3_article = exmp1_article;
//    //exmp3_article.show();
//    //exmp2_article.show_method();
//    Article exmp4_article("02", "09","1998","TE","I wanna 10");


// //    lab_2
//    List list_1;
////    assert(list_1.is_empty()&&list_1.size_of==0);
////    list_1.add_front(exmp2_article);
////    list_1.add_back(exmp4_article);
////    list_1.show_list();
//    Selection_of_texts selection_1;
//    selection_1.selection_list.append(&exmp2_article);
//    selection_1.selection_list.append(&exmp4_article);
//    list_1.add_back(&exmp1_article);
//    list_1.add_front(&selection_1);
//    list_1.show_list();
//////    assert(list_1.is_empty()==false&&list_1.size_of==2);
//////    assert(list_1.front().get_day()==3
//////           &&list_1.front().get_month()==11
//////           &&list_1.front().get_year()==2007
//////           &&list_1.front().get_title()=="title"
//////           && list_1.front().get_text()=="this text{ is big} efgdg");
//////    assert(list_1.back().get_day()==2
//////           &&list_1.back().get_month()==9
//////           &&list_1.back().get_year()==1998
//////           &&list_1.back().get_title()=="TE"
//////           &&list_1.back().get_text()=="I wanna 10");
//////    assert(list_1.front().get_day()==exmp2_article.get_day()
//////           &&list_1.front().get_month()==exmp2_article.get_month()
//////           &&list_1.front().get_title()==exmp2_article.get_title()
//////           &&list_1.front().get_year()==exmp2_article.get_year()
//////           &&list_1.front().get_text()==exmp2_article.get_text());
////    list_1.add_back(exmp1_article);
//////    assert(list_1.back().get_day()==1&&
//////           list_1.back().get_month()==1&&
//////           list_1.back().get_year()==2000&&
//////           list_1.back().get_title()=="Title"&&
//////           list_1.back().get_text()=="Text");
////    list_1.show_list();
////    list_1.delete_back();
//////    assert(list_1.back().get_day()!=exmp1_article.get_day()
//////            || list_1.back().get_month()!=exmp1_article.get_month()
//////            || list_1.back().get_year()!=exmp1_article.get_year()
//////            || list_1.back().get_title()!= exmp1_article.get_title()
//////            || list_1.back().get_text()!=exmp1_article.get_text());
////    list_1.delete_front();
//////    assert(list_1.front().get_day()!=exmp2_article.get_day()
//////            || list_1.front().get_month()!=exmp2_article.get_month()
//////            || list_1.front().get_year()!=exmp2_article.get_year()
//////            || list_1.front().get_title()!=exmp2_article.get_title()
//////            || list_1.front().get_text()!=exmp2_article.get_text());
////    char a[100];
////    printf("Please, enter the filepath or filename: ");
////    scanf("%s",a);
////    QString file_name = a;
////    //printf("%s\n",file_name.toAscii().data());
////    list_1.read_from_file(file_name);
////    list_1.show_list();
////    printf("Please enter the filename: ");
////    char b[100];
////    scanf("%s",b);
////    QString file_name_for_writting = b;
////    list_1.write_to_file(file_name_for_writting);
}
