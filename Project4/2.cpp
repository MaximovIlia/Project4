#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "rus");
    int i, a, sum = 0;
    cout << "������� ��������� �������� �� 1 �� 500: ";
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

    cout << "���������: " << result << endl;

    float z = 0;
    for (int i = 1; i <= 1000; i++)
    {
        z = (z + i);
    }
    z = z / 1000;
    cout << "\n������� �������������� ��������� �� 0 �� 1000 ����� = " << z;

    int a, s, i;
    s = 1;  
    std::cin >> a;  
    for (i = a; i <= 20; i++)  
    {
        s = s * i;  
    }
    std::cout <<  s; 



    int num;
    std::cout << "������� �����: ";
    std::cin >> num;

    if (num > 0 && num < 10) {
        for (int i = 0; i < 10; i++)
            std::cout << num << " x " << i << " = "; num* i;
    }
    else
        std::cout << "������������ ����";

     




}