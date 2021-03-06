#include <iostream>
using namespace std;
short clrcross = 31;
short clrnull = 32;
short priority = 1;
short sizer = 2;
short x = 0;
char arr3x3[9] = { 4,4,4,4,4,4,4,4,4 };
char arr4x4[16] = { 4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4 };
char arr5x5[25] = { 4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4 };
const short BEST_MOVE_3x3[9] = { 4,0,2,6,8,1,3,5,7 };
const short BEST_MOVE_4x4[16] = { 4,0,2,6,8,1,3,5,7,5,1,3,7,9,2,4 };
const short BEST_MOVE_5x5[25] = { 4,0,2,6,8,1,3,5,7,3,9,15,13,18,25,16,17,20,21,12,10,14,19,11,24 };

void cout_arr_3x3() {
	int t = 0;
	for (int i = 0; i < 9; i++)
	{
		if (arr3x3[i] == '0')
		{
			cout << "\x1b["<< clrnull << "m" << "  " << arr3x3[i] << "\x1b[0m";
			t++;
		}
		else if (arr3x3[i] == 'x')
		{
			cout << "\x1b["<< clrcross << "m" << "  " << arr3x3[i] << "\x1b[0m";
			t++;
		}
		else
		{
			cout << "| " << arr3x3[i] << "  ";
			t++;
		}
		if (t == 3 || t == 6 || t == 9)
		{
			cout << endl;
		}
	}
	cout << endl;
}
void cout_arr_4x4() {
	int t = 0;
	for (int i = 0; i < 16; i++)
	{
		if (arr4x4[i] == '0')
		{
			cout << "\x1b[" << clrnull << "m" << "  " << arr4x4[i] << "\x1b[0m";
			t++;
		}
		else if (arr4x4[i] == 'x')
		{
			cout << "\x1b[" << clrcross << "m" << "  " << arr4x4[i] << "\x1b[0m";
			t++;
		}
		else
		{
			cout << "| " << arr4x4[i] << "  ";
			t++;
		}
		if (t == 4 || t == 8 || t == 12 || t == 16)
		{
			cout << endl;
		}
	}
	cout << endl;
}
void cout_arr_5x5() {
	int t = 0;
	for (int i = 0; i < 25; i++)
	{
		if (arr5x5[i] == '0')
		{
			cout << "\x1b[" << clrnull << "m" << "  " << arr5x5[i] << "\x1b[0m";
			t++;
		}
		else if (arr5x5[i] == 'x')
		{
			cout << "\x1b[" << clrcross << "m" << "  " << arr5x5[i] << "\x1b[0m";
			t++;
		}
		else
		{
			cout << "| " << arr5x5[i] << "  ";
			t++;
		}
		if (t == 5 || t == 10 || t == 15 || t == 20 || t == 25)
		{
			cout << endl;
		}
	}
	cout << endl;
}

