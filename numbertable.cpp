/*
Challenge:
Assume that you want to generate a table of multiples of any given number.
Write a program that allows the user to enter the number and then generates the table, formatting it
into 10 columns and 20 lines. 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(){
	int multiplier = 1;
	for(int i = 0; i < 20; i++){
		for(int i = 0; i <10; i++){
			cout << setw(5) << (7 * multiplier);
			multiplier++;
		}
		cout << endl;
	}
	system("pause");
}

