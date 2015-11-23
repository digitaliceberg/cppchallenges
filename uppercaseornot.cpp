#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	while(1)
	{
		char testchar;
		cout << "Enter a charater to find out if it's lower case or not:" << endl;
		cin >> testchar;
		if(islower(testchar)){
			cout << "This character is lower case." << endl;
		}
		else
		{
			cout << "This character is upper case" << endl;
		}
	}
	return 0;
}
