#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int xValue = 5;
	int yValue = 9;
	int result;
	int bigResult;

	xValue += 3; //xValue + 3; increment xValue by 3
	yValue -= xValue; //decrement yValue by xValue
	result = xValue * yValue; // set the product of xValue and yValue to result
	result += result; // increment result by result
	result -= 2; // diminished result by 2
	yValue = result % result; // assign result modulo result to yValue
	result += xValue; // increment result by adding xValue
	bigResult = result * result * result; //assign result times result times result to bigResult
	result = result + (xValue * yValue); // add result to the product of xValue times yValue and assign it to result

	cout << "result: " << result << endl;
	cout << "bigResult: " << bigResult;


	return 0;

}

