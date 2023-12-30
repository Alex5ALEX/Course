#pragma once
#include <vector>
#include <fstream>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "Finder.h"

#include "IOE.h"

using namespace std;

class Printer
{
private:
	Finder finder;


public:

	void print_Task(Task&);
	void print_Employee(Employee&);
	void print_Participation(Participation&);


	void print_List_Task(vector<Task>&);
	void print_List_Employee(vector<Employee>&);
	void print_List_Participation(vector<Participation>&);


	
	void print_select_Task(vector<Task>&);
	void print_select_Employee(vector<Employee>&);
	void print_select_Participation(vector<Participation>&);



	void print_file_Task(vector<Task>&);
	void print_file_Employee(vector<Employee>&);
	void print_file_Participation(vector<Participation>&);
};

