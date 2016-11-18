#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x+y;
}

int main(int argc, char *argv[]) {
    int x=2;
    int y=3;
    int a=0;
    /*if (sscanf(argv[1], "%d", &x) < 1)
    {
        printf("Ошибка, неверный формат первого входного параметра. Для завершения нажмите любую клавишу\n");
        system("pause");
        return 1;
    }

    if (sscanf(argv[2], "%d", &y) < 1)
    {
        printf("Ошибка, неверный формат первого входного параметра. Для завершения нажмите любую клавишу\n");
        system("pause");
        return 1;}
    */
     a = sum(x,y);
    cout << a << endl;
    return 0;
}
