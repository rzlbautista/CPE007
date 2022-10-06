#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double rate = 58.14;
	cout << fixed << setprecision(2);
	cout << "\tDollar \Philippine Peso\n";
	for (int dollar = 1; dollar <= 5; ++dollar)
		cout << "\t " << dollar
	<< "\t" << dollar * rate << endl;
	return 0;
}