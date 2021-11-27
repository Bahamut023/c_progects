#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr[i] << "]" << "Массив int" << endl;
	}
	cout << endl;

	char arr1[5] = { 'a','b','c','d','e' };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr1[i] << "]" << "Массив char" << endl;
	}
	cout << endl;

	bool arr2[5] = { 1,1,1,1,1 };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr2[i] << "]" << "Массив bool" << endl;
	}
	cout << endl;

	short arr3[5] = { 6,7,8,9,10 };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr3[i] << "]" << "Массив short" << endl;
	}
	cout << endl;

	long arr4[5] = { 11,12,13,14,15 };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr4[i] << "]" << "Массив long" << endl;
	}
	cout << endl;

	string arr5[5] = { "e","r","t","t","y" };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr5[i] << "]" << "Массив string" << endl;
	}
	cout << endl;

	float arr6[5] = { 1.2,2.3,3.4,4.5,5.6 };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr6[i] << "]" << "Массив float" << endl;
	}
	cout << endl;

	double arr7[5] = { 6.7,7.8,8.9,10.11,12.13 };
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arr7[i] << "]" << "Массив double" << endl;
	}
	cout << endl;
	return (0);
}