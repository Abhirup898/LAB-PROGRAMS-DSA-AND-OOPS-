#include<iostream>
using namespace std;
class Binary{
    int a[3][3];
    public:
    void setdata();
    void display();
    void operator-();
};
void Binary :: setdata(){
    cout<<"Enter the values for matrix";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
}
void Binary ::display(){
    cout<<"Final Matrix";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j];
        }
        
    }
    
}
void Binary ::operator-(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j]=-a[i][j];
        }
        
    }
    
}
int main(){
    Binary a;
    a.setdata();
    -a;
    a.display();
    return 0;
}