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





string Task::print() {
	string out;

	out += format("{:-<30}\n", "") + "\n";
	out += format("{:<12} | {:<18} \n", "ID", IDTask);
	out += format("{:<12} | {:<18} \n", "Task", task);
	out += format("{:<12} | {:<18} \n", "Descrption", taskDescrption);
	out += format("{:<12} | {:<18} \n", "Deth-Line", dethLine);
	out += format("{:-<30}\n", "") + "\n";
	return out;
}



/*
ostream& operator<<(ostream& out, Task& a) {
	out << a.print();
	return out;
}




ostream& operator<<(ostream& out, vector <Task> a) {
	for(int i=0;i<a.size(); i++)
	{ 
		out << format("{:-<30}\n", "");

		out << a[i];

		out << format("{:-<30}\n", "") << endl;
	}

	return out;
}*/