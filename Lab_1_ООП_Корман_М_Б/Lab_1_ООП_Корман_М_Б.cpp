#include "Class.h"

int main()
{
	setlocale(LC_ALL, "ukr");

	GOODS* bananas = new GOODS; // Вказівник на екземпляр(обєкт) класу
	bananas->Set("bananas", 7, 4);
	bananas->Show();
	delete bananas;

	cout << '\n';

	GOODS apple("apple", 2, 3);
	apple.Show();
	
	cout << '\n';

	GOODS orange;
	orange.Set("orange", 6, 2);
	orange.Show();

	cout << '\n';

	GOODS apple2(apple);
	apple2.Show();

	cout << '\n';

	const int numBerris = 3;
	GOODS berris[numBerris];
	berris[0].Set("strawberries", 5, 6);
	berris[1].Set("blackberry", 9, 8);
	berris[2].Set("cherry", 7, 9);
	for (size_t i = 0; i < numBerris; i++)
	{
		berris[i].Show();
	}

	cout << '\n';
	
	GOODS none;
	none.Show();

	cout << '\n';

	GOODS* p = new GOODS;	// Шановний пане який читає цей коментар,
	p->Set("grape", 5, 6);	// коли я його писав, я думав,
	void (GOODS:: * pf)();	// що розуміє цю частину коду тільки я і Бог,
	pf = &GOODS::Show;		// тепер розуміє тільки Бог.
	(p[0].*pf)();			// 
	delete p;				// Годин потрачено на зрозуміння коду 1.1

	cout << '\n';

	return 0;
}