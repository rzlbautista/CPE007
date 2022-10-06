#include <iostream>
using namespace std;
int main()
{
	float max,
		shampoo = 8.00,
		coffee = 13.00,
		powderedmilk = 12.00,
		noodles = 12.00,
		eggs = 8.00,
		Total = shampoo + coffee + powderedmilk + noodles + (eggs * 2),
		Money = 100,
		Change = Money - Total;
	

		cout << "Enter your money and total of purchased food:\n";
		if (cin >> Money && cin >> Total) //If both inputs are valid, compute
		{
			if (Money > Total) // the greater
				max = Money;
			else
				max = Total;
			cout << "\nYourMoneyisEnough: " << max << endl;
		}
		else
			cout << "Your money is probably insufficient. Please try again." << endl;
	
	return 0;
}