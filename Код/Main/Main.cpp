#include <iostream>
#include "Professor.h"									// подключаем класс
#include "Student.h"									// подключаем класс

using namespace std;
int main()
{
	system("chcp 1251");								// русский язык в консоли /*?????*/

	string sub;
	Date date(2012,12,12);
	
	Student s1;											// создаём оъект класса Student
	Professor s2;										// создаём оъект класса Professor
	
	s1.set_name("Пётр");								// меняем отчество студента
	s1.set_date_of_birth(3003,5,31);					// меняем дату при помощи чисел

	s2.set_secondname("Петров");						// меняем фамилию профессора
	s2.set_date_of_birth(date);							// меняем дату при помощи пересенной типа Date

	for (int i = 0; i < 2; i++)							// цикл добавления 2-х предметов профессору
	{
		cout << "Введите предмет № " << i + 1 << " ";
		cin >> sub;
		s2.set_subject(sub);							// добавляем предмет
	}
	cout << endl;
	s2.del_subject("История");							// удаляем предмет

	/*____Вывод информации в виде строк____*/
	cout << "Студент:" << "\n" << "___________________" << endl;
	cout << s1.get_string();
	cout << endl;										// пробел
	cout << "Профессор:" << "\n" << "___________________" << endl;
	cout << s2.get_string();
}