void check_3x3() {
	if (((arr3x3[0] == 'x') && (arr3x3[1] == 'x') && (arr3x3[2] == 'x')) || 
		((arr3x3[3] == 'x') && (arr3x3[4] == 'x') && (arr3x3[5] == 'x')) || 
		((arr3x3[6] == 'x') && (arr3x3[7] == 'x') && (arr3x3[8] == 'x')) || 
		((arr3x3[0] == 'x') && (arr3x3[3] == 'x') && (arr3x3[6] == 'x')) || 
		((arr3x3[1] == 'x') && (arr3x3[4] == 'x') && (arr3x3[7] == 'x')) ||
		((arr3x3[2] == 'x') && (arr3x3[5] == 'x') && (arr3x3[8] == 'x')) || 
		((arr3x3[0] == 'x') && (arr3x3[4] == 'x') && (arr3x3[8] == 'x')) || 
		((arr3x3[2] == 'x') && (arr3x3[4] == 'x') && (arr3x3[6] == 'x')))
	{
		cout << "Победа! X" << endl;
		cout_arr_3x3();
		exit(0);
	}
	else if 
		(((arr3x3[0] == '0') && (arr3x3[1] == '0') && (arr3x3[2] == '0')) || 
		((arr3x3[3] == '0') && (arr3x3[4] == '0') && (arr3x3[5] == '0')) || 
		((arr3x3[6] == '0') && (arr3x3[7] == '0') && (arr3x3[8] == '0')) || 
		((arr3x3[0] == '0') && (arr3x3[3] == '0') && (arr3x3[6] == '0')) || 
		((arr3x3[1] == '0') && (arr3x3[4] == '0') && (arr3x3[7] == '0')) ||
		((arr3x3[2] == '0') && (arr3x3[5] == '0') && (arr3x3[8] == '0')) || 
		((arr3x3[0] == '0') && (arr3x3[4] == '0') && (arr3x3[8] == '0')) || 
		((arr3x3[2] == '0') && (arr3x3[4] == '0') && (arr3x3[6] == '0')))
	{
		cout << "Победа! 0" << endl;
		cout_arr_3x3();
		exit(0);
	}
	short o = 0;
	for (short i = 0; i < 9; i++)
	{
		if (arr3x3[i] != 4)
		{
			o++;
		}
	}
	if (o == 9)
	{
		cout << "Ничья" << endl;
		cout_arr_3x3();
		exit(0);
	}
}
void check_4x4() {
	if (((arr4x4[0] == '0') && (arr4x4[1] == '0') && (arr4x4[2] == '0')) ||
		((arr4x4[4] == '0') && (arr4x4[5] == '0') && (arr4x4[6] == '0')) ||
		((arr4x4[8] == '0') && (arr4x4[9] == '0') && (arr4x4[10] == '0')) ||
		((arr4x4[0] == '0') && (arr4x4[4] == '0') && (arr4x4[8] == '0')) ||
		((arr4x4[1] == '0') && (arr4x4[5] == '0') && (arr4x4[9] == '0')) ||
		((arr4x4[2] == '0') && (arr4x4[6] == '0') && (arr4x4[10] == '0')) ||
		((arr4x4[0] == '0') && (arr4x4[5] == '0') && (arr4x4[10] == '0')) ||
		((arr4x4[2] == '0') && (arr4x4[5] == '0') && (arr4x4[8] == '0')) ||

		((arr4x4[1] == '0') && (arr4x4[2] == '0') && (arr4x4[3] == '0')) ||
		((arr4x4[5] == '0') && (arr4x4[6] == '0') && (arr4x4[7] == '0')) ||
		((arr4x4[9] == '0') && (arr4x4[10] == '0') && (arr4x4[11] == '0')) ||
		((arr4x4[1] == '0') && (arr4x4[5] == '0') && (arr4x4[9] == '0')) ||
		((arr4x4[2] == '0') && (arr4x4[6] == '0') && (arr4x4[10] == '0')) ||
		((arr4x4[3] == '0') && (arr4x4[7] == '0') && (arr4x4[11] == '0')) ||
		((arr4x4[1] == '0') && (arr4x4[6] == '0') && (arr4x4[11] == '0')) ||
		((arr4x4[3] == '0') && (arr4x4[6] == '0') && (arr4x4[9] == '0')) ||

		((arr4x4[4] == '0') && (arr4x4[5] == '0') && (arr4x4[6] == '0')) ||
		((arr4x4[8] == '0') && (arr4x4[9] == '0') && (arr4x4[10] == '0')) ||
		((arr4x4[12] == '0') && (arr4x4[13] == '0') && (arr4x4[14] == '0')) ||
		((arr4x4[4] == '0') && (arr4x4[8] == '0') && (arr4x4[12] == '0')) ||
		((arr4x4[5] == '0') && (arr4x4[9] == '0') && (arr4x4[13] == '0')) ||
		((arr4x4[6] == '0') && (arr4x4[10] == '0') && (arr4x4[14] == '0')) ||
		((arr4x4[4] == '0') && (arr4x4[9] == '0') && (arr4x4[14] == '0')) ||
		((arr4x4[6] == '0') && (arr4x4[9] == '0') && (arr4x4[12] == '0')) ||

		((arr4x4[5] == '0') && (arr4x4[6] == '0') && (arr4x4[7] == '0')) ||
		((arr4x4[9] == '0') && (arr4x4[10] == '0') && (arr4x4[11] == '0')) ||
		((arr4x4[13] == '0') && (arr4x4[14] == '0') && (arr4x4[15] == '0')) ||
		((arr4x4[5] == '0') && (arr4x4[9] == '0') && (arr4x4[13] == '0')) ||
		((arr4x4[6] == '0') && (arr4x4[10] == '0') && (arr4x4[14] == '0')) ||
		((arr4x4[7] == '0') && (arr4x4[11] == '0') && (arr4x4[15] == '0')) ||
		((arr4x4[5] == '0') && (arr4x4[10] == '0') && (arr4x4[15] == '0')) ||
		((arr4x4[7] == '0') && (arr4x4[10] == '0') && (arr4x4[13] == '0'))
		)
	{
		cout << "Победа! 0" << endl;
		cout_arr_4x4();
		exit(0);
	}
	else if
		(((arr4x4[0] == 'x') && (arr4x4[1] == 'x') && (arr4x4[2] == 'x')) ||
			((arr4x4[4] == 'x') && (arr4x4[5] == 'x') && (arr4x4[6] == 'x')) ||
			((arr4x4[8] == 'x') && (arr4x4[9] == 'x') && (arr4x4[10] == 'x')) ||
			((arr4x4[0] == 'x') && (arr4x4[4] == 'x') && (arr4x4[8] == 'x')) ||
			((arr4x4[1] == 'x') && (arr4x4[5] == 'x') && (arr4x4[9] == 'x')) ||
			((arr4x4[2] == 'x') && (arr4x4[6] == 'x') && (arr4x4[10] == 'x')) ||
			((arr4x4[0] == 'x') && (arr4x4[5] == 'x') && (arr4x4[10] == 'x')) ||
			((arr4x4[2] == 'x') && (arr4x4[5] == 'x') && (arr4x4[8] == 'x')) ||

			((arr4x4[1] == 'x') && (arr4x4[2] == 'x') && (arr4x4[3] == 'x')) ||
			((arr4x4[5] == 'x') && (arr4x4[6] == 'x') && (arr4x4[7] == 'x')) ||
			((arr4x4[9] == 'x') && (arr4x4[10] == 'x') && (arr4x4[11] == 'x')) ||
			((arr4x4[1] == 'x') && (arr4x4[5] == 'x') && (arr4x4[9] == 'x')) ||
			((arr4x4[2] == 'x') && (arr4x4[6] == 'x') && (arr4x4[10] == 'x')) ||
			((arr4x4[3] == 'x') && (arr4x4[7] == 'x') && (arr4x4[11] == 'x')) ||
			((arr4x4[1] == 'x') && (arr4x4[6] == 'x') && (arr4x4[11] == 'x')) ||
			((arr4x4[3] == 'x') && (arr4x4[6] == 'x') && (arr4x4[9] == 'x')) ||

			((arr4x4[4] == 'x') && (arr4x4[5] == 'x') && (arr4x4[6] == 'x')) ||
			((arr4x4[8] == 'x') && (arr4x4[9] == 'x') && (arr4x4[10] == 'x')) ||
			((arr4x4[12] == 'x') && (arr4x4[13] == 'x') && (arr4x4[14] == 'x')) ||
			((arr4x4[4] == 'x') && (arr4x4[8] == 'x') && (arr4x4[12] == 'x')) ||
			((arr4x4[5] == 'x') && (arr4x4[9] == 'x') && (arr4x4[13] == 'x')) ||
			((arr4x4[6] == 'x') && (arr4x4[10] == 'x') && (arr4x4[14] == 'x')) ||
			((arr4x4[4] == 'x') && (arr4x4[9] == 'x') && (arr4x4[14] == 'x')) ||
			((arr4x4[6] == 'x') && (arr4x4[9] == 'x') && (arr4x4[12] == 'x')) ||

			((arr4x4[5] == 'x') && (arr4x4[6] == 'x') && (arr4x4[7] == 'x')) ||
			((arr4x4[9] == 'x') && (arr4x4[10] == 'x') && (arr4x4[11] == 'x')) ||
			((arr4x4[13] == 'x') && (arr4x4[14] == 'x') && (arr4x4[15] == 'x')) ||
			((arr4x4[5] == 'x') && (arr4x4[9] == 'x') && (arr4x4[13] == 'x')) ||
			((arr4x4[6] == 'x') && (arr4x4[10] == 'x') && (arr4x4[14] == 'x')) ||
			((arr4x4[7] == 'x') && (arr4x4[11] == 'x') && (arr4x4[15] == 'x')) ||
			((arr4x4[5] == 'x') && (arr4x4[10] == 'x') && (arr4x4[15] == 'x')) ||
			((arr4x4[7] == 'x') && (arr4x4[10] == 'x') && (arr4x4[13] == 'x')))
	{
		cout << "Победа! x" << endl;
		cout_arr_4x4();
		exit(0);
	}
	short o = 0;
	for (short i = 0; i < 16; i++)
	{
		if (arr4x4[i] != 4)
		{
			o++;
		}
	}
	if (o == 16)
	{
		cout << "Ничья" << endl;
		cout_arr_4x4();
		exit(0);
	}
}
void check_5x5() {
	if (((arr5x5[0] == '0') && (arr5x5[1] == '0') && (arr5x5[2] == '0')) ||
		((arr5x5[5] == '0') && (arr5x5[6] == '0') && (arr5x5[7] == '0')) ||
		((arr5x5[10] == '0') && (arr5x5[11] == '0') && (arr5x5[12] == '0')) ||
		((arr5x5[0] == '0') && (arr5x5[5] == '0') && (arr5x5[10] == '0')) ||
		((arr5x5[1] == '0') && (arr5x5[6] == '0') && (arr5x5[11] == '0')) ||
		((arr5x5[2] == '0') && (arr5x5[7] == '0') && (arr5x5[12] == '0')) ||
		((arr5x5[0] == '0') && (arr5x5[6] == '0') && (arr5x5[12] == '0')) ||
		((arr5x5[2] == '0') && (arr5x5[10] == '0') && (arr5x5[6] == '0')) ||
		
		((arr5x5[1] == '0') && (arr5x5[2] == '0') && (arr5x5[3] == '0')) ||
		((arr5x5[6] == '0') && (arr5x5[7] == '0') && (arr5x5[8] == '0')) ||
		((arr5x5[11] == '0') && (arr5x5[12] == '0') && (arr5x5[13] == '0')) ||
		((arr5x5[1] == '0') && (arr5x5[6] == '0') && (arr5x5[11] == '0')) ||
		((arr5x5[2] == '0') && (arr5x5[7] == '0') && (arr5x5[12] == '0')) ||
		((arr5x5[3] == '0') && (arr5x5[8] == '0') && (arr5x5[13] == '0')) ||
		((arr5x5[1] == '0') && (arr5x5[7] == '0') && (arr5x5[13] == '0')) ||
		((arr5x5[3] == '0') && (arr5x5[7] == '0') && (arr5x5[11] == '0')) ||
		
		((arr5x5[2] == '0') && (arr5x5[3] == '0') && (arr5x5[4] == '0')) ||
		((arr5x5[7] == '0') && (arr5x5[8] == '0') && (arr5x5[9] == '0')) ||
		((arr5x5[12] == '0') && (arr5x5[13] == '0') && (arr5x5[14] == '0')) ||
		((arr5x5[2] == '0') && (arr5x5[7] == '0') && (arr5x5[12] == '0')) ||
		((arr5x5[3] == '0') && (arr5x5[8] == '0') && (arr5x5[13] == '0')) ||
		((arr5x5[4] == '0') && (arr5x5[9] == '0') && (arr5x5[14] == '0')) ||
		((arr5x5[2] == '0') && (arr5x5[8] == '0') && (arr5x5[14] == '0')) ||
		((arr5x5[4] == '0') && (arr5x5[8] == '0') && (arr5x5[12] == '0')) ||

		((arr5x5[5] == '0') && (arr5x5[6] == '0') && (arr5x5[7] == '0')) ||
		((arr5x5[10] == '0') && (arr5x5[11] == '0') && (arr5x5[12] == '0')) ||
		((arr5x5[15] == '0') && (arr5x5[16] == '0') && (arr5x5[17] == '0')) ||
		((arr5x5[5] == '0') && (arr5x5[15] == '0') && (arr5x5[10] == '0')) ||
		((arr5x5[16] == '0') && (arr5x5[6] == '0') && (arr5x5[11] == '0')) ||
		((arr5x5[7] == '0') && (arr5x5[12] == '0') && (arr5x5[17] == '0')) ||
		((arr5x5[5] == '0') && (arr5x5[11] == '0') && (arr5x5[17] == '0')) ||
		((arr5x5[7] == '0') && (arr5x5[11] == '0') && (arr5x5[15] == '0')) ||

		((arr5x5[6] == '0') && (arr5x5[7] == '0') && (arr5x5[8] == '0')) ||
		((arr5x5[11] == '0') && (arr5x5[12] == '0') && (arr5x5[13] == '0')) ||
		((arr5x5[16] == '0') && (arr5x5[17] == '0') && (arr5x5[18] == '0')) ||
		((arr5x5[6] == '0') && (arr5x5[11] == '0') && (arr5x5[16] == '0')) ||
		((arr5x5[7] == '0') && (arr5x5[12] == '0') && (arr5x5[17] == '0')) ||
		((arr5x5[8] == '0') && (arr5x5[13] == '0') && (arr5x5[18] == '0')) ||
		((arr5x5[6] == '0') && (arr5x5[12] == '0') && (arr5x5[18] == '0')) ||
		((arr5x5[8] == '0') && (arr5x5[12] == '0') && (arr5x5[16] == '0')) ||

		((arr5x5[7] == '0') && (arr5x5[8] == '0') && (arr5x5[9] == '0')) ||
		((arr5x5[12] == '0') && (arr5x5[13] == '0') && (arr5x5[14] == '0')) ||
		((arr5x5[17] == '0') && (arr5x5[18] == '0') && (arr5x5[19] == '0')) ||
		((arr5x5[7] == '0') && (arr5x5[12] == '0') && (arr5x5[17] == '0')) ||
		((arr5x5[8] == '0') && (arr5x5[13] == '0') && (arr5x5[18] == '0')) ||
		((arr5x5[9] == '0') && (arr5x5[14] == '0') && (arr5x5[19] == '0')) ||
		((arr5x5[7] == '0') && (arr5x5[13] == '0') && (arr5x5[19] == '0')) ||
		((arr5x5[9] == '0') && (arr5x5[13] == '0') && (arr5x5[17] == '0')) ||

		((arr5x5[10] == '0') && (arr5x5[11] == '0') && (arr5x5[12] == '0')) ||
		((arr5x5[15] == '0') && (arr5x5[16] == '0') && (arr5x5[17] == '0')) ||
		((arr5x5[20] == '0') && (arr5x5[21] == '0') && (arr5x5[22] == '0')) ||
		((arr5x5[10] == '0') && (arr5x5[15] == '0') && (arr5x5[20] == '0')) ||
		((arr5x5[11] == '0') && (arr5x5[16] == '0') && (arr5x5[21] == '0')) ||
		((arr5x5[12] == '0') && (arr5x5[17] == '0') && (arr5x5[22] == '0')) ||
		((arr5x5[10] == '0') && (arr5x5[16] == '0') && (arr5x5[22] == '0')) ||
		((arr5x5[12] == '0') && (arr5x5[16] == '0') && (arr5x5[20] == '0')) ||

		((arr5x5[11] == '0') && (arr5x5[12] == '0') && (arr5x5[13] == '0')) ||
		((arr5x5[16] == '0') && (arr5x5[17] == '0') && (arr5x5[18] == '0')) ||
		((arr5x5[21] == '0') && (arr5x5[22] == '0') && (arr5x5[23] == '0')) ||
		((arr5x5[11] == '0') && (arr5x5[16] == '0') && (arr5x5[21] == '0')) ||
		((arr5x5[12] == '0') && (arr5x5[17] == '0') && (arr5x5[22] == '0')) ||
		((arr5x5[13] == '0') && (arr5x5[18] == '0') && (arr5x5[23] == '0')) ||
		((arr5x5[11] == '0') && (arr5x5[17] == '0') && (arr5x5[23] == '0')) ||
		((arr5x5[13] == '0') && (arr5x5[17] == '0') && (arr5x5[21] == '0')) ||

		((arr5x5[12] == '0') && (arr5x5[13] == '0') && (arr5x5[14] == '0')) ||
		((arr5x5[17] == '0') && (arr5x5[18] == '0') && (arr5x5[19] == '0')) ||
		((arr5x5[22] == '0') && (arr5x5[23] == '0') && (arr5x5[24] == '0')) ||
		((arr5x5[12] == '0') && (arr5x5[17] == '0') && (arr5x5[18] == '0')) ||
		((arr5x5[13] == '0') && (arr5x5[18] == '0') && (arr5x5[23] == '0')) ||
		((arr5x5[14] == '0') && (arr5x5[19] == '0') && (arr5x5[24] == '0')) ||
		((arr5x5[12] == '0') && (arr5x5[18] == '0') && (arr5x5[24] == '0')) ||
		((arr5x5[14] == '0') && (arr5x5[18] == '0') && (arr5x5[22] == '0'))
		)
	{
		cout << "Победа! 0" << endl;
		cout_arr_5x5();
		exit(0);
	}
	else if
		(((arr5x5[0] == 'x') && (arr5x5[1] == 'x') && (arr5x5[2] == 'x')) ||
			((arr5x5[5] == 'x') && (arr5x5[6] == 'x') && (arr5x5[7] == 'x')) ||
			((arr5x5[10] == 'x') && (arr5x5[11] == 'x') && (arr5x5[12] == 'x')) ||
			((arr5x5[0] == 'x') && (arr5x5[5] == 'x') && (arr5x5[10] == 'x')) ||
			((arr5x5[1] == 'x') && (arr5x5[6] == 'x') && (arr5x5[11] == 'x')) ||
			((arr5x5[2] == 'x') && (arr5x5[7] == 'x') && (arr5x5[12] == 'x')) ||
			((arr5x5[0] == 'x') && (arr5x5[6] == 'x') && (arr5x5[12] == 'x')) ||
			((arr5x5[2] == 'x') && (arr5x5[10] == 'x') && (arr5x5[6] == 'x')) ||

			((arr5x5[1] == 'x') && (arr5x5[2] == 'x') && (arr5x5[3] == 'x')) ||
			((arr5x5[6] == 'x') && (arr5x5[7] == 'x') && (arr5x5[8] == 'x')) ||
			((arr5x5[11] == 'x') && (arr5x5[12] == 'x') && (arr5x5[13] == 'x')) ||
			((arr5x5[1] == 'x') && (arr5x5[6] == 'x') && (arr5x5[11] == 'x')) ||
			((arr5x5[2] == 'x') && (arr5x5[7] == 'x') && (arr5x5[12] == 'x')) ||
			((arr5x5[3] == 'x') && (arr5x5[8] == 'x') && (arr5x5[13] == 'x')) ||
			((arr5x5[1] == 'x') && (arr5x5[7] == 'x') && (arr5x5[13] == 'x')) ||
			((arr5x5[3] == 'x') && (arr5x5[7] == 'x') && (arr5x5[11] == 'x')) ||

			((arr5x5[2] == 'x') && (arr5x5[3] == 'x') && (arr5x5[4] == 'x')) ||
			((arr5x5[7] == 'x') && (arr5x5[8] == 'x') && (arr5x5[9] == 'x')) ||
			((arr5x5[12] == 'x') && (arr5x5[13] == 'x') && (arr5x5[14] == 'x')) ||
			((arr5x5[2] == 'x') && (arr5x5[7] == 'x') && (arr5x5[12] == 'x')) ||
			((arr5x5[3] == 'x') && (arr5x5[8] == 'x') && (arr5x5[13] == 'x')) ||
			((arr5x5[4] == 'x') && (arr5x5[9] == 'x') && (arr5x5[14] == 'x')) ||
			((arr5x5[2] == 'x') && (arr5x5[8] == 'x') && (arr5x5[14] == 'x')) ||
			((arr5x5[4] == 'x') && (arr5x5[8] == 'x') && (arr5x5[12] == 'x')) ||

			((arr5x5[5] == 'x') && (arr5x5[6] == 'x') && (arr5x5[7] == 'x')) ||
			((arr5x5[10] == 'x') && (arr5x5[11] == 'x') && (arr5x5[12] == 'x')) ||
			((arr5x5[15] == 'x') && (arr5x5[16] == 'x') && (arr5x5[17] == 'x')) ||
			((arr5x5[5] == 'x') && (arr5x5[15] == 'x') && (arr5x5[10] == 'x')) ||
			((arr5x5[16] == 'x') && (arr5x5[6] == 'x') && (arr5x5[11] == 'x')) ||
			((arr5x5[7] == 'x') && (arr5x5[12] == 'x') && (arr5x5[17] == 'x')) ||
			((arr5x5[5] == 'x') && (arr5x5[11] == 'x') && (arr5x5[17] == 'x')) ||
			((arr5x5[7] == 'x') && (arr5x5[11] == 'x') && (arr5x5[15] == 'x')) ||

			((arr5x5[6] == 'x') && (arr5x5[7] == 'x') && (arr5x5[8] == 'x')) ||
			((arr5x5[11] == 'x') && (arr5x5[12] == 'x') && (arr5x5[13] == 'x')) ||
			((arr5x5[16] == 'x') && (arr5x5[17] == 'x') && (arr5x5[18] == 'x')) ||
			((arr5x5[6] == 'x') && (arr5x5[11] == 'x') && (arr5x5[16] == 'x')) ||
			((arr5x5[7] == 'x') && (arr5x5[12] == 'x') && (arr5x5[17] == 'x')) ||
			((arr5x5[8] == 'x') && (arr5x5[13] == 'x') && (arr5x5[18] == 'x')) ||
			((arr5x5[6] == 'x') && (arr5x5[12] == 'x') && (arr5x5[18] == 'x')) ||
			((arr5x5[8] == 'x') && (arr5x5[12] == 'x') && (arr5x5[16] == 'x')) ||

			((arr5x5[7] == 'x') && (arr5x5[8] == 'x') && (arr5x5[9] == 'x')) ||
			((arr5x5[12] == 'x') && (arr5x5[13] == 'x') && (arr5x5[14] == 'x')) ||
			((arr5x5[17] == 'x') && (arr5x5[18] == 'x') && (arr5x5[19] == 'x')) ||
			((arr5x5[7] == 'x') && (arr5x5[12] == 'x') && (arr5x5[17] == 'x')) ||
			((arr5x5[8] == 'x') && (arr5x5[13] == 'x') && (arr5x5[18] == 'x')) ||
			((arr5x5[9] == 'x') && (arr5x5[14] == 'x') && (arr5x5[19] == 'x')) ||
			((arr5x5[7] == 'x') && (arr5x5[13] == 'x') && (arr5x5[19] == 'x')) ||
			((arr5x5[9] == 'x') && (arr5x5[13] == 'x') && (arr5x5[17] == 'x')) ||

			((arr5x5[10] == 'x') && (arr5x5[11] == 'x') && (arr5x5[12] == 'x')) ||
			((arr5x5[15] == 'x') && (arr5x5[16] == 'x') && (arr5x5[17] == 'x')) ||
			((arr5x5[20] == 'x') && (arr5x5[21] == 'x') && (arr5x5[22] == 'x')) ||
			((arr5x5[10] == 'x') && (arr5x5[15] == 'x') && (arr5x5[20] == 'x')) ||
			((arr5x5[11] == 'x') && (arr5x5[16] == 'x') && (arr5x5[21] == 'x')) ||
			((arr5x5[12] == 'x') && (arr5x5[17] == 'x') && (arr5x5[22] == 'x')) ||
			((arr5x5[10] == 'x') && (arr5x5[16] == 'x') && (arr5x5[22] == 'x')) ||
			((arr5x5[12] == 'x') && (arr5x5[16] == 'x') && (arr5x5[20] == 'x')) ||

			((arr5x5[11] == 'x') && (arr5x5[12] == 'x') && (arr5x5[13] == 'x')) ||
			((arr5x5[16] == 'x') && (arr5x5[17] == 'x') && (arr5x5[18] == 'x')) ||
			((arr5x5[21] == 'x') && (arr5x5[22] == 'x') && (arr5x5[23] == 'x')) ||
			((arr5x5[11] == 'x') && (arr5x5[16] == 'x') && (arr5x5[21] == 'x')) ||
			((arr5x5[12] == 'x') && (arr5x5[17] == 'x') && (arr5x5[22] == 'x')) ||
			((arr5x5[13] == 'x') && (arr5x5[18] == 'x') && (arr5x5[23] == 'x')) ||
			((arr5x5[11] == 'x') && (arr5x5[17] == 'x') && (arr5x5[23] == 'x')) ||
			((arr5x5[13] == 'x') && (arr5x5[17] == 'x') && (arr5x5[21] == 'x')) ||

			((arr5x5[12] == 'x') && (arr5x5[13] == 'x') && (arr5x5[14] == 'x')) ||
			((arr5x5[17] == 'x') && (arr5x5[18] == 'x') && (arr5x5[19] == 'x')) ||
			((arr5x5[22] == 'x') && (arr5x5[23] == 'x') && (arr5x5[24] == 'x')) ||
			((arr5x5[12] == 'x') && (arr5x5[17] == 'x') && (arr5x5[18] == 'x')) ||
			((arr5x5[13] == 'x') && (arr5x5[18] == 'x') && (arr5x5[23] == 'x')) ||
			((arr5x5[14] == 'x') && (arr5x5[19] == 'x') && (arr5x5[24] == 'x')) ||
			((arr5x5[12] == 'x') && (arr5x5[18] == 'x') && (arr5x5[24] == 'x')) ||
			((arr5x5[14] == 'x') && (arr5x5[18] == 'x') && (arr5x5[22] == 'x')))
	{
		cout << "Победа! x" << endl;
		cout_arr_5x5();
		exit(0);
	}
	short o = 0;
	for (short i = 0; i < 25; i++)
	{
		if (arr5x5[i] != 4)
		{
			o++;
		}
	}
	if (o == 25)
	{
		cout << "Ничья" << endl;
		cout_arr_5x5();
		exit(0);
	}
}

