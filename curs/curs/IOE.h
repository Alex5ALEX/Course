#pragma once
#include <iostream>
#include <string>
#include <regex>

using namespace std;

void print(string);

char input_char();

string input_str();



int input_id(int&);

int handle_id(string,int&);



bool input_date(string&);

bool handle_date(string&,int&, int&, int&);

bool input_phone(string&);


