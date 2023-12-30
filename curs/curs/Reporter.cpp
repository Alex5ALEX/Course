#include "Reporter.h"


void Reporter::report_text()
{
	string out;

	out += format("\n{:*^30}\n", "REPORT-MENU") + "\n";

	out += format("{:-^30}\n", "Select Report?") + "\n";
	out += format("{:^5} - {:.20}\n", "1", "Data Report") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Task Report") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Employee Report") + "\n";

	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}



void Reporter::report(Data& data) {
	system("cls");

	char control = 'q';

	bool LOOP = 1;
	while (LOOP) {

		report_text();

		control = input_char();

		switch (control)
		{
		case '1':
			report_data(data);
			break;

		case '2':
			report_Task(data);
			break;

		case '3':
			report_Employee(data);
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			break;
		}
	}

}




void Reporter::report_data(Data& data)
{
	system("cls");

	string out;

	out += format("{:_^30}\n", "REPORT");


	out += format("{:<30}\n", "На данный момент в системе :");
	out += format("{:<20}:{:<10}\n", "Сотрудников", data.temp_Employee.size());
	out += format("{:<20}:{:<10}\n", "Заданий", data.temp_Task.size());
	out += format("{:<20}:{:<10}\n", "Заданий в работе", data.temp_Participation.size());

	//СОТРУДНИКИ
	out += format("{:_^30}\n", "");

	out += format("{:<30}\n", "Сотрудники :");
	for (int i = 0; i < data.temp_Employee.size(); i++) {
		out += format("{:<30}\n", data.temp_Employee[i].get_nameEmployee());
	}



	out += format("{:_^30}\n", "");
	//ЗАДАНИЯ
	out += format("{:<30}\n", "Задания :");
	for (int i = 0; i < data.temp_Task.size(); i++) {
		out += format("{:<30}\n", data.temp_Task[i].get_task());
	}

	out += format("{:_^30}\n", "");

	out += "\n\n";
	print(out);
}



void Reporter::report_Task(Data& data)
{
	system("cls");

	string out;

	vector<int> idE;
	int index = 0;

	out += format("{:_^30}\n", "TASK REPORT");
	
	for (int i = 0; i < data.temp_Task.size(); i++) {
		out += format("{:<30}\n", data.temp_Task[i].get_task());


		//поиск зависимостей через participation
		idE.clear();
		finder.find_idE_by_idT_Participation(data.temp_Participation, idE, data.temp_Task[i].get_IDTask());

		for (int j = 0; j < idE.size(); j++) {
			//Проверка на существование объекта зависимости
			if (finder.find_id_Employee(data.temp_Employee, index, idE[j])) { continue; }


			out += format("\t> {:<30}\n", data.temp_Employee[index].get_nameEmployee());
		}

	}

	out += "\n\n";

	print(out);
}




void Reporter::report_Employee(Data& data)
{
	system("cls");

	string out;

	vector<int> idT;
	int index = 0;


	out += format("{:_^30}\n", "EMPLOYEE REPORT");

	for (int i = 0; i < data.temp_Employee.size(); i++) {
		out += format("{:<30}\n", data.temp_Employee[i].get_nameEmployee());


		//поиск зависимостей через participation
		idT.clear();
		finder.find_idT_by_idE_Participation(data.temp_Participation, idT, data.temp_Employee[i].get_IDEmployee());

		for (int j = 0; j < idT.size(); j++) {
			//Проверка на существование объекта зависимости
			if (finder.find_id_Task(data.temp_Task, index, idT[j])) { continue; }


			out += format("\t> {:<30}\n", data.temp_Task[index].get_task());
		}

	}

	out += "\n\n";

	print(out);
}


