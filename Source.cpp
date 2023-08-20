#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int AD, HOA, Q, ME, Final;
	double grade[8];
	string name[10];

	int criteria[2][4] = { {60, 60, 30, 50},
						{45, 60, 20, 39} };
	cout << setw(12) << "AD" << setw(5) << "HOA" << setw(5) << "Q" << setw(5) << "ME" << "\n";
	for (int i = 0; i < 2; i++)
	{
		cout << "HPS/TRS";
		for (int j = 0; j < 4; j++)
		{
			cout << setw(5) << criteria[i][j];

		}
		cout << endl;
	}

	cout << "\n Enter the value for AD_TRS: ";
	cin >> grade[0];
	cout << "\n Enter the value for AD_HPS: ";
	cin >> grade[1];
	cout << "\n Enter the value for HOA_TRS: ";
	cin >> grade[2];
	cout << "\n Enter the value for HOA_HPS: ";
	cin >> grade[3];
	cout << "\n Enter the value for Q_TRS: ";
	cin >> grade[4];
	cout << "\n Enter the value for Q_HPS: ";
	cin >> grade[5];
	cout << "\n Enter the value for ME_TRS: ";
	cin >> grade[6];
	cout << "\n Enter the value for ME_HPS: ";
	cin >> grade[7];

	AD = (grade[0] / grade[1]) * 0.15 * 100;
	cout << "\nAD_Grade: " << AD << "\n";
	HOA = (grade[2] / grade[3]) * 0.15 * 100;
	cout << "HOA_Grade: " << HOA << "\n";
	Q = (grade[4] / grade[5]) * 0.2 * 100;
	cout << "Q_Grade: " << Q << "\n";
	ME = (grade[6] / grade[7]) * 0.5 * 100;
	cout << "ME_Grade: " << ME << "\n";
	Final = AD + HOA + Q + ME;
	cout << "\nFinal Grade : " << Final << "\n";
}