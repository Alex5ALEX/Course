#include "IOE.h"
/// INPUT 
/// OUTPUT
/// ELEMENTS


void print(string out) {
	cout << out;
}



char input_char() {
    char out;
	cin >> out;
    return out;
}


string input_str() {
    string a,b;
	cin >> a;
    getline(cin, b);
	return a+b;
}



int input_id(int& temp) {

	string str = input_str();
	regex regular("([0-9]{1,9})");
	cmatch result;


	if (regex_match(str.c_str(), result, regular)) {
		temp = stoi(str);
		return 0;
	}

	print("Invalid input type");
	return 1;
}


int handle_id(string str, int& temp) {
	regex regular("([0-9]{1,9})");
	cmatch result;

	if (regex_match(str.c_str(), result, regular)) {
		temp = stoi(str);
		return 0;
	}

	print("Invalid input type");
	return 1;
}

bool input_date(string& temp) {
	cout << "Input date in format \"DD.MM.YYYY\" :" << endl;
	string str = input_str();


	cmatch result;
	regex regular("([0-9]{1,2})(.)([0-9]{1,2})(.)([0-9]{4})");



	if (regex_match(str.c_str(), result, regular)) {
		temp = str;
		return 0;
	}

	print("An date was expected");
	return 1;
}

bool handle_date(string& str, int& d, int& m, int& y) {
	cmatch result;
	regex regular("([0-9]{1,2})(.)([0-9]{1,2})(.)([0-9]{4})");



	if (regex_match(str.c_str(), result, regular)) {
		d = stoi(result[1]);
		m = stoi(result[3]);
		y = stoi(result[5]);
		return 0;
	}

	print("An date was expected");
	return 1;
}



bool input_phone(string& temp) {
	cout << "Input telephone number in format \"+0...0\" :" << endl;
	string str = input_str();

	cmatch result;
	regex regular("([+]{1})([0-9]*)");
	

	if (regex_match(str.c_str(), result, regular)) {
		temp = str;
		return 0;
	}
	print("An date was expected");
	return 1;
}
