#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <format>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "IOE.h"
#include "Data.h"


using namespace std;


class Serv {
private:
	Data Temp;


public:



	///// 
	/////	FIND IN VECTOR
	///// 
	Task* findByID_Task(int);

	Employee* findByID_Employee(int);

	Participation* findByID_Participation(int, int);




	///
	///  ADD
	///
	void add_Task();

	void add_Employee();

	void add_Participation();




	///
	/// DELETE
	///
	string del_Task(int);

	/*string del_Employee(Data &, int);

	string del_Participation(Data &, int, int);*/






	///
	///	PRINT ELEMENT
	///
	string Print_Task(Task*);

	string Print_Employee(Employee*);

	string Print_Participation(Participation*);




	///
	///	PRINT ELEMENT BY ID
	///
	string Print_Task_ID(int);

	string Print_Employee_ID(int);

	string Print_Participation_ID(int, int);
	
	
	
	
	/// 
	///	PRINT LIST 
	/// 
	void PrintList_Task();

	void PrintList_Employee();

	void PrintList_Participation();
};