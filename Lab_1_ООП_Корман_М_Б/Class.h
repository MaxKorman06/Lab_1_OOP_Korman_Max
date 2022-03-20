#pragma once

#include <iostream>

using namespace std;

const int L_name = 30;

class GOODS
{
private:
	
	char name[L_name];
	int number;
	float price;
	
public:
	// Вивід класу
	void Show(); 

	// Присвоїти назву
	void SetName(const char* ); 

	// Присвоїти номер
	void SetNumber(int );

	// Присвоїти ціну
	void SetPrice(float); 

	// Присвоїти назву, номер, ціну
	void Set(const char*, int, float); 

	// Отримати назву
	char* GetName(); 

	// Отримати номер
	int GetNumber(); 

	// Отримати ціну
	float GetPrice(); 

	// Конструктор без параметрів
	GOODS(); 

	// Конструктор з параметрами
	GOODS(const char*, int, float);

	// Конструктор копіювання
	GOODS(const GOODS&); 

	// Деструктор
	~GOODS(); 
};