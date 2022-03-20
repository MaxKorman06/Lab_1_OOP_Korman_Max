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
	// ���� �����
	void Show(); 

	// �������� �����
	void SetName(const char* ); 

	// �������� �����
	void SetNumber(int );

	// �������� ����
	void SetPrice(float); 

	// �������� �����, �����, ����
	void Set(const char*, int, float); 

	// �������� �����
	char* GetName(); 

	// �������� �����
	int GetNumber(); 

	// �������� ����
	float GetPrice(); 

	// ����������� ��� ���������
	GOODS(); 

	// ����������� � �����������
	GOODS(const char*, int, float);

	// ����������� ���������
	GOODS(const GOODS&); 

	// ����������
	~GOODS(); 
};