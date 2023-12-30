#pragma once
#include <vector>
#include <format>
#include <string>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "Finder.h"

#include "IOE.h"
#include "Finder.h"
#include "Printer.h"

using namespace std;

class Editer
{
private:
	Finder finder;
	Printer printer;

public:
	int edit_Task(vector<Task>&);
	int edit_Employee(vector<Employee>&);
	int edit_Participation(vector<Participation>&);


private:
	void text_edit_Task();
	void text_edit_Employee();
	void text_edit_Participation();
};