void example_3x3() {
	cout << "Номера клеток:" << endl;
	cout << "| " << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << " |" << endl;
	cout << "| " << "-" << 4 << "-" << '|' << "-" << 5 << "-" << '|' << "-" << 6 << "-" << " |" << endl;
	cout << "| " << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << " |" << "\n" << endl;
}
void example_4x4() {
	cout << "Номера клеток:" << endl;
	cout << "| " << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << '|' << "-" << 4 << "-" << " |" << endl;
	cout << "| " << "-" << 5 << "-" << '|' << "-" << 6 << "-" << '|' << "-" << 7 << "-" << '|' << "-" << 8 << "-" << " |" << endl;
	cout << "| " << "-" << 9 << "-" << '|' << "-" << 10 << "-" << '|' << "-" << 11 << "-" << '|' << "-" << 12 << "-" << " |" << endl;
	cout << "| " << "-" << 13 << "-" << '|' << "-" << 14 << "-" << '|' << "-" << 15 << "-" << '|' << "-" << 16 << "-" << " |" << "\n" << endl;
}
void example_5x5() {
	cout << "Номера клеток:" << endl;
	cout << "| " << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << '|' << "-" << 4 << "-" << '|' << "-" << 5 << "-" << " |" << endl;
	cout << "| " << "-" << 6 << "-" << '|' << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << '|' << "-" << 10 << "-" << " |" << endl;
	cout << "| " << "-" << 11 << "-" << '|' << "-" << 12 << "-" << '|' << "-" << 13 << "-" << '|' << "-" << 14 << "-" << '|' << "-" << 15 << "-" << " |" << endl;
	cout << "| " << "-" << 16 << "-" << '|' << "-" << 17 << "-" << '|' << "-" << 18 << "-" << '|' << "-" << 19 << "-" << '|' << "-" << 20 << "-" << " |" << endl;
	cout << "| " << "-" << 21 << "-" << '|' << "-" << 22 << "-" << '|' << "-" << 23 << "-" << '|' << "-" << 24 << "-" << '|' << "-" << 25 << "-" << " |" << "\n" << endl;
}

