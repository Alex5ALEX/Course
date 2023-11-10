#pragma once
#include <string>
#include <format>
#include <iostream>
#include <vector>

using namespace std;

class Participation
{


public:
	int IDTask;
	int IDEmployee;
	string assignmentStatus;
	string shortDescription;



public:

	Participation();
	Participation(int, int, string, string);

	void set_IDTask(int);
	void set_IDEmployee(int);
	void set_assignmentStatus(string);
	void set_shortDescription(string);
	

	int get_IDTask();
	int get_IDEmployee();
	string get_assignmentStatus();
	string get_shortDescription();
	
	

	
	string print();

	
	//friend ostream& operator<<(ostream& out, Participation& a);

	//friend ostream& operator<<(ostream& out, vector <Participation> a);
};

