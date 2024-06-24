#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "rus");
    int i, a, sum = 0;
    cout << "Введите начальное значение от 1 до 500: ";
    cin >> a;
    i = a;
    for (; i <= 500; i++, a++)
    {
        sum = sum + a;
        cout << sum << "\n";
    }

    int a, b, result;

    cout << "X: ";
    cin >> a;

    cout << "Y: ";
    cin >> b;

    result = pow(a, b);

    cout << "Результат: " << result << endl;

    float z = 0;
    for (int i = 1; i <= 1000; i++)
    {
        z = (z + i);
    }
    z = z / 1000;
    cout << "\nСреднее арифметическое диапазона от 0 до 1000 равно = " << z;

    int a, s, i;
    s = 1;  
    std::cin >> a;  
    for (i = a; i <= 20; i++)  
    {
        s = s * i;  
    }
    std::cout <<  s; 



    int num;
    std::cout << "введите число: ";
    std::cin >> num;

    if (num > 0 && num < 10) {
        for (int i = 0; i < 10; i++)
            std::cout << num << " x " << i << " = "; num* i;
    }
    else
        std::cout << "Неправильный ввод";

     




}