void move_x_3x3() {
	bool q = true;
	while (q)
	{
		example_3x3();
		cout << "Введите номер клетки, куда ходить  X: ";
		cin >> x;
		if (arr3x3[x - 1] == 4)
		{
			arr3x3[x - 1] = 'x';
			q = false;
		}
		else
		{
			cout << "Клетка занята" << endl;
		}
	}
}
void move_x_4x4() {
	bool q = true;
	while (q)
	{
		example_4x4();
		cout << "Введите номер клетки, куда ходить  X: ";
		cin >> x;
		if (arr4x4[x - 1] == 4)
		{
			arr4x4[x - 1] = 'x';
			q = false;
		}
		else
		{
			cout << "Клетка занята" << endl;
		}
	}
}
void move_x_5x5() {
	bool q = true;
	while (q)
	{
		example_5x5();
		cout << "Введите номер клетки, куда ходить  X: ";
		cin >> x;
		if (arr5x5[x - 1] == 4)
		{
			arr5x5[x - 1] = 'x';
			q = false;
		}
		else
		{
			cout << "Клетка занята" << endl;
		}
	}
}
void move_0_3x3() {
	bool q = true;
	while (q)
	{
		example_3x3();
		cout << "Введите номер клетки, куда ходить 0: ";
		cin >> x;
		if (arr3x3[x - 1] == 4)
		{
			arr3x3[x - 1] = '0';
			q = false;
		}
		else
		{
			cout << "Клетка занята" << endl;
		}
	}
}
void move_0_4x4() {
	bool q = true;
	while (q)
	{
		example_4x4();
		cout << "Введите номер клетки, куда ходить 0: ";
		cin >> x;
		if (arr4x4[x - 1] == 4)
		{
			arr4x4[x - 1] = '0';
			q = false;
		}
		else
		{
			cout << "Клетка занята" << endl;
		}
	}
}
void move_0_5x5() {
	bool q = true;
	while (q)
	{
		example_5x5();
		cout << "Введите номер клетки, куда ходить 0: ";
		cin >> x;
		if (arr5x5[x - 1] == 4)
		{
			arr5x5[x - 1] = '0';
			q = false;
		}
		else
		{
			cout << "Клетка занята" << endl;
		}
	}
}
void move_pc_3x3() {
	for (short i = 0; i < 9; i++)
	{
		if (arr3x3[BEST_MOVE_3x3[i]] == 4)
		{
			if (priority == 1)
			{
				arr3x3[BEST_MOVE_3x3[i]] = '0';
			}
			else {
				arr3x3[BEST_MOVE_3x3[i]] = 'x';
			}
			break;
		}
	}
}
void move_pc_4x4() {
	for (short i = 0; i < 16; i++)
	{
		if (arr4x4[BEST_MOVE_4x4[i]] == 4)
		{
			if (priority == 1)
			{
				arr4x4[BEST_MOVE_4x4[i]] = '0';
			}
			else {
				arr4x4[BEST_MOVE_4x4[i]] = 'x';
			}
			break;
		}
	}
}
void move_pc_5x5() {
	for (short i = 0; i < 25; i++)
	{
		if (arr5x5[BEST_MOVE_5x5[i]] == 4)
		{
			if (priority == 1)
			{
				arr5x5[BEST_MOVE_5x5[i]] = '0';
			}
			else {
				arr5x5[BEST_MOVE_5x5[i]] = 'x';
			}
			break;
		}
	}
}

