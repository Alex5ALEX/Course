#pragma once
#include <vector>
#include <fstream>

#include "Task.h"
#include "Employee.h"
#include "Participation.h"

#include "Data.h"

#include "Finder.h"

#include "IOE.h"

using namespace std;

class Reporter
{
private:
	Finder finder;

public:

	void report_text();
	void report(Data&);

	void report_data(Data&);
	void report_Task(Data&);
	void report_Employee(Data&);
};

