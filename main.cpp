#include <iostream>
using namespace std;

int sum(int x, int y)
{
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}

int main(int argc, char *argv[]) 
{
	int x, y;
	if (!sscanf_s(argv[1], "%d", &x)) 
	{
		printf_s("arg1 should be number\n");
		system("pause");
		return 1;
	}
	if (!sscanf_s(argv[2], "%d", &y))
	{
		printf_s("arg2 should be number\n");
		system("pause");
		return 1;
	}
	cout << "Summa: " << sum(x, y) << endl;
	cout << "Vychitanie: " << sub(x, y) << endl;
	system("pause");
	return 0;
}
