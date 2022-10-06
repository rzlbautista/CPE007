#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x, count = 0;
	int sum = 0;
	cout << "Enter some numbers:" << endl;

	while (cin >> x)
	{
		sum += x;
		++count;
	}
	cout << "The average:" << sum % count << endl;
	return 0;
}