void play() {
	setlocale(0, "");
	short menu = 0;
	switch (sizer)
	{
	case 1:
		cout << "[+]Выберите с кем вы будете играть\n[1]Одиночный\n[2]С ИИ\n";
		cin >> menu;
		system("cls");
		switch (menu)
		{
		case 1:
			if (priority == 1)
			{
				for (short i = 0; i < 9; i++)
				{
					move_x_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
					move_0_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
				}
			}
			else
			{
				for (short i = 0; i < 9; i++)
				{
					move_0_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
					move_x_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
				}
			}
			break;
		case 2:
			if (priority == 1)
			{
				for (short i = 0; i < 9; i++)
				{
					move_x_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
					move_pc_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
				}
			}
			else
			{
				for (short i = 0; i < 9; i++)
				{
					move_0_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
					move_pc_3x3();
					check_3x3();
					system("cls");
					cout_arr_3x3();
				}
			}
			break;
		default:
			cout << "Неправильный вывод";
			break;
		}
		break;
	case 2:
		cout << "[+]Выберите с кем вы будете играть\n[1]Одиночный\n[2]С ИИ\n";
		cin >> menu;
		system("cls");
		switch (menu)
		{
		case 1:
			if (priority == 1)
			{
				for (short i = 0; i < 16; i++)
				{
					move_x_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
					move_0_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
				}
			}
			else
			{
				for (short i = 0; i < 16; i++)
				{
					move_0_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
					move_x_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
				}
			}
			break;
		case 2:
			if (priority == 1)
			{
				for (short i = 0; i < 16; i++)
				{
					move_x_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
					move_pc_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
				}
			}
			else
			{
				for (short i = 0; i < 16; i++)
				{
					move_0_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
					move_pc_4x4();
					check_4x4();
					system("cls");
					cout_arr_4x4();
				}
			}
			break;
		default:
			cout << "Неправильный ввод";
			break;
		}
		break;
	case 3:
		cout << "[+]Выберите с кем вы будете играть\n[1]Одиночный\n[2]С ИИ\n";
		cin >> menu;
		system("cls");
		switch (menu)
		{
		case 1:
			if (priority == 1)
			{
				for (short i = 0; i < 25; i++)
				{
					move_x_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
					move_0_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
				}
			}
			else
			{
				for (short i = 0; i < 25; i++)
				{
					move_0_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
					move_x_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
				}
			}
			break;
		case 2:
			if (priority == 1)
			{
				for (short i = 0; i < 25; i++)
				{
					move_x_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
					move_pc_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
				}
			}
			else
			{
				for (short i = 0; i < 25; i++)
				{
					move_0_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
					move_pc_5x5();
					check_5x5();
					system("cls");
					cout_arr_5x5();
				}
			}
			break;
		default:
			cout << "Неправильный ввод";
			break;
		}
		break;
	default:
		cout << "Неправильный ввод";
		break;
	}
}

