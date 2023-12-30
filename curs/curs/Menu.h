#pragma once
#include <string>
#include <format>
#include <iostream>
#include <vector>

#include "Data.h"

#include "Printer.h"
#include "Filler.h"
#include "Deleter.h"
#include "Editer.h"
#include "Finder.h"
#include "Reporter.h"
#include "Sorter.h"


using namespace std;


class Menu {
private:
	Data data;

private:
	Printer printer;
	Filler	filler;
	Deleter deleter;
	Editer editer;
	Finder finder;
	Reporter reporter;
	Sorter sorter;

private:
	string Text_MainMenu();

	string Text_SubMenu(string);


///		MAIN_MENU
public:
	int mainLoop();


///		SUB_MENU
public:
	int subMenu_Task();
	int subMenu_Employee();
	int subMenu_Participation();
};

