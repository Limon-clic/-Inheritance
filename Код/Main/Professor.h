#pragma once
#include "Human.h"
#include "String"
#include <Vector>

class Professor : public Human											// профессор
{
private:
	std::vector<std::string> subject;									// учебный предмет
	int wage;															// зарплата
	std::string academic_degree;										// академическая степень
	short length_of_work;												// стаж работы

public:
	void set_subject(std::string new_subject);							// указать предмет
	//void set_subject(unsigned int number);								// указать предметы
	void set_wage(int new_wage);										// зарплату
	void set_academic_degree(const std::string& new_academic_degree);	// академ. степень
	void set_length_of_work(unsigned short new_length_of_work);			// стаж работы
	void set_props(std::string new_academic_degree, unsigned short new_length_of_work, std::string new_subject, int new_wage, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);	// все параметры
	void del_subject(std::string element);								// удалить предмет

	std::vector<std::string> get_subject() const;									// получить предметы
	int get_wage() const;												// зарплату
	std::string get_academic_degree() const;							// академ. степень
	unsigned short get_length_of_work() const;							// стаж работы
	
	Professor();														// конструктор по умолчанию
	Professor(std::string new_academic_degree, unsigned short new_length_of_work, std::string new_subject, int new_wage, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);	// конструктор с параметрами
	std::string get_string() const;										// получить информацию об объекте класса в виде строки
};