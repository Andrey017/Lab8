#include "complex.h"


int main()
{
	while (1)
	{
		Complex complex;
		Complex a, b, c;
		
		fstream F;
		F.open("C:\\Users\\Андрей\\Desktop\\complex.txt");
		if (F) {
			while (!F.eof())
			{
				F >> c;
				cout << "The result of the past calculation: " << c << endl;
			}
		}

		cout << "Enter Real and Imag part: ";
		cin >> a;
		cout << "Enter Real and Imag part: ";
		cin >> b;
		
		complex.menu();
		complex.EnterOperation(a, b);

	}

    return 0;
}

