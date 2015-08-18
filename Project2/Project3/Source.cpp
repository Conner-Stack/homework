#include <iostream>

int main()
{
THIS IS A SWITCH STATEMENT
	int a=124;
	int b = 50;
	int cB;

	std::cin >> a; //120
	std::cin >> b; //54

	cB = b; //54

	b = a; //120
	a = cB; //54
	std::cout << a << " "<< b;
	system("pause");
	return 0;
}
