#include "Finder.h"






void Finder::text_find_Task()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a search option Task");

	out += format("{:^5} - {:25}\n", "1", "Id");
	out += format("{:^5} - {:25}\n", "2", "Task");
	out += format("{:^5} - {:25}\n", "3", "Descrption");
	out += format("{:^5} - {:25}\n", "4", "Deth-Line ");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}

void Finder::text_find_Employee()
{
	string out;

	out += format("{:*^30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a search option Employee");

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

void Finder::text_find_Participation()
{
	string out;

	out += format("{:*^30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a search option Particiation");

	out += format("{:^5} - {:25}\n", "1", "ID");
	//out += format("{:^5} - {:25}\n", "2", "ID Employee");
	out += format("{:^5} - {:25}\n", "2", "Status");
	out += format("{:^5} - {:25}\n", "3", "Description");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}







int Finder::find_Task(vector<Task>& temp, int& out)
{
	text_find_Task();

	char control = input_char();
	string str_temp;
	int int_temp = 0;

	switch (control)
	{
	//find by id
	case '1':
		print("Input task ID : ");
		if (input_id(int_temp)) { return 1; }//Проверка на правильный ввод

		if (find_id_Task(temp, out, int_temp)) {
			print("Object not found");
			return 1;
		}

		break;


	//find by task
	case '2':
		print("Input task : ");
		str_temp = input_str();

		if (find_task_Task(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;
	

	//find by decription
	case '3':
		print("Input description : ");
		str_temp= input_str();

		if (find_descr_Task(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;

	//find by deth-line
	case '4':
		if (input_date(str_temp)) {return 1;}

		if (find_dethLine_Task(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;

	default:
		return 1;
		break;
	}
	
	return 0;
}



int Finder::find_Employee(vector<Employee>& temp, int& out)
{
	text_find_Employee();

	char control = input_char();

	string str_temp;
	int int_temp = 0;

	switch (control)
	{
		//find by id
	case '1':
		print("Input employee ID : ");
		if (input_id(int_temp)) { return 1; }//Проверка на правильный ввод

		if (find_id_Employee(temp, out, int_temp)) {
			print("Object not found");
			return 1;
		}

		break;


		//find by name
	case '2':
		print("Input name : ");
		str_temp = input_str();

		if (find_name_Employee(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;


		//find by phone
	case '3':
		if (input_phone(str_temp)) { return 1; }

		if (find_phone_Employee(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;

		//find by passport
	case '4':
		print("Input passport data : ");
		str_temp = input_str();

		if (find_pass_Employee(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;

	//find by department
	case '5':
		print("Input department : ");
		str_temp = input_str();

		if (find_dep_Employee(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;

	//find by jobTitle
	case '6':
		print("Input jobTitle : ");
		str_temp = input_str();

		if (find_job_Employee(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;

	default:
		return 1;
		break;
	}

	return 0;
}



int Finder::find_Participation(vector<Participation>& temp, int& out)
{
	text_find_Participation();

	char control = input_char();

	string str_temp;
	int int_temp = 0;
	int int_temp1 = 0;

	switch (control)
	{
		//find by id
	case '1':
		print("Input Task ID : ");
		if (input_id(int_temp)) { return 1; }//Проверка на правильный ввод

		print("Input Employee ID : ");
		if (input_id(int_temp1)) { return 1; }//Проверка на правильный ввод


		if (find_id_Participation(temp, out, int_temp, int_temp1)) {
			print("Object not found");
			return 1;
		}

		break;


		//find by status
	case '2':
		print("Input status : ");
		str_temp = input_str();

		if (find_status_Participation(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;


		//find by description
	case '3':
		print("Input description : ");
		str_temp = input_str();

		if (find_descr_Participation(temp, out, str_temp)) {
			print("Object not found");
			return 1;
		}

		break;

	default:
		return 1;
		break;
	}

	return 0;
}







///
///		TASK
///

int Finder::find_id_Task(vector<Task>& temp, int& out, int id)
{
	auto result = find_if(temp.begin(), temp.end(), [id](Task& iter)
		{
			return iter.get_IDTask() == id;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_task_Task(vector<Task>& temp, int& out, string task)
{
	auto result = find_if(temp.begin(), temp.end(), [task](Task& iter)
		{
			return iter.get_task() == task;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_descr_Task(vector<Task>& temp, int& out, string descr)
{
	auto result = find_if(temp.begin(), temp.end(), [descr](Task& iter)
		{
			return iter.get_Descrption() == descr;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_dethLine_Task(vector<Task>& temp, int& out, string deth)
{
	auto result = find_if(temp.begin(), temp.end(), [deth](Task& iter)
		{
			return iter.get_dethLine() == deth;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}





///
///		EMPLOYEE
///

int Finder::find_id_Employee(vector<Employee>& temp, int& out , int id)
{
	auto result = find_if(temp.begin(), temp.end(), [id](Employee& iter)
		{
			return iter.get_IDEmployee() == id;
		});



	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_name_Employee(vector<Employee>& temp, int& out, string name)
{
	auto result = find_if(temp.begin(), temp.end(), [name](Employee& iter)
		{
			return iter.get_nameEmployee() == name;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_phone_Employee(vector<Employee>& temp, int& out, string phone)
{
	auto result = find_if(temp.begin(), temp.end(), [phone](Employee& iter)
		{
			return iter.get_phoneNumber() == phone;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_pass_Employee(vector<Employee>& temp, int& out, string pass)
{
	auto result = find_if(temp.begin(), temp.end(), [pass](Employee& iter)
		{
			return iter.get_passportData() == pass;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_dep_Employee(vector<Employee>& temp, int& out, string dep)
{
	auto result = find_if(temp.begin(), temp.end(), [dep](Employee& iter)
		{
			return iter.get_department() == dep;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_job_Employee(vector<Employee>& temp, int& out, string jobs)
{
	auto result = find_if(temp.begin(), temp.end(), [jobs](Employee& iter)
		{
			return iter.get_jobTitle() == jobs;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}



///
///		PARTICIPATION
///

int Finder::find_id_Participation(vector<Participation>& temp, int& out, int idT , int idE)

{
	auto result = find_if(temp.begin(), temp.end(), [idT, idE](Participation& iter)
		{
			return iter.get_IDTask() == idT && iter.get_IDEmployee() == idE;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_status_Participation(vector<Participation>& temp, int& out, string status)
{
	auto result = find_if(temp.begin(), temp.end(), [status](Participation& iter)
		{
			return iter.get_assignmentStatus() == status;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


int Finder::find_descr_Participation(vector<Participation>& temp, int& out, string descr)
{
	auto result = find_if(temp.begin(), temp.end(), [descr](Participation& iter)
		{
			return iter.get_shortDescription() == descr;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}





int Finder::find_idE_by_idT_Participation(vector<Participation>& temp, vector<int>& idE, int idT)
{
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_IDTask() == idT) {
			idE.push_back(temp[i].get_IDEmployee());
		}
	}
	return 0;
}

int Finder::find_idT_by_idE_Participation(vector<Participation>& temp, vector<int>& idT, int idE)
{
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_IDEmployee() == idE) {
			idT.push_back(temp[i].get_IDTask());
		}
	}
	return 0;
}





int Finder::find_max_id_Task(vector<Task>& temp)
{
	int out =  0;

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_IDTask() > out) {
			out = temp[i].get_IDTask();
		}
	}

	return out;
}


int Finder::find_max_id_Employee(vector<Employee>& temp)
{
	int out = 0;

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_IDEmployee() > out) {
			out = temp[i].get_IDEmployee();
		}
	}

	return out;
}









