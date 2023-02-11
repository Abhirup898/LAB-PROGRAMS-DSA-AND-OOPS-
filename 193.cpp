#include<bits/stdc++.h>
using namespace std;

class Complex{
 private:
    int real, img;

 public:
 Complex(){}
    Complex(int r, int i){
        real = r; img = i;
    }

    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    void operator ++(){
        ++real;
    }

    
    Complex operator +(Complex c){
        Complex temp;
        temp.real = real+c.real;
        temp.img = img+c.img;
        return temp;
    }
};

int main(){
    Complex c1(5, 4);
    Complex c2(2, 5);
    Complex c3;
    c3 = c1 + c2;
    
    c3.print();
    ++c3;
    c3.print();
}
