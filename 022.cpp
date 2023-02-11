#include<iostream>

using namespace std;
class Complex
{
    public:
    int real;
    int imag;
    friend istream& operator >>(istream& i, Complex& d);
    friend ostream& operator <<(ostream& o, Complex& c);
};
istream& operator>>(istream& i, Complex& d){
    cout<<"Enter the real value:";
    cin>>d.real;
    cout<<"Enter the Imaginary value:";
    cin>>d.imag;
}
ostream& operator<<(ostream& o, Complex& c){
    o<<c.real<<"+i"<<c.imag;
    
}
int main()
{
    Complex C1;
    cin>>C1;
    cout<<C1;
    return 0;
}