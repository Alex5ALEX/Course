#include "Menu.h"




///		TEXT MENU
string Menu::Text_MainMenu() {
	string out;

	out += format("\n{:*^30}\n", "MAIN-MENU") + "\n";

	out += format("{:-^30}\n", "What do you want to do?") + "\n";
	out += format("{:^5} - {:.20}\n", "1", "Edit Task") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Edit Employee") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Edit Participation") + "\n";

	out += format("{:-<30}\n", "");

	out += format("{:^5} - {:.20}\n", "4", "Report ") + "\n";
	out += format("{:^5} - {:.20}\n", "5", "Save all") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	return out;
}


string Menu::Text_SubMenu(string ClassName) {
	string out;

	out += format("\n{:*^30}\n", "SUB-MENU") + "\n";

	out += format("{:-^30}\n", "What do you want to do?") + "\n";
	out += format("{:^5} - {:25}\n", "1", "Create " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "2", "Delete " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "3", "Edit " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "4", "Print " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "5", "Print list of " + ClassName) + "\n";

	out += format("{:-<30}\n", "");

	out += format("{:^5} - {:25}\n", "6", "Sort " + ClassName) + "\n";
	out += format("{:^5} - {:25}\n", "7", "Save " + ClassName) + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Back") + "\n";

	out += format("{:*<30}\n", "");

	return out;
}







///		MAIN MENU
int Menu::mainLoop() {
	filler.read_file_Task(data.temp_Task);
	filler.read_file_Employee(data.temp_Employee);
	filler.read_file_Participation(data.temp_Participation);



	bool LOOP = 1;

	char controller = 'q';


	while (LOOP) {
		print(Text_MainMenu());

		controller = input_char();

		system("cls");

		switch (controller)
		{
		case '1':
			subMenu_Task();
			break;

		case '2':
			subMenu_Employee();
			break;

		case '3':
			subMenu_Participation();
			break;

		case '4':
			reporter.report(data);
			break;

		case '5':
			printer.print_file_Task(data.temp_Task);
			printer.print_file_Employee(data.temp_Employee);
			printer.print_file_Participation(data.temp_Participation);
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







///		SUB MENU
int Menu::subMenu_Task()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		print(Text_SubMenu("Task"));

		controller = input_char();

		system("cls");

		switch (controller)
		{
		//create
		case '1':
			filler.fill_Task(data.temp_Task);
			break;

		//Delete 
		case '2':
			deleter.del_Task(data.temp_Task);
			break;

		//Edit
		case '3':
			editer.edit_Task(data.temp_Task);
			break;

		//Print
		case '4':
			printer.print_select_Task(data.temp_Task);
			break;

		//Print list
		case '5':
			printer.print_List_Task(data.temp_Task);
			break;

		//Sort list
		case '6':
			sorter.sort_Task(data.temp_Task);
			break;

		//Save in file
		case '7':
			printer.print_file_Task(data.temp_Task);
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
		print(Text_SubMenu("Employee"));

		controller = input_char();

		system("cls");


		switch (controller)
		{
		//create
		case '1':
			filler.fill_Employee(data.temp_Employee);
			break;

		//Delete 
		case '2':
			deleter.del_Employee(data.temp_Employee);
			break;

		//Edit
		case '3':
			editer.edit_Employee(data.temp_Employee);
			break;

		//Print
		case '4':
			printer.print_select_Employee(data.temp_Employee);
			break;

		//Print list
		case '5':
			printer.print_List_Employee(data.temp_Employee);
			break;

		//Sort list
		case '6':
			sorter.sort_Employee(data.temp_Employee);
			break;


		//Save in file
		case '7':
			printer.print_file_Employee(data.temp_Employee);
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
		print(Text_SubMenu("Particcipation"));

		controller = input_char();

		system("cls");


		switch (controller)
		{
		//create
		case '1':
			filler.fill_Participation(data.temp_Participation);
			break;

		//Delete 
		case '2':
			deleter.del_Participation(data.temp_Participation);
			break;

		//Edit
		case '3':
			editer.edit_Participation(data.temp_Participation);
			break;

		//Print
		case '4':
			printer.print_select_Participation(data.temp_Participation);
			break;

		//Print list
		case '5':
			printer.print_List_Participation(data.temp_Participation);
			break;

		//Sort list
		case '6':
			sorter.sort_Participation(data.temp_Participation);
			break;


		//Save in file
		case '7':
			printer.print_file_Participation(data.temp_Participation);
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





