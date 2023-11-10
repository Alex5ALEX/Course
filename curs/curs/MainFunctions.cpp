#include "MainFunctions.h"


char GetController() {
    char out;
    cin >> out;
    return out;
}

string GetString() {
    string out;
    cin >> out;
    return out;
}

int GetInt() {
    int out=0;
    cin >> out;
    /*try
    {
        cin >> out;
        return out;
    }
    catch (const std::exception& k)
    {
        PrintString("ERROR");
    }*/
    return out;
}


void PrintString(string out) {
    cout << out;
}




///
/// FIND IN VECTOR
///
string findByID_Task(vector<Task>& vec, int & id, int & point, bool & check) {

    for (int i = 0; i < vec.size(); i++) {
        if (id == vec[i].get_IDTask()) {
            check = 1;
            point = i;
            break;
        }
    }

    if (!check) {
        return "Obeject with this id not found";
    }

    return "";
}

//string findByID_Employee(vector<Employee>& vec, int id, Employee* temp, bool & check) {
//
//}
//
//string findByID_Participation(vector<Participation>& vec, int idT, int idE, Participation* temp, bool & check) {
//
//}




///
///     ADD
///
void add_Task(Data & temp)
{
    vector<Task>& vec = temp.TaskVec;

    vec.push_back(Task());
}


void add_Employee(Data & temp)
{
    vector<Employee>& vec = temp.EmployeeVec;

    vec.push_back(Employee());
}


void add_Participation(Data & temp)
{
    vector<Participation>& vec = temp.ParticipationVec;

    vec.push_back(Participation());
}
//void fillDefoultVector_Task(int iter)
//{
//    for (int i = 0; i < iter; i++) {
//        fillDefoult_Task();
//    }
//}
//
//
//void fillDefoultVector_Employee(int iter)
//{
//    for (int i = 0; i < iter; i++) {
//        fillDefoult_Employee();
//    }
//}
//
//
//void fillDefoultVector_Participation(int iter)
//{
//    for (int i = 0; i < iter; i++) {
//        fillDefoult_Participation();
//    }
//}




///
///     DELETE
///
string del_Task(Data & temp, int id) {
    vector <Task> & vec = temp.TaskVec;
    int point=0;

    bool check = 0;
    

    PrintString(findByID_Task(vec, id, point, check));


    //chekc on id in list
    if (check) {
        vec.erase(vec.begin() + point);

        return "Object was deleted";
    }
}


string del_Employee(Data & temp,int id) {
    vector <Employee>& vec = temp.EmployeeVec;

    bool chekc = 0;
    int iter = -1;

    for (int i = 0; i < vec.size(); i++) {
        if (id == vec[i].get_IDEmployee()) {
            chekc = 1;
            iter = i;
            break;
        }
    }


    //chekc on id in list
    if (chekc) {
        vec.erase(vec.begin() + iter);

        return "Object was deleted";
    }
    else {
        return "Obeject with this id not found";
    }
}


string del_Participation(Data & temp, int idT , int idE) {
    vector <Participation>& vec = temp.ParticipationVec;

    bool chekc = 0;
    int iter = -1;

    for (int i = 0; i < vec.size(); i++) {
        if (idT == vec[i].get_IDTask()  &&  idE == vec[i].get_IDEmployee()) {
            chekc = 1;
            iter = i;
            break;
        }
    }


    //chekc on id in list
    if (chekc) {
        vec.erase(vec.begin() + iter);

        return "Object was deleted";
    }
    else {
        return "Obeject with this id not found";
    }
}




///
/// PRINT ELEMENT
///
string Print_Task(Data & temp, int id) {
    vector <Task>& vec = temp.TaskVec;

    bool chekc = 0;
    int iter = -1;

    for (int i = 0; i < vec.size(); i++) {
        if (id == vec[i].get_IDTask()) {
            chekc = 1;
            iter = i;
            break;
        }
    }


    //chekc on id in list
    if (chekc) {
        PrintString(vec[iter].print());

        return "";
    }
    else {

        return "Obeject with this id not found";
    }
}


string Print_Employee(Data & temp, int id) {
    vector <Employee>& vec = temp.EmployeeVec;

    bool chekc = 0;
    int iter = -1;

    for (int i = 0; i < vec.size(); i++) {
        if (id == vec[i].get_IDEmployee()) {
            chekc = 1;
            iter = i;
            break;
        }
    }




    //chekc on id in list
    if (chekc) {
        PrintString(vec[iter].print());

        return "";
    }
    else {

        return "Obeject with this id not found";
    }
}


string Print_Participation(Data & temp, int idT, int idE) {
    vector <Participation>& vec = temp.ParticipationVec;

    bool chekc = 0;
    int iter = -1;

    for (int i = 0; i < vec.size(); i++) {
        if (idT == vec[i].get_IDTask() && idE == vec[i].get_IDEmployee()) {
            chekc = 1;
            iter = i;
            break;
        }
    }


    //chekc on id in list
    if (chekc) {
        PrintString(vec[iter].print());

        return "";
    }
    else {

        return "Obeject with this id not found";
    }
}




///
/// PRINT_LIST
///
void PrintList_Task(Data & temp) {
    vector<Task> & vec = temp.TaskVec;

    for (int i = 0; i < vec.size(); i++) {
        PrintString(vec[i].print());
    }
}


void PrintList_Employee(Data & temp) {
    vector<Employee>& vec = temp.EmployeeVec;

    for (int i = 0; i < vec.size(); i++) {
        PrintString(vec[i].print());
    }
}


void PrintList_Participation(Data & temp) {
    vector<Participation>& vec = temp.ParticipationVec;

    for (int i = 0; i < vec.size(); i++) {
        PrintString(vec[i].print());
    }
}