void setting() {
	bool j = false;
	while (j == false)
	{
		cout << "[+]Настройки\n[1]Цвет крестика и нолика\n[2]Кто ходит первый\n[3]Размер поля\n[4]Выход\n";
		int menu = 0;
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << "Введите цвет крестика (цифрой):\n30-чёрный\n31-красный\n32-зелёный\n33-жёлтый\n34-синий\n35-фиолетовый\n36-бирюзовый\n37-белый";
			cin >> clrcross;
			cout << "Введите цвет нолика (цифрой):\n30-чёрный\n31-красный\n32-зелёный\n33-жёлтый\n34-синий\n35-фиолетовый\n36-бирюзовый\n37-белый";
			cin >> clrnull;
			break;
		case 2:
			cout << "Введите кто ходит первый (0=0;1=х)";
			cin >> priority;
			break;
		case 3:
			cout << "Введите размер поля (1=3х3; 2=4х4; 3=5х5)";
			cin >> sizer;
			break;
		case 4:
			j = true;
			break;
		default:
			cout << "Неправильный вывод";
			break;
		}
	}
}

int main()
{
    setlocale(0, "");
	bool i = false;
	while (i == false)
	{
		cout << "[+]Программа - Крестики-нолики\n[1]Начать игру\n[2]Настройки\n[3]Правила\n[4]Выйти\n";
		int menu;
		cin >> menu;
		switch (menu)
		{
		case 1:
			system("cls");
			play();
			break;
		case 2:
			system("cls");
			setting();
			break;
		case 3:
			system("cls");
			cout << "[+]Правила\n";
			cout << "1. Игрок A ходит крестиками \'X\' игрок B ходит \'0\' по очереди.\n";
			cout << "2. Побеждает тот, у кого выставленные им символы трижды пересекаются либо по горизонтали, либо по вертикали, либо по диагонали.\n";
			cout << "3. Если тройной комбинации нет, получается ничья!\n";
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Неверное значение";
			break;
		}
	}
}
