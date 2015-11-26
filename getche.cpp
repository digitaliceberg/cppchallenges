#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	char input;
	cout << "Example using of getche() function from conio.h" << endl << "Enter a key to be printed" << endl;
	while(1){
		input = getche();
		cout << "Key entered was: " << input << endl;
	}
	return 0;
}
