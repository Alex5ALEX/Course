#pragma once
#include <string>
#include <format>
#include <iostream>
#include <vector>


using namespace std;


class Employee
{
private:
	int IDEmployee;
	string nameEmployee;
	string phoneNumber;
	string passportData;
	string department;
	string jobTitle;


public:
	Employee();
	Employee(string, string, string, string, string);


	
	void set_nameEmployee(string);
	void set_phoneNumber(string);
	void set_passportData(string);
	void set_department(string);
	void set_jobTitle(string);



	int		get_IDEmployee();
	string	get_nameEmployee();
	string	get_phoneNumber();
	string	get_passportData();
	string	get_department();
	string	get_jobTitle();
};

