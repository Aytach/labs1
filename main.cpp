#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b;

    cout<<"Введите первое число: "<<endl;
    cin>>a;

    cout<<"Введите второе число: "<<endl;
    cin>>b;

    cout<<"Введено: "<<a<<"  "<<b<<endl;
    cout<<"Сумма: "<<a + b<<endl;
    cout<<"Разность: "<<a - b<<endl;

    return 0;
}
