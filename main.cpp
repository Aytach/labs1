#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b;

    cout<<"������� ������ �����: "<<endl;
    cin>>a;

    cout<<"������� ������ �����: "<<endl;
    cin>>b;

    cout<<"�������: "<<a<<"  "<<b<<endl;
    cout<<"�����: "<<a + b<<endl;

    return 0;
}
