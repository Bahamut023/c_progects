#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short translate, word;
	cout << "[+]Переводчик\n[1]C русского на английский\n[2]С английского на русский\n[+]Ваш выбор: ";
	cin >> translate;

	switch (translate)
	{
	case 1:
		cout << "[+]Выбран режим перевода с русского языка\n[1]Дорога\n[2]Кот\n[3]Собака\n[4]Дерево\n[5]Солнце\n[6]Трава\n[7]Компьютер\n[8]Стол\n[9]Стул\n[10]Еда\n[11]Конфета\n[12]Дом\n[13]Наука\n[14]Стена\n[15]Провод\n[+]Выберите слово: ";
		cin >> word;
		switch (word) {
		case 1:
			cout << "[Перевод] Дорога - Road" << endl;
			break;
		case 2:
			cout << "[Перевод] Кот - Cat" << endl;
			break;
		case 3:
			cout << "[Перевод] Собака - Dog" << endl;
			break;
		case 4:
			cout << "[Перевод] Дерево - Tree" << endl;
			break;
		case 5:
			cout << "[Перевод] Солнце - Sun" << endl;
			break;
		case 6:
			cout << "[Перевод] Трава - Green" << endl;
			break;
		case 7:
			cout << "[Перевод] Компьютер - Computer" << endl;
			break;
		case 8:
			cout << "[Перевод] Стол - Table" << endl;
			break;
		case 9:
			cout << "[Перевод] Стул - Chair" << endl;
			break;
		case 10:
			cout << "[Перевод] Еда - Eat";
			break;
		case 11:
			cout << "[Перевод] Конфета - Candy";
			break;
		case 12:
			cout << "[Перевод] Дом - Home";
			break;
		case 13:
			cout << "[Перевод] Наука - Science";
			break;
		case 14:
			cout << "[Перевод] Стена - Wall";
			break;
		case 15:
			cout << "[Перевод] Провод - Wire";
			break;
		default:
			cout << "Индификатор слова введен неверно";
			break;
		}
		break;
	case 2:
		cout << "[+]Выбран режим перевода с английского языка\n[1]Road\n[2]Cat\n[3]Dog\n[4]Tree\n[5]Sun\n[6]Green\n[7]Computer\n[8]Table\n[9]Chair\n[10]Food\n[11]Candy\n[12]Home\n[13]Science\n[14]Wall\n[15]Wire" << endl;
		cin >> word;
		switch (word)
		{
		case 1:
			cout << "[Перевод] Road - Дорога" << endl;
			break;
		case 2:
			cout << "[Перевод] Cat - Кот" << endl;
			break;
		case 3:
			cout << "[Перевод] Dog - Собака" << endl;
			break;
		case 4:
			cout << "[Перевод] Tree - Дерево" << endl;
			break;
		case 5:
			cout << "[Перевод] Sun - Солнце" << endl;
			break;
		case 6:
			cout << "[Перевод] Green - Трава" << endl;
			break;
		case 7:
			cout << "[Перевод] Computer - Компьютер" << endl;
			break;
		case 8:
			cout << "[Перевод] Table - Стол" << endl;
			break;
		case 9:
			cout << "[Перевод] Chair - Стул" << endl;
			break;
		case 10:
			cout << "[Перевод] Eat - Еда";
			break;
		case 11:
			cout << "[Перевод] Candy - Конфета";
			break;
		case 12:
			cout << "[Перевод] Home - Дом";
			break;
		case 13:
			cout << "[Перевод] Science - Наука";
			break;
		case 14:
			cout << "[Перевод] Wall - Стена";
			break;
		case 15:
			cout << "[Перевод] Wire - Провода";
			break;
		default:
			cout << "Индификатор слова введен неверно";
			break;
		}
	break;
	default:
		cout << "[+] Выбор некорректен";
		break;
	}
	return 0;
}