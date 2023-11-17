#include "Menu.h"




///
///		TEXT MENU
///
string Menu::Text_MainMenu() {
	string out;

	out += format("\n{:*<30}\n", "") + "\n";

	out += format("{:-^30}\n", "What do you want to do?") + "\n";
	out += format("{:^5} - {:.20}\n", "T", "Edit Task") + "\n";
	out += format("{:^5} - {:.20}\n", "E", "Edit Employee") + "\n";
	out += format("{:^5} - {:.20}\n", "P", "Edit Participation") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	return out;
}


string Menu::Text_FunctionMenu(string ClassName) {
	string out;

	out += format("\n{:*<30}\n", "") + "\n";

	out += format("{:-^30}\n", "What do you want to do?") + "\n";
	out += format("{:^5} - {:25}\n", "C", "Create " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "D", "Delete " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "E", "Edit " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "P", "Print " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "L", "Print list of " + ClassName) + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	return out;
}


string Menu::Text_EditTaskMenu() {
	string out;

	out += format("\n{:*<30}\n", "") + "\n";

	out += format("{:-^30}\n", "What do you want to edit?") + "\n";
	out += format("{:^5} - {:.20}\n", "T", "Task") + "\n";
	out += format("{:^5} - {:.20}\n", "D", "Description") + "\n";
	out += format("{:^5} - {:.20}\n", "L", "Deadline") + "\n";
	out += format("{:^5} - {:.20}\n", "S", "Set Element") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	return out;
}


string Menu::Text_EditEmployeeMenu() {
	string out;

	out += format("\n{:*<30}\n", "") + "\n";

	out += format("{:-^30}\n", "What do you want to edit?") + "\n";
	out += format("{:^5} - {:.20}\n", "N", "Name") + "\n";
	out += format("{:^5} - {:.20}\n", "P", "Phone") + "\n";
	out += format("{:^5} - {:.20}\n", "A", "Passport") + "\n";
	out += format("{:^5} - {:.20}\n", "D", "Department") + "\n";
	out += format("{:^5} - {:.20}\n", "J", "Job Title") + "\n";
	out += format("{:^5} - {:.20}\n", "S", "Set Element") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	return out;
}


string Menu::Text_EditParticipationMenu() {
	string out;

	out += format("\n{:*<30}\n", "") + "\n";

	out += format("{:-^30}\n", "What do you want to edit?") + "\n";
	out += format("{:^5} - {:.20}\n", "T", "ID Task") + "\n";
	out += format("{:^5} - {:.20}\n", "E", "ID Employee") + "\n";
	out += format("{:^5} - {:.20}\n", "A", "Status") + "\n";
	out += format("{:^5} - {:.20}\n", "D", "Description") + "\n";
	out += format("{:^5} - {:.20}\n", "S", "Set Element") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	return out;
}




///
///		MAIN MENU
///
int Menu::mainLoop() {
	bool LOOP = 1;

	char controller = 'q';


	while (LOOP) {
		PrintString(Text_MainMenu());

		controller = GetController();

		system("cls");

		switch (controller)
		{
		case 'T':
		case 't':
			subMenu_Task();
			break;

		case 'E':
		case 'e':
			subMenu_Employee();
			break;

		case 'P':
		case 'p':
			subMenu_Participation();
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}


	}

	return 0;
}




///
///		SUB MENU
///
int Menu::subMenu_Task()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		PrintString(Text_FunctionMenu("Task"));

		controller = GetController();

		system("cls");

		switch (controller)
		{
		//create
		case 'C':
		case 'c':
			Serv.add_Task();
			break;

		//Delete 
		case 'D':
		case 'd':
			delMenu_Task();
			break;

		//Edit
		case 'E':
		case 'e':
			//editMenu_Task();
			break;

		//Print
		case 'P':
		case 'p':
			printMenu_Task();
			break;

		//Print list
		case 'L':
		case 'l':
			Serv.PrintList_Task();
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}


	}

	return 0;
}


