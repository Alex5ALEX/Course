#include "Printer.h"



void Printer::print_Task(Task& temp) {
    string out;

    out += format("{:-^30}\n", "TASK") + "\n";
    out += format("{:<12} | {:<18} \n", "ID", temp.get_IDTask());
    out += format("{:<12} | {:<18} \n", "Task", temp.get_task());
    out += format("{:<12} | {:<18} \n", "Descrption", temp.get_Descrption());
    out += format("{:<12} | {:<18} \n", "Deth-Line", temp.get_dethLine());
    out += format("{:-<30}\n", "") + "\n";

    print(out);
}


void Printer::print_Employee(Employee& temp) {
    string out;

    out += format("{:-^30}\n", "EMPLOYEE") + "\n";
    out += format("{:<12} | {:<10} \n", "ID", temp.get_IDEmployee());
    out += format("{:<12} | {:<10} \n", "Name", temp.get_nameEmployee());
    out += format("{:<12} | {:<10} \n", "Phone", temp.get_phoneNumber());
    out += format("{:<12} | {:<10} \n", "Passport", temp.get_passportData());
    out += format("{:<12} | {:<10} \n", "Department", temp.get_department());
    out += format("{:<12} | {:<10} \n", "Job Title", temp.get_jobTitle());
    out += format("{:-<30}\n", "") + "\n";

    print(out);
}


void Printer::print_Participation(Participation& temp) {
    string out;

    out += format("{:-^30}\n", "PARTICIPATION") + "\n";
    out += format("{:<12} | {:<10} \n", "ID Task", temp.get_IDTask());
    out += format("{:<12} | {:<10} \n", "ID Employee", temp.get_IDEmployee());
    out += format("{:<12} | {:<10} \n", "Status", temp.get_assignmentStatus());
    out += format("{:<12} | {:<10} \n", "Description", temp.get_shortDescription());
    out += format("{:-<30}\n", "") + "\n";

    print(out);
}




void Printer::print_List_Task(vector<Task>& temp) {
    for (int i = 0; i < temp.size(); i++) {
        print_Task(temp[i]);
    }
}


void Printer::print_List_Employee(vector<Employee>& temp) {
    for (int i = 0; i < temp.size(); i++) {
        print_Employee(temp[i]);
    }
}


void Printer::print_List_Participation(vector<Participation>& temp) {
    for (int i = 0; i < temp.size(); i++) {
        print_Participation(temp[i]);
    }
}







void Printer::print_select_Task(vector<Task>& temp)
{
    int index = 0;
    if (finder.find_Task(temp, index) != 0) { return; }

    print_Task(temp[index]);
}


void Printer::print_select_Employee(vector<Employee>& temp)
{
    int index = 0;
    if (finder.find_Employee(temp, index) != 0) { return; }

    print_Employee(temp[index]);
}


void Printer::print_select_Participation(vector<Participation>& temp)
{
    int index = 0;
    if (finder.find_Participation(temp, index) != 0) { return; }

    print_Participation(temp[index]);

}






void Printer::print_file_Task(vector<Task>& temp)
{
    ofstream file("data/task.txt");
    file.clear();

    string out;

    for (int i = 0; i < temp.size(); i++) {

        out += to_string(temp[i].get_IDTask()) + "\n";
        out += temp[i].get_task() + "\n";
        out += temp[i].get_Descrption() + "\n";
        out += temp[i].get_dethLine() + "\n";

        file << out;
        out = "";
    }

    file.close();
}


void Printer::print_file_Employee(vector<Employee>& temp)
{
    ofstream file("data/employee.txt");
    file.clear();

    string out;

    for (int i = 0; i < temp.size(); i++) {

        out += to_string(temp[i].get_IDEmployee()) + "\n";
        out += temp[i].get_nameEmployee() + "\n";
        out += temp[i].get_phoneNumber() + "\n";
        out += temp[i].get_passportData() + "\n";
        out += temp[i].get_department() + "\n";
        out += temp[i].get_jobTitle() + "\n";

        file << out;
        out = "";
    }

    file.close();
}


void Printer::print_file_Participation(vector<Participation>& temp)
{
    ofstream file("data/participation.txt");
    file.clear();

    string out;

    for (int i = 0; i < temp.size(); i++) {

        out += to_string(temp[i].get_IDTask()) + "\n";
        out += to_string(temp[i].get_IDEmployee()) + "\n";
        out += temp[i].get_assignmentStatus() + "\n";
        out += temp[i].get_shortDescription() + "\n";

        file << out;
        out = "";
    }

    file.close();
}
