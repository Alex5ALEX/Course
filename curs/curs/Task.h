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
	string taskDescrption;
	string dethLine;



public:
	Task();
	Task(string, string, string);




	//void set_IDTask(int);
	void set_task(string); 
	void set_taskDescrption(string);
	void set_dethLine(string);





	int	get_IDTask();
	string  get_task();
	string  get_taskDescrption();
	string  get_dethLine();






	string print();

	//friend ostream& operator<<(ostream& out, Task& a);

	//friend ostream& operator<<(ostream& out, vector <Task> a);

};

