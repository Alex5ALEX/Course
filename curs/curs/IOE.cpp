#include "IOE.h"
/// INPUT 
/// OUTPUT
/// ELEMENTS


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
    int out = 0;
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

