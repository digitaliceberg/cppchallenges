#include <iostream>

using namespace std;

int main()
{
	float pound_in_dollar = 1.487;
	float frfranc_in_dollar = 0.172;
	float germanmark_in_dollar = 0.584;
	float yen_in_dollar = 0.00955;
	float dollar, result;
	while(1)
	{
		cout << "Enter value in USD to be converted to 4 currencies:" << endl;
		cin >> dollar;
		result = dollar * pound_in_dollar;
		cout << dollar << " USD in British Pound is: " << result << endl;
		result = dollar * frfranc_in_dollar;
		cout << dollar << " USD in French Franc is: " << result << endl;
		result = dollar * germanmark_in_dollar;
		cout << dollar << " USD in German Mark is: " << result << endl;
		result = dollar * yen_in_dollar;
		cout << dollar << " USD in Japanese Yen is: " << result << endl;
	}
	return 0;
}
