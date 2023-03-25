#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

int Absulate(int Number)
{
	if (Number < 0)
	{
		return (Number * -1);
	}
	return Number;
}

int main()
{
	cout << "Please Enter : " << endl;
	int Number = ReadNumber();
	cout <<"\nMy ABS Is : " << Absulate(Number) << endl;
	cout <<"\nC++ ABS Is : " << abs(Number) << endl;

	return 0;
}