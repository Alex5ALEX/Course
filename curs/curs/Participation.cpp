#include "Participation.h"



Participation::Participation():Participation::Participation(0, 0, "", "") {}


Participation::Participation(int IDTask, int IDEmployee, string assignmentStatus, string shortDescription) {
	this->IDTask = IDTask;
	this->IDEmployee = IDEmployee;
	this->assignmentStatus = assignmentStatus;
	this->shortDescription = shortDescription;
}




void Participation::set_IDTask(int IDTask)
{
	this->IDTask = IDTask;
}

void Participation::set_IDEmployee(int IDEmployee)			
{
	this->IDEmployee = IDEmployee;
}

void Participation::set_assignmentStatus(string assignmentStatus)
{
	this->assignmentStatus = assignmentStatus;
}

void Participation::set_shortDescription(string shortDescription)	
{
	this->shortDescription = shortDescription;
}




int Participation::get_IDTask()		
{
	return IDTask;
}

int Participation::get_IDEmployee()			
{
	return IDEmployee;
}

string Participation::get_assignmentStatus()
{
	return assignmentStatus;
}

string Participation::get_shortDescription()	
{
	return shortDescription; 
}