int Menu::subMenu_Employee()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		PrintString(Text_FunctionMenu("Employee"));

		controller = GetController();

		system("cls");


		switch (controller)
		{
		//create
		case 'C':
		case 'c':
		Serv.add_Employee();
			break;

		//Delete 
		case 'D':
		case 'd':
			delMenu_Employee();
			break;

		//Edit
		case 'E':
		case 'e':
			//editMenu_Employee();
			break;

		//Print
		case 'P':
		case 'p':
			printMenu_Employee();
			break;

		//Print list
		case 'L':
		case 'l':
			Serv.PrintList_Employee();
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}


	}

	return 0;
}


int Menu::subMenu_Participation()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		PrintString(Text_FunctionMenu("Particcipation"));

		controller = GetController();

		system("cls");


		switch (controller)
		{
		//create
		case 'C':
		case 'c':
			Serv.add_Participation();
			break;

		//Delete 
		case 'D':
		case 'd':
			delMenu_Participation();
			break;

		//Edit
		case 'E':
		case 'e':
			//editMenu_Participation();
			break;

		//Print
		case 'P':
		case 'p':
			printMenu_Participation();
			break;

		//Print list
		case 'L':
		case 'l':
			Serv.PrintList_Participation();
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}


	}

	return 0;
}




///
///		DELETE MENU
///
//int Menu::delMenu_Task() {
//	PrintString("Input id:");
//
//	int id = GetInt();
//
//	PrintString(del_Task(Temp, id));
//
//	return 0;
//}
//
//
//int Menu::delMenu_Employee() {
//	PrintString("Input id:");
//
//	int id = GetInt();
//
//	PrintString(del_Employee(Temp, id));
//
//	return 0;
//}
//
//
//int Menu::delMenu_Participation() {
//	PrintString("Input id Task:");
//
//	int idT = GetInt();
//
//	PrintString("Input id Employee:");
//
//	int idE = GetInt();
//
//	PrintString(del_Participation(Temp, idT, idE));
//
//	return 0;
//}




///
///		PRINT MENU
///
int Menu::printMenu_Task() {
	PrintString("Input id:");

	int id = GetInt();

	PrintString(Serv.Print_Task_ID(id));

	return 0;
}


int Menu::printMenu_Employee() {
	PrintString("Input id:");

	int id = GetInt();

	PrintString(Serv.Print_Employee_ID(id));

	return 0;
}


int Menu::printMenu_Participation() {
	PrintString("Input id Task:");

	int idT = GetInt();

	PrintString("Input id Employee:");

	int idE = GetInt();

	PrintString(Serv.Print_Participation_ID(idT, idE));

	return 0;
}




