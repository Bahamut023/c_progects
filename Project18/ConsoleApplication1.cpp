﻿#include <iostream>
using namespace std;

short questions = 15;
short life = 3;
short prompt = 15;
short arr_rand_number[15]{};
short arr_rand_answer[4]{};
short answer_input = 0;
short sum_correct_answer = 0;

struct Questions {
	string questions;
	string answer[4];
	string correct;
};

Questions quest[15]{
{"В 1834 году англичанин Чарльз Бэббидж изобретает аналитическую машину. Архитектура современного компьютера во многом схожа с архитектурой аналитической машины. В аналитической машине Бэббидж предусмотрел следующие части: склад (store), фабрика или мельница (mill), управляющий элемент (control) и устройства ввода/вывода информации.\n\nКакое из устройств современного компьютера соответствует «складу»?", {"Процессор", "Жесткий диск", "Оперативная память", "Клавиатура"},"Жесткий диск"},
{"В этом устройстве, которое подключается к компьютеру, отраженный свет позиционируется на линейку фотоэлементов, которая движется и последовательно считывает изображение, переводя его в компактный формат. Как называется данное устройство?", {"Принтер", "Клавиатура", "Сканер", "Мышь"},"Сканер"},
{"Существуют специально написанные небольшие по размерам программы, которые могут «приписывать» себя к другим программам, а также выполнять различные нежелательные действия на компьютере. \n\nКак называются такие программы?", {"Компьютерные вирусы", "Трансляторы", "Компиляторы", "Интерпретаторы"},"Компьютерные вирусы"},
{"Включаем компьютер, подключаемся к Интернету, но получить из него какие-либо данные без специальной программы нельзя. Должно быть программное обеспечение, которое сможет запросить информацию, получить ее, обработать и отобразить на экран пользователя. \n\nКакую программу необходимо загрузить?", {"Редактор HTML", "Браузер", "Систему управления базами данных", "Графический редактор"},"Браузер"},
{"Есть программа, которая позволяет пользователю управ­лять файлами и папками на компьютере. \n\nКак она называется?", {"Текстовый процессор", "Файловый менеджер", "Архиватор", "Система автоматизированного проектирования"},"Файловый менеджер"},
{"В 1968 году из лаборатории, в которой работал инженер,  вышло одно из тех изобретений, которое есть на столе каждого из вас – это компьютерная мышь.  \n\nНазовите имя этого изобретателя.", {"Билл Гейтс", "Артур Кларк", "Стив Джобс", "Дугласа Энгельбарта"}, "Дугласа Энгельбарта"},
{"Первый в мире язык программирования высокого уровня, разработан немецким инженером Конрадом Цузе между1942 и 1946 годами для его компьютера «Z4». \n\nКак назывался этот язык программирования?", {"Фортран", "Планкалкюль", "Бейсик", "Паскаль"},"Планкалкюль"},
{"Существуют компьютерные вирусы, которые распространяются в сети. Они проникают в память компьютера из сети, вычисляют сетевые адресадругих компьютеров и рассылают по этим адресам свои копии. \n\nКак называются эти вирусы?", {"Вирусы-компаньоны", "Макро-вирусы", "Невидимки (стелс)", "Репликаторы (черви)"},"Репликаторы (черви)"},
{"Это программное обеспечение (ПО) является  неотъемлемой частью компьютера. Без него невозможно взаимодействовать ни с одним устройством ЭВМ. Именно это ПО руководит слаженной работой всех элементов компьютерной системы, как на аппаратном уровне, так и на программном. \n\nКак называетсяэто программное обеспечение?", {"Прикладное", "Системное", "Системы программирования", "Язык программирования"},"Системное"},
{"Во внутренней памяти компьютера есть  высокоскоростная память произвольного доступа, используемая процессором для временного хранения информации. Она увеличивает производительность, поскольку хранит  наиболее часто используемые данные  и команды «ближе» к процессору, откуда их можно быстрее получить.\n\nКак называется эта память ?", {"Оперативная память", "Жесткий диск", "Кэш память", "Постоянное запоминающее устройство"},"Кэш память"},
{"Электронно-вычислительные машины  делятся  на поколения. Для компьютерной техники характерна прежде всего быстрота смены поколений- за ее короткую историю развития уже успели смениться четыре поколения и сейчас мы работаем на компьютерах пятого поколения.  Одним из  признаков при отнесении ЭВМ к тому или иному поколению является  их элементная база. \n\nКакая элементная база была у второго поколения?", {"Малые интегральные схемы.", "Большие интегральные схемы.", "Полупроводниковые приборы", "Электронные лампы"},"Полупроводниковые приборы"},
{"Для ввода графической информации и для работы с графическим интерфейсом программ используются координатные устройства ввода информации. \n\nКакое устройство  относится к ним?", {"Трекбол", "Клавиатура", "Сканер", "Микрофон"},"Трекбол"},
{"Главным устройством ввода большинства компьютерных систем является клавиатура. Первым типом клавиатур стала клавиатура для первых IBM PC и PC XT.\n\n Сколько клавиш было у этой клавиатуры?", {"83", "90", "100", "101"},"83"},
{"Если с помощью специальной программы можно управлять режимами работы и производить настройку некоторого устройства, то считается, что это устройство программно управляемое.\n\nКак называется программа,  созданная специально для управления некоторым внешним программно управляемым устройством?", {"Адаптер", "Драйвер", "Контроллер", "Браузер"},"Драйвер"},
{"Прикладные программы (Application software) - это комплекс программ, предназначенных для решения определенного класса задач. Основное назначение – дать пользователю средство обработки информации, которое не требует знаний языков программирования.\n\nКакая из перечисленных программ относится к прикладному программному обеспечению ?", {"Операционная система", "Системы управления базами данных", "Язык программирования Pascal", "Драйвер"},"Системы управления базами данных"} };

