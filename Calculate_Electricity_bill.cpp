#include<iostream>
using namespace std;
class Bill
{
private:
    int x;
    float amount=0;
public:
    Bill(int a)
    {
        x = a;
        cout<<"parameterized called"<<endl;
    }
    Bill()
    {
        cout<<"default called"<<endl;
    }
    ~Bill()
    {
        cout<<"destructor called"<<endl;
    }
void calculate()
{
    switch(x<=100)
    {
        case 1: amount=x*1.20;
        break;
        case 0: switch(x<=200)
        {
            case 1: amount=120+(x-100)*2.00;
            break;
            case 0: amount=220+(x-200)*3.00;
            break;
        }break;
    }
}
void getdata()
{
    cout<<"total electricity bill is "<<amount<<endl;
}
};
int main()
{
    Bill b1(366);
    b1.calculate();
    b1.getdata();
    return 0;
}
