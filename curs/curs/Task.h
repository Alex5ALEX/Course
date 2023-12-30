#pragma once
#include <string>
#include <iostream>
#include <format>
#include <vector>

using namespace std;

class Task
{
private:
	int IDTask;
	string task;
	string Descrption;
	string dethLine;



public:
	Task();
	Task(int, string, string, string);


	//void set_IDTask(int);
	void set_task(string); 
	void set_Descrption(string);
	void set_dethLine(string);


	int	get_IDTask();
	string  get_task();
	string  get_Descrption();
	string  get_dethLine();
};

