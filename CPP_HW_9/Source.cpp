#include<iostream>
using namespace std;

int main() {
	int side, number_figure;

	do {
		cout << "Enter size of figure(0 for exit): ";
		cin >> side;

		if (side == 0) {
			cout << endl << "Good bye!" << endl;
			break;
		}

		if (side < 5)
		{
			cout << endl << "No! More than 5!" << endl;
			break;
		}
		else if (side > 35)
		{
			cout << endl << "Sorry, it's very big figure!" << endl;
			break;
		}

		cout << endl << "Enter number of figure (1-10): " << endl;
		cout << "1.Above the main diagonal." << endl;
		cout << "2.Below the main diagonal." << endl;
		cout << "3.The triangle at the top." << endl;
		cout << "4.The triangle at the bottom." << endl;
		cout << "5.Two horizontal triangles." << endl;
		cout << "6.Two vertical triangles." << endl;
		cout << "7.The triangle at the left." << endl;
		cout << "8.The triangle at the right." << endl;
		cout << "9.Above the reverse diagonal." << endl;
		cout << "10.Below the reverse wediagonal." << endl;
		cin >> number_figure;
		if (number_figure < 1 || number_figure > 10)
		{
			cout << " Wrong number!" << endl;

		}

		cout << endl;


		for (int i = 0; i < side; i++)
		{
			for (int j = 0; j < side; j++)
			{
				switch (number_figure)
				{
				case 1:
					if (j >= i)			//выше главной диагонали (a)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 2:
					if (j <= i)			//ниже главной диагонали (б)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 3:
					if (i + j <= side - 1 && j >= i)			//  треугольник вверху (в)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 4:
					if (i + j >= side - 1 && j <= i)			//  треугольник внизу (г)
						cout << " * ";
					else
						cout << "   ";
					break;

				case 5:
					if (i + j >= side - 1 && j <= i || i + j <= side - 1 && j >= i)			// два горизонтальных треугольника (д)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 6:
					if (i + j <= side - 1 && j <= i || i + j >= side - 1 && j >= i)			// два вертикальных треугольника (е)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 7:
					if (i + j < side && j <= i)			//  треугольник слева (ж)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 8:
					if (i + j >= side - 1 && j >= i)			//  треугольник справа (з)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 9:
					if (i + j < side)			//  выше побочной диагонали (и)
						cout << " * ";
					else
						cout << "   ";
					break;
				case 10:
					if (i + j > side - 2)			//  ниже побочной диагонали (к)
						cout << " * ";
					else
						cout << "   ";
					break;
				}
			}
				cout << endl;
		}
		cout << endl;
	}while (side);
}
