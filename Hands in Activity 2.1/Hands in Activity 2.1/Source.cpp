#include <iostream>
using namespace std;

int main()
{
	float startValue = 100;
	float interestRate = 0.015;
	float firstYearValue;
	float secondYearValue;
	float thirdYearValue;

	/***Insert your process here***/

	firstYearValue = startValue + (startValue * interestRate);
	secondYearValue = firstYearValue + (firstYearValue * interestRate);
	thirdYearValue = secondYearValue + (secondYearValue * interestRate);

	cout << "After first year: " << firstYearValue << endl;
	cout << "After second year: " << secondYearValue << endl;
	cout << "After third year: " << thirdYearValue << endl;

	return 0;
}