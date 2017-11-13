#include "selection_of_texts.h"


Selection_of_texts::Selection_of_texts()
{
    Date.day = 1;
    Date.month = 1;
    Date.year = 2000;
    title = "Title_selection";
    selection_list.clear();
}

Selection_of_texts::Selection_of_texts(const Selection_of_texts &copy_selection)
{
    Date.day = copy_selection.Date.day;
    Date.month = copy_selection.Date.month;
    Date.year = copy_selection.Date.year;
    title = copy_selection.title;
    selection_list= copy_selection.selection_list;
}

Selection_of_texts::Selection_of_texts(QString day_1, QString month_1, QString year_1, QString title_1, QList<Article*> list_1)
{
    Selection_of_texts::set_day(day_1);
    Selection_of_texts::set_month(month_1);
    Selection_of_texts::set_year(year_1);
    Selection_of_texts::set_title(title_1);
    selection_list = list_1;
}

Selection_of_texts::~Selection_of_texts()
{
    selection_list.clear();
}

void Selection_of_texts::show()
{
    printf("Date of selection: %d.%d.%d\n",get_day(),get_month(),get_year());
    printf("Title of selection: %s\n",this->get_title().toAscii().data());
    for(int i = 0; i<selection_list.size();i++)
    {
        selection_list.at(i)->show();
    }
    printf("The end of selection\n");
}

int Selection_of_texts::get_type()
{
    return 2;
}

