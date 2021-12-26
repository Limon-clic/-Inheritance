#pragma once
#include "Human.h"
#include "String"
#include <Vector>

class Professor : public Human											// ���������
{
private:
	std::vector<std::string> subject;									// ������� �������
	int wage;															// ��������
	std::string academic_degree;										// ������������� �������
	short length_of_work;												// ���� ������

public:
	void set_subject(std::string new_subject);							// ������� �������
	//void set_subject(unsigned int number);								// ������� ��������
	void set_wage(int new_wage);										// ��������
	void set_academic_degree(const std::string& new_academic_degree);	// ������. �������
	void set_length_of_work(unsigned short new_length_of_work);			// ���� ������
	void set_props(std::string new_academic_degree, unsigned short new_length_of_work, std::string new_subject, int new_wage, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);	// ��� ���������
	void del_subject(std::string element);								// ������� �������

	std::vector<std::string> get_subject() const;									// �������� ��������
	int get_wage() const;												// ��������
	std::string get_academic_degree() const;							// ������. �������
	unsigned short get_length_of_work() const;							// ���� ������
	
	Professor();														// ����������� �� ���������
	Professor(std::string new_academic_degree, unsigned short new_length_of_work, std::string new_subject, int new_wage, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);	// ����������� � �����������
	std::string get_string() const;										// �������� ���������� �� ������� ������ � ���� ������
};