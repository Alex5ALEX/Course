#include "Serv.h"





///
/// FIND IN VECTOR
///
/// 


Task* Serv::findByID_Task(int id) {
    Task* out=nullptr;


    for (int i = 0; i < Temp.TaskVec.size(); i++) {
        if (id == Temp.TaskVec[i].get_IDTask()) {
            out = &Temp.TaskVec.at(i);
            break;
        }
    }

    if (out == nullptr) {
        PrintString("Obeject with this id not found");
    }

    return out;
}


Employee* Serv::findByID_Employee(int id) {
    Employee* out = nullptr;


    for (int i = 0; i < Temp.EmployeeVec.size(); i++) {
        if (id == Temp.EmployeeVec[i].get_IDEmployee()) {
            out = &Temp.EmployeeVec.at(i);
            break;
        }
    }

    if (out == nullptr) {
        PrintString("Obeject with this id not found");
    }

    return out;
}


Participation* Serv::findByID_Participation(int idT, int idE) {
    Participation* out = nullptr;


    for (int i = 0; i < Temp.ParticipationVec.size(); i++) {
        if (idT == Temp.ParticipationVec[i].get_IDTask() && idE == Temp.ParticipationVec[i].get_IDEmployee()) {
            out = &Temp.ParticipationVec.at(i);
            break;
        }
    }

    if (out == nullptr) {
        PrintString("Obeject with this id not found");
    }

    return out;
}




///
///     ADD
///
void Serv::add_Task()
{
    Temp.TaskVec.push_back(Task());
}


void Serv::add_Employee()
{
    Temp.EmployeeVec.push_back(Employee());
}


void Serv::add_Participation()
{
    Temp.ParticipationVec.push_back(Participation());
}




///
///     DELETE
///
string Serv::del_Task(int id) {
    Task* temp = nullptr;

    temp = findByID_Task(id);


    //chekc on id in list
    if (temp != nullptr) {
        Temp.TaskVec.erase(**temp);

        return "Object was deleted";
    }
    return "";
}


//string Serv::del_Employee(Data & temp,int id) {
//    vector <Employee>& vec = temp.EmployeeVec;
//    int point = 0;
//
//    PrintString(findByID_Employee(vec, id, point));
//   
//
//    //chekc on id in list
//    if (point >= 0) {
//        vec.erase(vec.begin() + point);
//
//        return "Object was deleted";
//    }
//    return "";
//}
//
//
//string Serv::del_Participation(Data & temp, int idT , int idE) {
//    vector <Participation>& vec = temp.ParticipationVec;
//    int point = 0;
//
//    PrintString(findByID_Participation(vec, idT, idE, point));
//
//
//    //chekc on id in list
//    if (point >= 0) {
//        vec.erase(vec.begin() + point);
//
//        return "Object was deleted";
//    }
//    return "";
//}



///
/// PRINT ELEMENT
///
string Serv::Print_Task(Task* temp) {
    string out;
    
    out += format("{:-<30}\n", "") + "\n";
    out += format("{:<12} | {:<18} \n", "ID", temp->get_IDTask());
    out += format("{:<12} | {:<18} \n", "Task", temp->get_task());
    out += format("{:<12} | {:<18} \n", "Descrption", temp->get_taskDescrption());
    out += format("{:<12} | {:<18} \n", "Deth-Line", temp->get_dethLine());
    out += format("{:-<30}\n", "") + "\n";

    return out;
}


string Serv::Print_Employee(Employee * temp) {
    string out;
 
 	out += format("{:-<30}\n", "") + "\n";
 	out += format("{:<12} | {:<10} \n", "ID", temp->get_IDEmployee());
 	out += format("{:<12} | {:<10} \n", "Name", temp->get_nameEmployee());
 	out += format("{:<12} | {:<10} \n", "Phone", temp->get_phoneNumber());
 	out += format("{:<12} | {:<10} \n", "Passport", temp->get_passportData());
 	out += format("{:<12} | {:<10} \n", "Department", temp->get_department());
 	out += format("{:<12} | {:<10} \n", "Job Title", temp->get_jobTitle());
 	out += format("{:-<30}\n", "") + "\n";
 
 	return out;
}
 
 
string Serv::Print_Participation(Participation * temp) {
    string out;
    
    out += format("{:-<30}\n", "") + "\n";
    out += format("{:<12} | {:<10} \n", "ID Task", temp->get_IDTask());
    out += format("{:<12} | {:<10} \n", "ID Employee", temp->get_IDEmployee());
    out += format("{:<12} | {:<10} \n", "Status", temp->get_assignmentStatus());
    out += format("{:<12} | {:<10} \n", "Description", temp->get_shortDescription());
    out += format("{:-<30}\n", "") + "\n";
    
    return out;
}




///
/// PRINT ELEMENT BY ID
///
string Serv::Print_Task_ID(int id) {
    Task* temp = nullptr;

    temp = findByID_Task(id);

    if (temp != nullptr) {
        return Print_Task(temp);
    }
    return "";
}


string Serv::Print_Employee_ID(int id) {
    Employee* temp = nullptr;

    temp = findByID_Employee(id);

    if (temp != nullptr) {
        return Print_Employee(temp);
    }
    return "";
}


string Serv::Print_Participation_ID(int idT, int idE) {
    Participation* temp = nullptr;

    temp = findByID_Participation(idT, idE);

    if (temp != nullptr) {
        return Print_Participation(temp);
    }
    return "";
}




///
/// PRINT_LIST
///
void Serv::PrintList_Task() {
    for (int i = 0; i < Temp.TaskVec.size(); i++) {
        PrintString(Print_Task(&Temp.TaskVec.at(i)));
    }
}


void Serv::PrintList_Employee() {
    for (int i = 0; i < Temp.EmployeeVec.size(); i++) {
        PrintString(Print_Employee(&Temp.EmployeeVec.at(i)));
    }
}


void Serv::PrintList_Participation() {
    for (int i = 0; i < Temp.ParticipationVec.size(); i++) {
        PrintString(Print_Participation(&Temp.ParticipationVec.at(i)));
    }
}




