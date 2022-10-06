#include <iostream>
using namespace std;

int main()
{
	int x, count = 0;
	float sum = 0.0;
	cout << "Enter some integers: \n"
			"(Break with any letter)" << endl;

	while (cin >> x) // x = 10, 7
		{
		sum += x; // sum = sum + x, sum = 10 + 7 = 17
		++count; // count = count + 1, count = 1 + 1 = 2

		}
	cout << "The average of the numbers: " << sum / count << endl;
	return 0;




}