#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short translate, word;
	cout << "[+]����������\n[1]C �������� �� ����������\n[2]� ����������� �� �������\n[+]��� �����: ";
	cin >> translate;

	switch (translate)
	{
	case 1:
		cout << "[+]������ ����� �������� � �������� �����\n[1]������\n[2]���\n[3]������\n[4]������\n[5]������\n[6]�����\n[7]���������\n[8]����\n[9]����\n[10]���\n[11]�������\n[12]���\n[13]�����\n[14]�����\n[15]������\n[+]�������� �����: ";
		cin >> word;
		switch (word) {
		case 1:
			cout << "[�������] ������ - Road" << endl;
			break;
		case 2:
			cout << "[�������] ��� - Cat" << endl;
			break;
		case 3:
			cout << "[�������] ������ - Dog" << endl;
			break;
		case 4:
			cout << "[�������] ������ - Tree" << endl;
			break;
		case 5:
			cout << "[�������] ������ - Sun" << endl;
			break;
		case 6:
			cout << "[�������] ����� - Green" << endl;
			break;
		case 7:
			cout << "[�������] ��������� - Computer" << endl;
			break;
		case 8:
			cout << "[�������] ���� - Table" << endl;
			break;
		case 9:
			cout << "[�������] ���� - Chair" << endl;
			break;
		case 10:
			cout << "[�������] ��� - Eat";
			break;
		case 11:
			cout << "[�������] ������� - Candy";
			break;
		case 12:
			cout << "[�������] ��� - Home";
			break;
		case 13:
			cout << "[�������] ����� - Science";
			break;
		case 14:
			cout << "[�������] ����� - Wall";
			break;
		case 15:
			cout << "[�������] ������ - Wire";
			break;
		default:
			cout << "����������� ����� ������ �������";
			break;
		}
		break;
	case 2:
		cout << "[+]������ ����� �������� � ����������� �����\n[1]Road\n[2]Cat\n[3]Dog\n[4]Tree\n[5]Sun\n[6]Green\n[7]Computer\n[8]Table\n[9]Chair\n[10]Food\n[11]Candy\n[12]Home\n[13]Science\n[14]Wall\n[15]Wire" << endl;
		cin >> word;
		switch (word)
		{
		case 1:
			cout << "[�������] Road - ������" << endl;
			break;
		case 2:
			cout << "[�������] Cat - ���" << endl;
			break;
		case 3:
			cout << "[�������] Dog - ������" << endl;
			break;
		case 4:
			cout << "[�������] Tree - ������" << endl;
			break;
		case 5:
			cout << "[�������] Sun - ������" << endl;
			break;
		case 6:
			cout << "[�������] Green - �����" << endl;
			break;
		case 7:
			cout << "[�������] Computer - ���������" << endl;
			break;
		case 8:
			cout << "[�������] Table - ����" << endl;
			break;
		case 9:
			cout << "[�������] Chair - ����" << endl;
			break;
		case 10:
			cout << "[�������] Eat - ���";
			break;
		case 11:
			cout << "[�������] Candy - �������";
			break;
		case 12:
			cout << "[�������] Home - ���";
			break;
		case 13:
			cout << "[�������] Science - �����";
			break;
		case 14:
			cout << "[�������] Wall - �����";
			break;
		case 15:
			cout << "[�������] Wire - �������";
			break;
		default:
			cout << "����������� ����� ������ �������";
			break;
		}
	break;
	default:
		cout << "[+] ����� �����������";
		break;
	}
	return 0;
}