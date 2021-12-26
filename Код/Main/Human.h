#pragma once
#include "Date_of_birth.h"
#include<string>

class Human																// чебурек
{
private:
	std::string name;													//ФИО
	std::string secondname;
	std::string lastname;
public:
	Date date_of_birth;													// дата рождения
	void set_name(const std::string& new_name);							// указать имя
	void set_secondname(const std::string& new_secondname);				// указать фамилию
	void set_lastname(const std::string& new_lastname);					// указать отчество
	void set_date_of_birth(Date new_date_of_birth);						// указать дату рождения
	void set_date_of_birth(int new_year, int new_month, int new_day);	// указать дату рождения

	std::string get_name() const;										// получить имя
	std::string get_secondname() const;									// получить фамилию
	std::string get_lastname() const;									// получить отчество
		Date get_date_of_birth() const;									// получить дату рождения

	Human();															// конструктор по умолчанию
	Human(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);				// конструктор не по умолчанию
	void set_props(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);	// указать всё
	std::string get_string();											// получить информацию об объекте класса в виде строки
};