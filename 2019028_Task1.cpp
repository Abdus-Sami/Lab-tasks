#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	//initialising the array and the result
	int arr[5] = { 6,3,9,14,64 };
	int result=0;
	string mystring;

	//Writing the array into the file
	ofstream summing;
	summing.open("Summing.txt");
	if (summing)
	{
		cout << "Writing the elements of array" << endl;
		for (int i = 0; i < 5; i++) {
			summing << arr[i] << " ";
		}
	}
	else
		cout << "Error";
	summing.close();


	//Reading the data from the file
	ifstream summing_r;
	summing_r.open("Summing.txt");
	cout << "Retrieved array is" << endl;
	if (summing_r)
	{
			for (int i = 0; i < 5; i++) {
				cout << arr[i] << " " ;
				result = result + arr[i];
			}
		
	}
		
	//Appending the data in the file
	fstream adding_r;
	adding_r.open("Summing.txt",ios::app);
	adding_r << " Sum is: " << result;
	cout << endl << "Sum appended successfully";
}

