#include "Class.h"

	// Вивід класу
	void GOODS::Show() 
	{
		cout << "Назва товару: " << GetName() << '\n';
		cout << "Номер товару: " << GetNumber() << '\n';
		cout << "Цiна товару: " << GetPrice() << '\n';
	}

	// Присвоїти назву
	void GOODS::SetName(const char* value_name)
	{
		for (size_t i = 0; i < L_name; i++)
		{
			name[i] = value_name[i];
		}
	}
	// Присвоїти номер
	void GOODS::SetNumber(int value_number) 
	{
		number = value_number;
	}
	// Присвоїти ціну
	void GOODS::SetPrice(float value_price) 
	{
		price = value_price;
	}
	// Присвоїти назву, номер, ціну
	void GOODS::Set(const char* value_name, int value_number, float value_price) 
	{
		SetName(value_name);
		SetNumber(value_number);
		SetPrice(value_price);
	}

	// Отримати назву
	char* GOODS::GetName() 
	{
		return name;
	}
	// Отримати номер
	int GOODS::GetNumber() 
	{
		return number;
	}
	// Отримати ціну
	float GOODS::GetPrice() 
	{
		return price;
	}

	// Конструктор без параметрів
	GOODS::GOODS() 
	{
		char defName[] = "NONE";
		for (size_t i = 0; i < sizeof(defName); i++)
		{
			name[i] = defName[i];
		}
		number = 0;
		price = 0;

		cout << "Виклик конструктора без параметрiв " << this << '\n';
	}
	// Конструктор з параметрами
	GOODS::GOODS(const char* value_name, int value_number, float value_price) 
	{
		Set(value_name, value_number, value_price);

		cout << "Виклик конструктора " << this << '\n';
	}
	// Конструктор копіювання
	GOODS::GOODS(const GOODS& other) 
	{
		for (size_t i = 0; i < L_name; i++)
		{
			this->name[i] = other.name[i];
		}

		this->number = other.number;
		this->price = other.price;

		cout << "Виклик конструктора копiйування " << this << '\n';
	} 
	// Деструктор
	GOODS::~GOODS()
	{

		cout << "Виклик деструктора " << this << '\n';
	}