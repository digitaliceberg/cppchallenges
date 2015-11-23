#include <iostream>
#include <cstdlib>

using namespace std;

int echonumber(int number)
{
	cout << number << endl;
	return 0;
}
int main()
{
	int number = 10;
	echonumber(number);
	number *= 2;
	echonumber(number);
	number--;
	echonumber(number);
	system("pause");
	return 0;
}
