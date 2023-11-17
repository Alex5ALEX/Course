#pragma once
#include <string>
#include <format>
#include <iostream>
#include <vector>

#include "Serv.h"


using namespace std;


class Menu {
private:
	Serv Serv;

private:
	string Text_MainMenu();

	string Text_FunctionMenu(string);

	string Text_EditTaskMenu();

	string Text_EditEmployeeMenu();
	
	string Text_EditParticipationMenu();



///
///		MAIN_MENU
///
public:
	int mainLoop();



///
///		SUB_MENU
///
public:
	int subMenu_Task();

	int subMenu_Employee();

	int subMenu_Participation();



///
///		FUNCTION_MENU
///
private:
	/// DELETE MENU
	/*
	int delMenu_Task();
	
	int delMenu_Employee();
	
	int delMenu_Participation();
	*/
	
	// PRINT ELEMENT MENU
	int printMenu_Task();
	
	int printMenu_Employee();
	
	int printMenu_Participation();


	/////	EDIT MENU
	//int editMenu_Task();
	//
	//int editMenu_Employee();
	//
	//int editMenu_Participation();


};

