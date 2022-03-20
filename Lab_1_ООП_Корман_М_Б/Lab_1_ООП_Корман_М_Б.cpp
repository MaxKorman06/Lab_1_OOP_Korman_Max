#include <iostream>
#include <string>

using namespace std;

const int L_name = 30;

class GOODS
{
	private:
		char name[L_name];
		int number;
		float price;

	public:
		void Show() // Вивід класу
		{
			cout << "Назва товару: " << GetName() << '\n';
			cout<< "Номер товару: " << GetNumber() << '\n';
			cout << "Ціна товару: " << GetPrice() << '\n';
		}

		void SetName(const char* value_name) // Присвоїти назву
		{
			for (size_t i = 0; i < L_name; i++)
			{
				name[i] = value_name[i];
			}
		} 
		void SetNumber(int value_number) // Присвоїти номер
		{
			number = value_number;
		}
		void SetPrice(float value_price) // Присвоїти ціну
		{
			price = value_price;
		}
		void Set(const char* value_name, int value_number, float value_price) // Присвоїти назву, номер, ціну
		{
			SetName(value_name);
			SetNumber(value_number);
			SetPrice(value_price);
		} 

		char* GetName() // Отримати назву
		{
				return name;
		}
		int GetNumber() // Отримати номер
		{
			return number;
		}
		float GetPrice() // Отримати ціну
		{
			return price;
		}\

		GOODS() // Конструктор без параметрів
		{
			char defName[] = "NONE";
			for (size_t i = 0; i < sizeof(defName); i++)
			{
				name[i] = defName[i];
			}
			number = 0;
			price = 0;

			cout << "Виклик конструктора без параметрів" << this << '\n';
		}		
		GOODS(const char* value_name, int value_number, float value_price) // Конструктор з параметрами
		{
			Set(value_name, value_number, value_price);

			cout << "Виклик конструктора" << this << '\n';
		}
		GOODS(const GOODS &other) // Конструктор копіювання
		{
			for (size_t i = 0; i < L_name; i++)
			{
				this->name[i] = other.name[i];
			}

			this->number = other.number;
			this->price = other.price;

			cout << "Виклик конструктора копійування" << this << '\n';
		}
		~GOODS()// Деструктор
		{
			cout << "Виклик деструктора" << this << '\n';
		}
};


int main()
{
	setlocale(LC_ALL, "ukr");

	GOODS apple("apple", 2, 3);
	apple.Show();
	
	GOODS orange;
	orange.Set("orange", 6, 2);
	orange.Show();

	GOODS lemon(apple);
	lemon.Show();
}