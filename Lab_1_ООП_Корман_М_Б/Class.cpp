#include "Class.h"

	// ���� �����
	void GOODS::Show() 
	{
		cout << "����� ������: " << GetName() << '\n';
		cout << "����� ������: " << GetNumber() << '\n';
		cout << "�i�� ������: " << GetPrice() << '\n';
	}

	// �������� �����
	void GOODS::SetName(const char* value_name)
	{
		for (size_t i = 0; i < L_name; i++)
		{
			name[i] = value_name[i];
		}
	}
	// �������� �����
	void GOODS::SetNumber(int value_number) 
	{
		number = value_number;
	}
	// �������� ����
	void GOODS::SetPrice(float value_price) 
	{
		price = value_price;
	}
	// �������� �����, �����, ����
	void GOODS::Set(const char* value_name, int value_number, float value_price) 
	{
		SetName(value_name);
		SetNumber(value_number);
		SetPrice(value_price);
	}

	// �������� �����
	char* GOODS::GetName() 
	{
		return name;
	}
	// �������� �����
	int GOODS::GetNumber() 
	{
		return number;
	}
	// �������� ����
	float GOODS::GetPrice() 
	{
		return price;
	}

	// ����������� ��� ���������
	GOODS::GOODS() 
	{
		char defName[] = "NONE";
		for (size_t i = 0; i < sizeof(defName); i++)
		{
			name[i] = defName[i];
		}
		number = 0;
		price = 0;

		cout << "������ ������������ ��� ��������i� " << this << '\n';
	}
	// ����������� � �����������
	GOODS::GOODS(const char* value_name, int value_number, float value_price) 
	{
		Set(value_name, value_number, value_price);

		cout << "������ ������������ " << this << '\n';
	}
	// ����������� ���������
	GOODS::GOODS(const GOODS& other) 
	{
		for (size_t i = 0; i < L_name; i++)
		{
			this->name[i] = other.name[i];
		}

		this->number = other.number;
		this->price = other.price;

		cout << "������ ������������ ���i������� " << this << '\n';
	} 
	// ����������
	GOODS::~GOODS()
	{

		cout << "������ ����������� " << this << '\n';
	}