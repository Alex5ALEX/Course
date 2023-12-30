#include "Filler.h"


Filler::Filler() {
    id_employee = 1;
    id_task = 1;
}




void Filler::fill_Task(vector<Task>& temp)
{
    string task;
    string taskDescrption;
    string dethLine;


    print("Input task : ");
    task = input_str();

    print("Input description : ");
    taskDescrption = input_str();

    print("Input dethline : ");
    input_date(dethLine);
    


    temp.push_back(Task(id_task,task,taskDescrption,dethLine));
    id_task++;
}

void Filler::fill_Employee(vector<Employee>& temp)
{
    string name;
    string phone;
    string pass;
    string department;
    string jobTitle;



    print("Input name : ");
    name = input_str();

    print("Input phone: ");
    input_phone(phone);

    print("Input passport data : ");
    pass = input_str();

    print("Input  department : ");
    department = input_str();
    
    print("Input  jobtitle : ");
    jobTitle = input_str();


    temp.push_back(Employee(id_employee,name, phone, pass, department, jobTitle));
    id_employee++;
}

void Filler::fill_Participation(vector<Participation>& temp)
{

    int IDTask = 0;
    int IDEmployee = 0;
    string status;
    string descrip;
    
    
    print("Input task ID  : ");
    input_id(IDTask);
    
    print("Input employee ID: ");
    input_id(IDEmployee);
    
    
    print("Input status : ");
    status = input_str();
    
    print("Input description : ");
    descrip = input_str();
    
    
    temp.push_back(Participation(IDTask, IDEmployee,  status, descrip));
}




void Filler::read_file_Task(vector<Task>& temp)
{
    ifstream file("data/task.txt");

    string id;
    int iid = 0;
    string task;
    string Descrption;
    string dethLine;

    while (getline(file, id)) {
        handle_id(id, iid);

        getline(file, task);
        getline(file, Descrption);
        getline(file, dethLine); 

        temp.push_back(Task(iid, task, Descrption, dethLine));
    }
   
    file.close();


    id_task = finder.find_max_id_Task(temp);
    id_task++;
}


void Filler::read_file_Employee(vector<Employee>& temp)
{

    ifstream file("data/employee.txt");

    string id;
    int iid;
    string name;
    string phone;
    string pass;
    string department;
    string jobTitle;



    while (getline(file, id)) {
        handle_id(id, iid);

        getline(file, name);
        getline(file, phone);
        getline(file, pass);
        getline(file, department);
        getline(file, jobTitle);

        temp.push_back(Employee(iid, name, phone, pass, department, jobTitle));
    }

    file.close();


    id_employee = finder.find_max_id_Employee(temp);
    id_employee++;
}


void Filler::read_file_Participation(vector<Participation>& temp)
{
    ifstream file("data/participation.txt");

    string id;
    int IDTask = 0;
    int IDEmployee = 0;
    string status;
    string descrip;

    while (getline(file, id)) {
        handle_id(id, IDTask);

        getline(file, id);
        handle_id(id, IDEmployee);


        getline(file, status);
        getline(file, descrip);

        temp.push_back(Participation(IDTask, IDEmployee, status, descrip));
    }

    file.close();
}