/////
/////		EDIT MENU
/////
//int Menu::editMenu_Task() {
//	vector<Task>& vec = Temp.TaskVec;
//	
//	Task a;								// ¿ Aﬂ-“Œ ’–≈Õ‹
//	Task* task = &a;
//
//	PrintString("Input ID:\n");
//	int id = GetInt();
//
//	bool LOOP = 1;
//	char controller = 'q';
//	while (LOOP)
//	{
//		system("cls");
//
//		bool check = 1;
//		for (int i = 0; i < vec.size(); i++) {
//			if (vec[i].get_IDTask() == id) {
//				check = 0;
//				task = &vec[i];
//			}
//		}
//		if (check) {
//			PrintString("Element with this id not founded");
//			LOOP = 0;
//			break;
//		}
//
//
//
//		PrintString(task->print());
//		PrintString(Text_EditTaskMenu());
//		
//		controller = GetController();
//		
//		
//
//		switch (controller)
//		{
//		case 'T':// Edit Task
//		case 't':
//			PrintString("Input task:\n");
//			task->set_task(GetString());
//			break;
//			
//		case 'D':// Edit Description
//		case 'd':
//			PrintString("Input descriptoin:\n");
//			task->set_taskDescrption(GetString());
//			break;
//			
//		case 'L':// Edit Deth-Line
//		case 'l':
//			PrintString("Input deth-line:\n");
//			task->set_dethLine(GetString());
//			break;
//			
//		case 'S':// Set Element
//		case 's':
//			PrintString("Input ID:\n");
//			id = GetInt();
//			break;
//			
//			
//		case 'Q':
//		case 'q':
//			LOOP = 0;
//			break;
//			
//		default:
//			cout << "ERROR" << endl;
//			break;
//		}
//
//	}
//	
//	return 0;
//}
//
//
//int Menu::editMenu_Employee() {
//	vector<Employee>& vec = Temp.EmployeeVec;
//
//	Employee a;								// ¿ Aﬂ-“Œ ’–≈Õ‹
//	Employee* employee = &a;
//
//	PrintString("Input ID:\n");
//	int id = GetInt();
//
//	bool LOOP = 1;
//	char controller = 'q';
//	while (LOOP)
//	{
//		system("cls");
//
//		bool check = 1;
//		for (int i = 0; i < vec.size(); i++) {
//			if (vec[i].get_IDEmployee() == id) {
//				check = 0;
//				employee = &vec[i];
//			}
//		}
//		if (check) {
//			PrintString("Element with this id not founded");
//			LOOP = 0;
//			break;
//		}
//
//
//
//		PrintString(employee->print());
//		PrintString(Text_EditEmployeeMenu());
//
//		controller = GetController();
//
//
//
//		switch (controller)
//		{
//		case 'N':// Edit Name
//		case 'n':
//			PrintString("Input name:\n");
//			employee->set_nameEmployee(GetString());
//			break;
//
//		case 'P':// Edit Phone
//		case 'p':
//			PrintString("Input phone number:\n");
//			employee->set_phoneNumber(GetString());
//			break;
//
//		case 'A':// Edit Deth-Line
//		case 'a':
//			PrintString("Input passport data:\n");
//			employee->set_passportData(GetString());
//			break;
//
//		case 'D':// Edit Deth-Line
//		case 'd':
//			PrintString("Input department:\n");
//			employee->set_department(GetString());
//			break;
//
//		case 'J':// Edit Deth-Line
//		case 'j':
//			PrintString("Input job title:\n");
//			employee->set_jobTitle(GetString());
//			break;
//
//		case 'S':// Set Element
//		case 's':
//			PrintString("Input ID:\n");
//			id = GetInt();
//			break;
//
//
//		case 'Q':
//		case 'q':
//			LOOP = 0;
//			break;
//
//		default:
//			cout << "ERROR" << endl;
//			break;
//		}
//
//	}
//
//	return 0;
//}
//
//
//int Menu::editMenu_Participation() {
//	vector<Participation>& vec = Temp.ParticipationVec;
//
//	Participation a;								// ¿ Aﬂ-“Œ ’–≈Õ‹
//	Participation* participation = &a;
//
//
//	PrintString("Input ID Task:\n");
//	int idT = GetInt();
//
//	PrintString("Input ID Employee:\n");
//	int idE = GetInt();
//
//
//	bool LOOP = 1;
//	char controller = 'q';
//	while (LOOP)
//	{
//		system("cls");
//
//		bool check = 1;
//		for (int i = 0; i < vec.size(); i++) {
//			if (vec[i].get_IDTask() == idT && vec[i].get_IDEmployee() == idE) {
//				check = 0;
//				participation = &vec[i];
//				break;
//			}
//		}
//		if (check) {
//			PrintString("Element with this id not founded");
//			LOOP = 0;
//			break;
//		}
//
//
//
//		PrintString(participation->print());
//		PrintString(Text_EditParticipationMenu());
//
//		controller = GetController();
//
//
//
//		switch (controller)
//		{
//		case 'T':// Edit Name
//		case 't':
//			PrintString("Input ID Task:\n");
//			idT = GetInt();
//			participation->set_IDTask(idT);
//			break;
//
//		case 'E':// Edit Phone
//		case 'e':
//			PrintString("Input ID Employee:\n");
//			idE = GetInt();
//			participation->set_IDEmployee(idE);
//			break;
//
//		case 'A':// Edit Deth-Line
//		case 'a':
//			PrintString("Input status:\n");
//			participation->set_assignmentStatus(GetString());
//			break;
//
//		case 'D':// Edit Deth-Line
//		case 'd':
//			PrintString("Input description:\n");
//			participation->set_shortDescription(GetString());
//			break;
//
//
//		case 'S':// Set Element
//		case 's':
//			PrintString("Input ID Task:\n");
//			idT = GetInt();
//
//			PrintString("Input ID Employee:\n");
//			idE = GetInt();
//			break;
//
//
//		case 'Q':
//		case 'q':
//			LOOP = 0;
//			break;
//
//		default:
//			cout << "ERROR" << endl;
//			break;
//		}
//
//	}
//
//	return 0;
//}
