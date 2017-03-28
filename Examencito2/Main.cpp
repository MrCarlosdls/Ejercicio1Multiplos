#include <iostream>

using namespace std;

void multiplos(int numero);

int main()
{
	int numero = 1000;
	multiplos(numero);

	return 0;
}
void multiplos(int numero)
{
	int n = 0;
	for (int i=0; i < numero; i++)
	{
		if (i % 3 == 0 || i % 5 == 0) {
			//cout << i << endl;
			n = n + i;
		}
	}
	cout << n << endl;
}