void random_question() {
	for (short i = 0; i < questions; i++) {
		short flag = rand() % questions;
		arr_rand_number[i] = flag;

	}
	for (short w = 0; w < questions; w++) {
		for (short q = 0; q < questions; q++) {
			for (short m = 0; m < questions; m++) {
				for (short y = m + 1; y < questions; y++) {
					short s = arr_rand_number[m];
					if (s == arr_rand_number[y]) {
						arr_rand_number[m] = rand() % questions;
					}
				}
			}
		}
	}
}

void random_answer() {
	for (short i = 0; i < 4; i++) {
		short f = rand() % 4;
		arr_rand_answer[i] = f;

	}
	for (short w = 0; w < 4; w++) {
		for (short q = 0; q < 4; q++) {
			for (short m = 0; m < 4; m++) {
				for (short y = m + 1; y < 4; y++) {
					short s = arr_rand_answer[m];
					if (s == arr_rand_answer[y]) {
						arr_rand_answer[m] = rand() % 4;
					}
				}
			}
		}
	}

}

void play() {
	string answer_cop[4]{};
	short flag;
	random_answer();
	for (short i = 0; i < questions; i++)
	{
		flag = arr_rand_number[i];
		cout << "[" << i + 1 << "]" << quest[flag].questions << '\n' << endl;
		for (short jh = 0; jh < 4; jh++)
		{
			cout << "[" << jh + 1 << "]" << quest[flag].answer[arr_rand_answer[jh]] << endl;
			answer_cop[jh] = quest[flag].answer[arr_rand_answer[jh]];
		}
		cout << "Если вопрос оказался для вас сложным, то вы можете взять подсказку, введя '5'\n";
		cin >> answer_input;
		while (answer_input < 1 || answer_input > 5) {
			cout << "Некоректный ввод. Повторите ввод коректно\n";
			cin >> answer_input;
		}
		if (answer_input == 5) {
			if (prompt) {
				system("cls");
				cout << "[" << i + 1 << "]" << quest[flag].questions << '\n' << endl;
				for (short search = 0; search < 4; search++) {
					short cop_search;
					if (answer_cop[search] == quest[flag].correct) {
						cop_search = search;
						cout << "|\x1b[31m" << '[' << search + 1 << ']' << answer_cop[search] << "\x1b[0m " << endl;
						bool input = 1;
						short in = 0;
						while (input)
						{
							if (in == search) {
								in = rand() % 4;
							}
							else {
								input = 0;
							}
						}
						cout << "|\x1b[31m" << '[' << in + 1 << ']' << answer_cop[in] << "\x1b[0m " << endl;
					}

				}
				prompt--;
			}
			else if (prompt == 0) {
				cout << "У вас кончились подсказки\n";
			}
		}
		while (answer_input < 1 || answer_input > 4) {
			cout << "Некоректный ввод. Повторите ввод коректно\n";
			cin >> answer_input;
		}
		if (answer_cop[answer_input - 1] == quest[flag].correct)
		{
			sum_correct_answer++;
			cout << "\n+1 балл\n";
		}
		else
		{
			deth();
			cout << "\n-1 жизнь\n";
		}
	}
}

