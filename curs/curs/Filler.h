#pragma once
#include <vector>
#include <string>
#include <fstream>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "IOE.h"
#include "Finder.h"


using namespace std;

class Filler
{
private:
	Finder finder;

private:
	int id_employee;
	int id_task;


public:
	Filler();

	void fill_Task(vector<Task>&);
	void fill_Employee(vector<Employee>&);
	void fill_Participation(vector<Participation>&);

	void read_file_Task(vector<Task>&);
	void read_file_Employee(vector<Employee>&);
	void read_file_Participation(vector<Participation>&);

};

