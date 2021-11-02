#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "��������� ������\n�������� ������:\n[1] �����\n[2] �������\n[3] �������������\n[4] �����������\n[5] �������\n[6] �����\n[7] ����\n[9] �����\n";
	int figures = 0;
	int length = 0;
	int specifications = 0;
	char texture = '-';
	int direction = 0;
	int size = 0;
	int r = 0;
	int i = 0;
	int weigth = 0;
	int filling = 0;
	cin >> figures;
	switch (figures)
	{
	case 1:
		cout << "�� ������� �����\n�������:\n�����(�����)\n";
		cin >> length;
		cout << "��������(������)\n";
		cin >> texture;
		cout << "�����������(0 = ��������������, 1 = ������������)\n";
		cin >> direction;
		if ((length < 0))
		{
			cout << "������������ ��������";
		}
		if (direction < 0 || direction > 1)
		{
			cout << "������������ ��������";
		}
		while (r < length)
		{
			if (direction == 1)
			{
				cout << texture;
				cout << "\n";
				r++;
			}
			else
			{
				cout << texture;
				r++;
			}
		}
		break;
	case 2:
		cout << "�� ������� �������\n�������:\n������\n";
		cin >> size;
		cout << "��������\n";
		cin >> texture;
		cout << "[0] �����������, [1] ������\n";
		cin >> filling;
		if (size < 1)
		{
			cout << "������ < 0";
			exit(0);
		}
		switch (filling)
		{
		case 0:
			while (r < size)
			{
				i = 0;
				while (i < size)
				{
					cout << texture;
					i++;
				}
				cout << "\n";
				r++;
			}
			break;
		case 1:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
						cout << texture;
					}
					else {
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		break;
	case 3:
		cout << "�� ������� �������������\n�������:\n������\n";
		cin >> length;
		cout << "������\n";
		cin >> weigth;
		cout << "��������\n";
		cin >> texture;
		cout << "[0] �����������, [1] ������\n";
		cin >> filling;
		if (length < 1 || weigth < 1)
		{
			cout << "����� ��� ������ < 1";
			exit(0);
		}
		switch (filling)
		{
		case 0:
			while (r < length)
			{
				i = 0;
				while (i < weigth)
				{
					cout << texture;
					i++;
				}
				cout << "\n";
				r++;
			}
			break;
		case 1:
			for (int i = 0; i < weigth; i++)
			{
				for (int j = 0; j < length; j++)
				{
					if (i == 0 || j == 0 || i == weigth - 1 || j == length - 1) {
						cout << texture;
					}
					else {
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		break;
	case 4:
		cout << "�� ������� �����������\n�������:\n������\n";
		cin >> size;
		cout << "��������\n";
		cin >> texture;
		cout << "[0] �����������, [1] ������, [2] ������ ��� ������������\n";
		cin >> filling;
		if (size < 1)
		{
			cout << "������ < 0";
			exit(0);
		}
		switch (filling)
		{
		case 0:
			for (int i = 1, k = 0; i <= size; i++, k = 0) {
				for (int j = 1; j <= size - i; j++)
				{
					cout << "  ";
				}
				while (k != 2 * i - 1)
				{
					cout << texture << " ";
					k++;
				}
				cout << "\n";
			}
			break;
		case 1:
			for (int y = 0; y < (size * 2) - 1; y++)
			{
				for (int x = 0; x < (size * 2) - 1; x++)
				{
					if (y == size - 1 || x == (size * 2 - 1) / 2 + y || x == (size * 2 - 1) / 2 - y)
					{
						cout << texture << " ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 3:
			for (int y = 0; y < (size * 2) - 1; y++)
			{
				for (int x = 0; x < (size * 2) - 1; x++)
				{
					if (y == size - 1 || x >= (size * 2 - 1) / 2 + y || x <= (size * 2 - 1) / 2 - y)
					{
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
		}
		break;
	case 5:
		cout << "�� ������� �������\n�������:\n������\n";
		cin >> size;
		cout << "��������\n";
		cin >> texture;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i % 2 == 1 || j % 2 == 1)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 6:
		cout << "�� ������� �����\n�������:\n������\n";
		cin >> size;
		cout << "��������\n";
		cin >> texture;
		for (int k = 0, l = size + 1 , i = 0; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
			{
				if (j == k || j == l)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			k++;
			l--;
			cout << endl;
		}
		break;
	case 7:
		cout << "�� ������� ����\n�������:\n������\n";
		cin >> size;
		cout << "��������\n";
		cin >> texture;
		if (size <= 0)
		{
			cout << "������ <= 0";
			exit(0);
		}
		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++)
			{
				if (y == size / 2 || x == size /2)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	case 9:
		exit(0);
	default:
		cout << "������� �������� ��������";
		break;
	}
	return 0;
	int _; cin >> _;
}