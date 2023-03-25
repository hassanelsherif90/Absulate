#include <iostream>
using namespace std;

float ReadNumber()
{
	int Number;
	cin >> Number;
	return (float) Number;
}

float Absulate(int Number)
{
	if (Number < 0)
	{
		return (Number * -1);
	}
	return (float)Number;
}

int main()
{
	cout << "Please Enter : " << endl;
	float Number = ReadNumber();
	cout <<"\nMy ABS Is : " << Absulate(Number) << endl;
	cout <<"\nC++ ABS Is : " << abs(Number) << endl;

	return 0;
}