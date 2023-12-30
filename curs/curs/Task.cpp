#include "Task.h"



Task::Task():Task::Task(-1,"","","") {}


Task::Task(int id,string task, string taskDescription,string dethLine) {
	this->IDTask= id;
	this->dethLine = dethLine;
	this->task = task;
	this->Descrption = taskDescription;
}




void Task::set_task(string task)
{
	this->task = task;
}

void Task::set_Descrption(string taskDescrption)
{
	this->Descrption = taskDescrption;
}

void Task::set_dethLine(string dethLine) 
{
	this->dethLine = dethLine;
}




int Task::get_IDTask()
{
	return IDTask;
}

string Task::get_task()
{
	return task;
}

string Task::get_Descrption()
{
	return Descrption;
}

string Task::get_dethLine()
{ 
	return dethLine;
}