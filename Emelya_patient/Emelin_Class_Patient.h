#pragma once
#include<iostream>
/**
	@file		Emelin_Class_Patient.h
	@brief		Заголовочный файл класса Пациент
	@copyright	ВоГУ
	@author		Емелин Алексей Евгеньевич
	@date		18-12-23
	@version	12.22.21
\par Использует классы:
	@ref Emelin_Class_Patient
\par Содержит класс:
	@ref Emelin_Class_Patient
*/

/// Класс описания пациента
/** Содержит данные пациента и методы работы с ним
*/
class Emelin_Class_Patient
{
protected:
	std::string fio;		///< ФИО пациента
	std::string adress;		///< Адрес проживания
	int * NoKart;			///< Номер карты
	std::string Diagnoz;	///< Диагноз
public:
	/// Конструктор по умолчанию
	/** Создает персоны без инициализации полей
	*/
	Emelin_Class_Patient();

	/// Конструктор с заполнением полей класса
	/** Создает персоны и инициализирает поля
	\param fio ФИО персоны
	\param adress адрес персоны
	\param NoKart медицинская карта персоны
	\param Diagnoz диагноз персоны
	*/
	Emelin_Class_Patient(char * fio,char * adress,int * NoKart,char * Diagnoz;);
	
	///Деструктор освобождает ресурсы
	~Emelin_Class_Patient(void);


	void PatientsList(std::string Diagnoz);
	void NoKarts(int * NoKart);
	void Adres(std::string adress);
};

