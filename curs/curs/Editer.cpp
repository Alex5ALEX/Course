#include "Editer.h"

int Editer::edit_Task(vector<Task>& temp)
{
	//поиск индекса
	int index = 0;
	if (finder.find_Task(temp, index) != 0) { return 1; }


	
	bool LOOP = 1;
	char controller = 'q';
	while (LOOP)
	{
		system("cls");
	
		printer.print_Task(temp[index]);
		text_edit_Task();
			


		controller = input_char();
		
		string svar;
	
		switch (controller)
		{
		case '1':// Edit Task
			print("Input Task : ");
			temp[index].set_task(input_str());
			break;
				
		case '2':// Edit Description
			print("Input Description : ");
			temp[index].set_Descrption(input_str());
			break;
				
		case '3':// Edit Deth-Line
			print("Input Deth-Line : ");
			if (input_date(svar)) {break;}
			temp[index].set_dethLine(svar);
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




int Editer::edit_Employee(vector<Employee>& temp)
{
	//поиск индекса
	int index = 0;
	if (finder.find_Employee(temp, index) != 0) { return 1; }


	bool LOOP = 1;
	char controller = 'q';
	while (LOOP)
	{
		system("cls");

		printer.print_Employee(temp[index]);
		text_edit_Employee();



		controller = input_char();

		string svar;

		switch (controller)
		{
		case '1':// Edit nameEmployee
			print("Input Name Employee : ");
			temp[index].set_nameEmployee(input_str());
			break;

		case '2':// Edit phoneNumber
			print("Input Phone: ");
			if (input_phone(svar)) { break; }
			temp[index].set_phoneNumber(svar);
			break;

		case '3':// Edit passportData
			print("Input passport Data : ");
			temp[index].set_passportData(input_str());
			break;


		case '4':// Edit department
			print("Input Department : ");
			temp[index].set_department(input_str());
			break;

		case '5':// Edit Job Title
			print("Input Job Title : ");
			temp[index].set_jobTitle(input_str());
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

int Editer::edit_Participation(vector<Participation>& temp)
{
	//поиск индекса
	int index = 0;
	if (finder.find_Participation(temp, index) != 0) { return 1; }


	bool LOOP = 1;
	char controller = 'q';
	while (LOOP)
	{
		system("cls");

		printer.print_Participation(temp[index]);
		text_edit_Participation();



		controller = input_char();

		string svar;
		int ivar;

		switch (controller)
		{
		case '1':// Edit IDTask
			print("Input ID Task : ");
			if (input_id(ivar)) { break; }
			temp[index].set_IDTask(ivar);
			break;

		case '2':// Edit IDEmployee
			print("Input ID Employee: ");
			if (input_id(ivar)) { break; }
			temp[index].set_IDEmployee(ivar);
			break;

		case '3':// Edit assignmentStatus
			print("Input Status : ");
			temp[index].set_assignmentStatus(input_str());
			break;


		case '4':// Edit shortDescription
			print("Input Description : ");
			temp[index].set_shortDescription(input_str());
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






void Editer::text_edit_Task()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "What do you want to edit?");

	out += format("{:^5} - {:25}\n", "1", "Task");
	out += format("{:^5} - {:25}\n", "2", "Descrption");
	out += format("{:^5} - {:25}\n", "3", "Deth-Line ");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}



void Editer::text_edit_Employee()
{
	string out;

	out += format("{:*^30}\n", "Edit Employee") + "\n";
	out += format("{:^30}", "What do you want to edit?\n");

	out += format("{:^5} - {:25}\n", "1", "Name");
	out += format("{:^5} - {:25}\n", "2", "Phone");
	out += format("{:^5} - {:25}\n", "3", "Passport");
	out += format("{:^5} - {:25}\n", "4", "Department");
	out += format("{:^5} - {:25}\n", "5", "Job Title");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}



void Editer::text_edit_Participation()
{
	string out;

	out += format("{:*^30}\n", "Edit Participation") + "\n";
	out += format("{:^30}\n", "What do you want to edit?");

	out += format("{:^5} - {:25}\n", "1", "ID Task");
	out += format("{:^5} - {:25}\n", "2", "ID Employee");
	out += format("{:^5} - {:25}\n", "3", "Status");
	out += format("{:^5} - {:25}\n", "4", "Description");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}



