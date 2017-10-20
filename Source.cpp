#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{

	double x, h = 0.5, d = 0.001, sum, k = 1, SUM;

	for (x = -1; x <= 1; x += h)
	{
		sum = 0; SUM = 0;
		do
		{
			
			sum = (pow(-1, k) * x )/ (k * (k + 1)) * sin(2 * k + 1);
		   SUM += sum;
		   k++;		
			
		} while (fabs(sum) >= d);
		cout << "\nSUM = " << SUM << " x = " << x << "  sum = " << sum << endl;
	}

	_getch();
	return 0;

}