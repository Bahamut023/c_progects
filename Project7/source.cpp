#include <iostream>
using namespace std;
int clean() {
	system("cls");
	return 0;
}
int painting_background() {
	system("color 01");
	cout << "4684";
	return 0;
}
int painting_console() {
	system("color 10");
	cout << "4684";
	return 0;
}
int output_int() {
	setlocale(0, "");
	cout << "int :" << sizeof(int) << " bytes";
	return 0;
}
int output_char() {
	setlocale(0, "");
	cout << "char :" << sizeof(char) << " bytes";
	return 0;
}
int output_double() {
	setlocale(0, "");
	cout << "double :" << sizeof(double) << " bytes";
	return 0;
}
int output_float() {
	setlocale(0, "");
	cout << "float :" << sizeof(float) << " bytes";
	return 0;
}
int output_bool() {
	setlocale(0, "");
	cout << "bool :" << sizeof(bool) << " bytes";
	return 0;
}
int messagea() {
	setlocale(0, "");
	cout << "Привет я функция!";
	return 0;
}
int output_square() {
	setlocale(0, "");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

int main()
{
    setlocale(0, "");
    cout << "[+]Программа - Функции\n[1]Очищение консоли\n[2]Изменить цвет фона\n[3]Изменить цвет консоли\n[4]Вывод размера типа данних INT\n[5]Вывод размера типа данных CHAR\n[6]Вывод размера типа данных DOUBLE\n[7]Вывод размера типа данных FLOAT\n[8]Вывод размера типа данных BOOL\n[9]Вывод сообщения ""Привет я функция""\n[10]Вывод квадрата 5х5\n";
	short menu; cin >> menu;
	switch (menu)
	{
	case 1:
		clean();
		break;
	case 2:
		painting_background();
		break;
	case 3:
		painting_console();
		break;
	case 4:
		output_int();
		break;
	case 5:
		output_char();
		break;
	case 6:
		output_double();
		break;
	case 7:
		output_float();
		break;
	case 8:
		output_bool();
		break;
	case 9:
		messagea();
		break;
	case 10:
		output_square();
		break;
	default:
		cout << "Неправильное значение";
		break;
	}
	return 0;
}