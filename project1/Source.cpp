#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short choose;
	cout << "[+]Месяц года\n[1]Январь\n[2]Февраль\n[3]Март\n[4]Апрель\n[5]Май\n[6]Июнь\n[7]Июль\n[8]Август\n[9]Сентябрь\n[10]Октябрь\n[11]Ноябрь\n[12]Декабрь\n[+]Выберите месяц: " << endl;
	cin >> choose;
	switch (choose)
	{
	case 1:
		cout << "[+]Выбран месяц \"Январь\"";
		break;
	case 2:
		cout << "[+]Выбран месяц \"Февраль\"";
		break;
	case 3:
		cout << "[+]Выбран месяц \"Март\"";
		break;
	case 4:
		cout << "[+]Выбран месяц \"Апрель\"";
		break;
	case 5:
		cout << "[+]Выбран месяц \"Май\"";
		break;
	case 6:
		cout << "[+]Выбран месяц \"Июнь\"";
		break;
	case 7:
		cout << "[+]Выбран месяц \"Июль\"";
		break;
	case 8:
		cout << "[+]Выбран месяц \"Август\"";
		break;
	case 9:
		cout << "[+]Выбран месяц \"Сентябрь\"";
		break;
	case 10:
		cout << "[+]Выбран месяц \"Октябрь\"";
		break;
	case 11:
		cout << "[+]Выбран месяц \"Ноябрь\"";
		break;
	case 12:
		cout << "[+]Выбран месяц \"Декабрь\"";
		break;
	default:
		cout << "[+] Неправильно введен номер месяца";
		break;
	}
	int _; cin >> _;
}