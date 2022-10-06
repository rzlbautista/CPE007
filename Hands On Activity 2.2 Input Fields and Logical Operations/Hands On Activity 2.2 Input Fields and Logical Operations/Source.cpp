#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Input value for x: ";
	cin >> x;
	cout << "Input value for y: ";
	cin >> y;

	bool resAND, resOR, resANDNot, resORNot;
	resAND = x > -2 && y == 0;
	resOR = x <= y || y >= 0;
	resANDNot = x && !y;
	resORNot = !(x + 1) || y - 1 > 0;

	cout << "x >-2 && y==0 is " << resAND << endl;
	cout << "x<= y || y>=0 is " << resOR << endl;
	cout << "x && !y is " << resANDNot << endl;
	cout << "!(x+1) || y-1 >0 is " << resORNot << endl;

	return 0;
}