void deth() {
	life--;
	if (life == 0)
	{
		cout << "Жизни закончились";
		exit(0);
	}
}

void setting() {
	bool j = false;
	bool y = true;
	bool i = true;
	bool t = true;
	while (j == false)
	{
		cout << "[+]Настройки\n[1]Колличество вопросов\n[2]Колличество подсказок\n[3]Колличество жизней\n[4]Выход\n";
		short menu = 0;
		cin >> menu;
		switch (menu)
		{
		case 1:
			while (i == true)
			{
				cout << "[+]Введите колличество вопросов [1] 5 [2] 10 [3] 15";
				cin >> questions;
				switch (questions)
				{
				case 1:
					questions = 5;
					i = false;
					break;
				case 2:
					questions = 10;
					i = false;
					break;
				case 3:
					questions = 15;
					i = false;
					break;
				default:
					cout << "Неправильный ввод";
					break;
				}
			}
			break;
		case 2:
			while (t == true)
			{
				cout << "[+]Введите колличество подсказок [1] 5 [2] 10 [3] 15";
				cin >> prompt;
				switch (prompt)
				{
				case 1:
					prompt = 5;
					t = false;
					break;
				case 2:
					prompt = 10;
					t = false;
					break;
				case 3:
					prompt = 15;
					t = false;
					break;
				default:
					cout << "Неправильный ввод";
					break;
				}
			}
			break;
		case 3:
			while (y == true)
			{
				cout << "[+]Введите колличество жизней [1] 1 [2] 2 [3] 3";
				cin >> life;
				switch (life)
				{
				case 1:
					life = 1;
					y = false;
					break;
				case 2:
					life = 2;
					y = false;
					break;
				case 3:
					life = 3;
					y = false;
					break;
				default:
					cout << "Неправильный ввод";
					break;
				}
			}
			break;
		case 4:
			j = true;
			break;
		default:
			cout << "Неправильный ввод.";
			break;
		}
	}
}

int main()
{
	setlocale(0, "");
	srand(static_cast<unsigned int>(time(0)));
	random_question();
	bool m = true;
	while (m)
	{
		cout << "[+]Программа - Викторина\n[1]Начать игру\n[2]Настройки\n[3]Правила\n[4]Выйти\n";
		short menu;
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
			cout << "Программа будет давать вам вопросы и 4 варианта ответов к ним. У вас есть возможность запросить подсказку к вопросу, но учтите, что их количество ограничено.\nОтвечая на вопросы вы получаете балы, при правильном выборе ответа или теряете одну жизнь, при неправильном ответе. Игра закончится когда вы потеряете все жизни\n\n\n\t\t\t\t\t\t\tЖЕЛАЮ УДАЧИ.\n\n\n" << endl;
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Неправильный ввод\n";
			break;
		}
	}
}