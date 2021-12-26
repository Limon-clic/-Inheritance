#include "Student.h"
#include <iostream>

void Student::set_grants(unsigned int new_grants)				// указать стипендию
{
	if (new_grants >= 0)
		this->grants = new_grants;
	else throw std::invalid_argument("Почему отрицательная?");

}

void Student::set_record_book(long int new_record_book)			// зачетную книжку
{
	if (new_record_book > 0)
		this->record_book = new_record_book;
	else throw std::invalid_argument("Таких не бывает");

}

void Student::set_group(const std::string& new_group)			// группу
{
	if (new_group != "")
		this->group = new_group;
	else
		throw std::invalid_argument("Invalid argument");
}

void Student::set_cours(int new_cours)							// курс
{
	if (new_cours > 0 and new_cours <= 5)
		this->cours = new_cours;
	else throw std::invalid_argument("Param cant be empty");
}

int Student::get_cours() const
{
	return this->cours;
}

std::string Student::get_group() const							// получить группу
{
	return this->group;
}

long int Student::get_record_book() const						// зачетную книжку
{
	return this->record_book;
}

unsigned int Student::get_grants() const						// сьипендию
{
	return this->grants;
}

Student::Student()												// базовый конст.
{
	set_name("Вася");
	Date();
	set_secondname("Васильев");
	set_lastname("Васильевич");
	this->group = "МПЁ";
	this->cours = 3;
	set_grants(4500);
	set_record_book(254656);
}

Student::Student(unsigned int grants, long int record_book, const std::string &new_group, int new_course, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)	// конст. с параметром
{
	set_props(grants, record_book, new_group, new_course, new_name, new_secondname, new_lastname, new_date_of_birth);
}

void  Student::set_props(unsigned int new_grants, long int new_record_book, const std::string& new_group, int new_course, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)	// указать всё сразу
{
	set_grants(new_grants);
	set_record_book(new_record_book);
	set_cours(new_course);
	set_group(new_group);
	set_name(new_name);
	set_secondname(new_secondname);
	set_lastname(new_lastname);
	set_date_of_birth(new_date_of_birth);
}

std::string Student::get_string() const							// получить все параметры в виде строки
{
	std::string str;
	return str =
		"Имя: " + get_name() + "\n" +
		"Фамилия: " + get_secondname() + "\n" +
		"Отчество: " + get_lastname() + "\n" +
		"Дата рождения: " + date_of_birth.get_string() + "\n" +
		"Группа: " + this->group + "\n" +
		"Курс: " + std::to_string(get_cours()) + "\n" +
		"Зачетная книжка: " + std::to_string(get_record_book()) + "\n" +
		"Стипендия: " + std::to_string(get_grants()) + "\n";
}