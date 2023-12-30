#include "Deleter.h"





void Deleter::del_Task(vector<Task>& temp)
{
    //поиск индекса
    int index = 0;
    if (finder.find_Task(temp, index) != 0) { return; }


    //проверка на уверенность
    printer.print_Task(temp[index]);
    print("Do you really want delete? (y/n) :");
    char control = input_char();
    


    if (control == 'Y' || control == 'y') {
        //удаление объекта
        del_by_index<vector<Task>>(temp, index);
    }
    
}


void Deleter::del_Employee(vector<Employee>& temp)
{
    int index = 0;
    if (finder.find_Employee(temp, index) != 0) { return; }


    //проверка на уверенность
    printer.print_Employee(temp[index]);
    print("Do you really want delete? (y/n) :");
    char control = input_char();



    if (control == 'Y' || control == 'y') {
        //удаление объекта
        del_by_index<vector<Employee>>(temp, index);
    }

}


void Deleter::del_Participation(vector<Participation>& temp)
{
    int index = 0;
    if (finder.find_Participation(temp, index) != 0) { return; }


    //проверка на уверенность
    printer.print_Participation(temp[index]);
    print("Do you really want delete? (y/n) :");
    char control = input_char();



    if (control == 'Y' || control == 'y') {
        //удаление объекта
        del_by_index<vector<Participation>>(temp, index);
    }
    
}




template<typename T>
void Deleter::del_by_index(T& temp, int index)
{
    temp.erase(temp.begin() + index);
    print("Object was deleted");
}


