#include<iostream>

using namespace std;

int main()
{
	//5.Read 3 numbers from user and print the maximum and The minimumSample Input : 2 9 5 Sample Output : the maximum value is 9 and the minimum value is 2

	int n1, n2, n3;

	cout << "Enter the first number: ";
	cin >> n1;

	cout << "Enter the second number: ";
	cin >> n2;

	cout << "Enter the third number ";
	cin >> n3;

	cout << endl;

	if (n1 > n2 && n1 > n3)
	{
		cout << "The maximum value is: " << n1 << endl;

		if (n2 > n3)
		{
			cout << "The minum value is: " << n3;
		}
		else
		{
			cout << "The minimum value is: " << n2;
		}
	}
	else if (n2 > n1 && n2 > n3)
	{
		cout << "The maximum valuse is: " << n2 << endl;

		if (n1 > n3)
		{
			cout << "The minimum value is: " << n3;
		}
		else
		{
			cout << "The minimum value is: " << n1;
		}
	}
	else if (n3 > n1 && n3 > n2)
	{
		cout << "The maximum value is: " << n3 << endl;

		if (n1 > n2)
		{
			cout << "The minimum value is: " << n2;
		}
		else
		{
			cout << "The minimum value is: " << n1;
		}
	}


	return 0;
}