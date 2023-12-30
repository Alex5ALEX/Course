#pragma once
#include <vector>
#include <typeinfo>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "IOE.h"
#include "Finder.h"
#include "Printer.h"


using namespace std;


class Deleter
{ 
private:
	Printer printer;
	Finder finder;

public:
	void del_Task(vector<Task>&);
	void del_Employee(vector<Employee>&);
	void del_Participation(vector<Participation>&);


	template<typename T>
	void del_by_index(T&, int);
};


