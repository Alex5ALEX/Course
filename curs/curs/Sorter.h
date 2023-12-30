#pragma once
#include <vector>
#include <algorithm>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "IOE.h"

using namespace std;

class Sorter
{
public:
	void text_sort_Task();
	void text_sort_Employee();
	void text_sort_Participation();


	void sort_Task(vector<Task>&);//sort data
	void sort_Employee(vector<Employee>&);//sort phone
	void sort_Participation(vector<Participation>&);
};

