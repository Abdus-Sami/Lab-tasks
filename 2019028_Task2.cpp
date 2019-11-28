#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	/*initialising of strings and integers*/
	string mystring;
	int age;
    cout << "Writing to the file" << endl;
	cout << "Enter your Name: ";
	getline(cin, mystring);
	cout << "Enter you age: ";
	cin >> age;


	//writing the data into the file
	ofstream info;
	info.open("Students_Info.txt");
	if(info)
	{
		info << mystring << endl << age;
	}

	//Reading the data from the file
	cout << "Reading the data from the file" << endl;
	ifstream info_r;
	info_r.open("Students_Info.txt");
	if (info_r)
	{
		getline(info_r, mystring);
		cout << mystring;
		info_r >> age;
		cout << endl << age;
	}

}
