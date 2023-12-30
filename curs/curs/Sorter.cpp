#include "Sorter.h"






void Sorter::text_sort_Task()
{
	string out;
	
	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a sort option Task");
	
	out += format("{:^5} - {:25}\n", "1", "Id");
	out += format("{:^5} - {:25}\n", "2", "Task");
	out += format("{:^5} - {:25}\n", "3", "Descrption");
	out += format("{:^5} - {:25}\n", "4", "Deth-Line ");
	
	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");
	
	print(out);
}

void Sorter::text_sort_Employee()
{
	string out;

	out += format("{:*^30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a sort option Employee");

	out += format("{:^5} - {:25}\n", "1", "ID");
	out += format("{:^5} - {:25}\n", "2", "Name");
	out += format("{:^5} - {:25}\n", "3", "Phone");
	out += format("{:^5} - {:25}\n", "4", "Passport");
	out += format("{:^5} - {:25}\n", "5", "Department");
	out += format("{:^5} - {:25}\n", "6", "Job Title");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}

void Sorter::text_sort_Participation()
{
	string out;

	out += format("{:*^30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a sort option Particiation");

	out += format("{:^5} - {:25}\n", "1", "ID");
	out += format("{:^5} - {:25}\n", "2", "Status");
	out += format("{:^5} - {:25}\n", "3", "Description");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}





void Sorter::sort_Task(vector<Task>& temp)
{
	text_sort_Task();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Task& a, Task& b) {return a.get_IDTask() < b.get_IDTask(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Task& a, Task& b) {return a.get_task() < b.get_task(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Task& a, Task& b) {return a.get_Descrption() < b.get_Descrption(); });
		break;

	case '4':
		sort(temp.begin(), temp.end(), [](Task& a, Task& b) {
			int d, m, y;
			int d1, m1, y1;
			string s = a.get_dethLine();
			string s1 = b.get_dethLine();

			handle_date(s, d, m, y);
			handle_date(s1, d1, m1, y1);


			if (y < y1) {
				return 1;
			}
			else if (y > y1) {
				return 0;
			}

			else if (m < m1) {
				return 1;
			}
			else if (m > m1) {
				return 0;
			}

			else if (d < d1) {
				return 1;
			}
			else if (d > d1) {
				return 0;
			}

			return 0;
			});
		break;

	default:
		break;
	}

}

void Sorter::sort_Employee(vector<Employee>& temp)
{
	text_sort_Employee();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_IDEmployee() < b.get_IDEmployee(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_nameEmployee() < b.get_nameEmployee(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_phoneNumber() < b.get_phoneNumber(); });
		break;

	case '4':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_passportData() < b.get_passportData(); });
		break;

	case '5':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_department() < b.get_department(); });
		break;

	case '6':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_jobTitle() < b.get_jobTitle(); });
		break;

	default:
		break;
	}
}

void Sorter::sort_Participation(vector<Participation>& temp)
{
	text_sort_Participation();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Participation& a, Participation& b) {
			if (a.get_IDTask() == b.get_IDTask()) {
				return a.get_IDEmployee() < b.get_IDEmployee();
			}
			return a.get_IDTask() < b.get_IDTask();
			});
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Participation& a, Participation& b) {return a.get_assignmentStatus() < b.get_assignmentStatus(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Participation& a, Participation& b) {return a.get_shortDescription() < b.get_shortDescription(); });
		break;


	default:
		break;
	}
}
