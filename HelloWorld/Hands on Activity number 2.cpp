#include <iostream>
using namespace std;

int main()
{
	float startValue = 100;
	float interestRate = 0.015;
	float firstYearValue;
	float secondYearValue;
	float thirdYearValue;

	firstYearValue = (startValue + (interestRate * 100) * 1);
	secondYearValue = (startValue + (interestRate * 100) * 2);
	thirdYearValue = (startValue + (interestRate * 100) * 3);

	cout << "After first year: " << firstYearValue << endl;
	cout << "After second year: " << secondYearValue << endl;
	cout << "After third year: " << thirdYearValue << endl;

	return 0;
}