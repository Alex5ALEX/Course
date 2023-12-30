#include "Employee.h"


Employee::Employee(): Employee::Employee(-1, "", "", "", "", "") {}


Employee::Employee(int id, string nameEmployee, string phoneNumber, string passportData, string department, string jobTitle)
{
	
	this->IDEmployee = id;
	this->nameEmployee = nameEmployee;
	this->phoneNumber = phoneNumber;
	this->passportData = passportData;
	this->department = department;
	this->jobTitle = jobTitle;

}




void Employee::set_nameEmployee(string nameEmployee)
{
	this->nameEmployee = nameEmployee;
}

void Employee::set_phoneNumber(string phoneNumber)	
{ 
	this->phoneNumber = phoneNumber; 
}

void Employee::set_passportData(string passportData)		
{
	this->passportData = passportData;
}

void Employee::set_department(string department)	
{
	this->department = department;
}

void Employee::set_jobTitle(string jobTitle)		
{ 
	this->jobTitle = jobTitle; 
}




int		Employee::get_IDEmployee()	
{
	return IDEmployee; 
}

string	Employee::get_nameEmployee()	
{
	return nameEmployee; 
}

string	Employee::get_phoneNumber()		
{ 
	return phoneNumber;
}

string	Employee::get_passportData()	
{
	return passportData; 
}

string	Employee::get_department()		
{
	return department; 
}

string	Employee::get_jobTitle()		
{ 
	return jobTitle;
}



