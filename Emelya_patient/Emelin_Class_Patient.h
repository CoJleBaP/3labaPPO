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
	Emelin_Class_Patient(char * fio,char * adress,int * NoKart,char * Diagnoz);
	
	///Деструктор освобождает ресурсы
	~Emelin_Class_Patient(void);

	/// Список пациентов с конкретным диагнозом
	/** Показывает список пациентов имеющих данный диагноз
	/param Diagnoz диагноз персоны
	*/
	void PatientsList(std::string Diagnoz);

	/// Список пациентов с номером карты из заданного диапазона
	/** Показывает список пациентов и соответствующие им номера карт
	/param NoKart медицинская карта персоны
	*/
	void NoKarts(int * NoKart);

	/// Список пациентов проживающих в заданном городе
	/** Показывает список пациентов проживающих в определенном городе
	/param adress адрес персоны
	*/
	void Adres(std::string adress);
};

