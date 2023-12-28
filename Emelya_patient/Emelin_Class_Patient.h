#pragma once
#include<iostream>
/**
	@file		Emelin_Class_Patient.h
	@brief		������������ ���� ������ �������
	@copyright	����
	@author		������ ������� ����������
	@date		18-12-23
	@version	12.22.21
\par ���������� ������:
	@ref Emelin_Class_Patient
\par �������� �����:
	@ref Emelin_Class_Patient
*/

/// ����� �������� ��������
/** �������� ������ �������� � ������ ������ � ���
*/
class Emelin_Class_Patient
{
protected:
	std::string fio;		///< ��� ��������
	std::string adress;		///< ����� ����������
	int * NoKart;			///< ����� �����
	std::string Diagnoz;	///< �������
public:
	/// ����������� �� ���������
	/** ������� ������� ��� ������������� �����
	*/
	Emelin_Class_Patient();

	/// ����������� � ����������� ����� ������
	/** ������� ������� � �������������� ����
	\param fio ��� �������
	\param adress ����� �������
	\param NoKart ����������� ����� �������
	\param Diagnoz ������� �������
	*/
	Emelin_Class_Patient(char * fio,char * adress,int * NoKart,char * Diagnoz);
	
	///���������� ����������� �������
	~Emelin_Class_Patient(void);

	/// ������ ��������� � ���������� ���������
	/** ���������� ������ ��������� ������� ������ �������
	/param Diagnoz ������� �������
	*/
	void PatientsList(std::string Diagnoz);

	/// ������ ��������� � ������� ����� �� ��������� ���������
	/** ���������� ������ ��������� � ��������������� �� ������ ����
	/param NoKart ����������� ����� �������
	*/
	void NoKarts(int * NoKart);

	/// ������ ��������� ����������� � �������� ������
	/** ���������� ������ ��������� ����������� � ������������ ������
	/param adress ����� �������
	*/
	void Adres(std::string adress);
};

