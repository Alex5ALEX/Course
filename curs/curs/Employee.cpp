#include "Employee.h"



Employee::Employee(): Employee::Employee("", "", "", "", "") {}

Employee::Employee(string nameEmployee, string phoneNumber, string passportData, string department, string jobTitle)
{
	static int id = 0;
	IDEmployee = id;
	id++;

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




string Employee::print()
{
	string out;

	out += format("{:-<30}\n", "") + "\n";
	out += format("{:<12} | {:<10} \n", "ID", IDEmployee);
	out += format("{:<12} | {:<10} \n", "Name", nameEmployee);
	out += format("{:<12} | {:<10} \n", "Phone", phoneNumber);
	out += format("{:<12} | {:<10} \n", "Passport", passportData);
	out += format("{:<12} | {:<10} \n", "Department", department);
	out += format("{:<12} | {:<10} \n", "Job Title", jobTitle);
	out += format("{:-<30}\n", "") + "\n";

	return out;
}



/*
ostream& operator<<(ostream& out, Employee& a)
{
	out << a.print();
	return out;
}




ostream& operator<<(ostream& out, vector <Employee> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		out << format("{:-<30}\n", "");

		cout << a[i];

		out << format("{:-<30}\n", "");
	}
	return out;
}*/