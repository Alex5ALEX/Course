#pragma once
#include <string>
#include <format>
#include <vector>
#include <algorithm>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "IOE.h"

using namespace std;

class Finder
{
public:
	void text_find_Task();
	void text_find_Employee();
	void text_find_Participation();


	//основные функции поиска
	//возвращает 0 если все корректно
	int find_Task(vector<Task>&, int&);
	int find_Employee(vector<Employee>&, int&);
	int find_Participation(vector<Participation>&, int&);



	//Поиск в  TASK
	//(вектор. инидекс. ид) 
	int find_id_Task(vector<Task>&, int&, int);
	int find_task_Task(vector<Task>&, int&, string);
	int find_descr_Task(vector<Task>&, int&, string);
	int find_dethLine_Task(vector<Task>&, int&, string);//сравнение по дате


	//Поиск в Employee
	int find_id_Employee(vector<Employee>&, int&, int);
	int find_name_Employee(vector<Employee>&, int&, string);
	int find_phone_Employee(vector<Employee>&, int&, string);
	int find_pass_Employee(vector<Employee>&, int&, string);
	int find_dep_Employee(vector<Employee>&, int&, string);
	int find_job_Employee(vector<Employee>&, int&, string);


	//Поиск в Participation
	int find_id_Participation(vector<Participation>&, int&, int, int);
	int find_status_Participation(vector<Participation>&, int&, string);
	int find_descr_Participation(vector<Participation>&, int&, string);

	int find_idE_by_idT_Participation(vector<Participation>&, vector<int>&, int);
	int find_idT_by_idE_Participation(vector<Participation>&, vector<int>&, int);


	//поиск наибольшего ид
	int find_max_id_Task(vector<Task>&);
	int find_max_id_Employee(vector<Employee>&);
};

