#include "Task.h"



Task::Task():Task::Task("","","") {}

///id может задавать не с 0 а из БД
Task::Task(string task, string taskDescription,string dethLine) {

	// id 
	static int id = 0;
	this->IDTask= id;
	id++;


	this->dethLine = dethLine;
	this->task = task;
	this->taskDescrption = taskDescription;
}




void Task::set_task(string task)
{
	this->task = task;
}

void Task::set_taskDescrption(string taskDescrption)
{
	this->taskDescrption = taskDescrption;
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

string Task::get_taskDescrption()
{
	return taskDescrption;
}

string Task::get_dethLine()
{ 
	return dethLine;
}