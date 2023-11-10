#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "Data.h"


using namespace std;



// можно изменять для вывода/ввода в/из разных мест
char GetController();

string GetString();

int GetInt();

void PrintString(string);



/// 
///	FIND IN VECTOR
/// 
string findByID_Task(vector<Task>& , int &, int &, bool &);

//string findByID_Employee(vector<Employee>& , int, Employee *, bool &);
//
//string findByID_Participation(vector<Participation>& , int, int, Participation *, bool &);




///
///  ADD
///
void add_Task(Data &);

void add_Employee(Data &);

void add_Participation(Data &);


//void fillDefoultVector_Task(int);
//
//void fillDefoultVector_Employee(int);
//
//void fillDefoultVector_Participation(int);




///
/// DELETE
///
string del_Task(Data &, int);

string del_Employee(Data &, int);

string del_Participation(Data &, int, int);




///
///	PRINT ELEMENT
///
string Print_Task(Data &, int);

string Print_Employee(Data &, int);

string Print_Participation(Data &, int, int);




/// 
///	PRINT LIST 
/// 
void PrintList_Task(Data &);

void PrintList_Employee(Data &);

void PrintList_Participation(Data &);





