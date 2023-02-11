#include <iostream>

using namespace std;
class Distance{
private:
    int feet;
    int inches;
public:
    void input(){
        cout<<"Enter the feet value:";
        cin>>feet;
        cout<<"Enter the inches value:";
        cin>>inches;
    }
    Distance operator+(Distance x)
    {
        Distance temp;
        temp.feet=feet+x.feet;
        temp.inches=inches+x.inches;
        return temp;
    }
    Distance operator+(int x)
    {
        Distance temp;
        temp.feet=feet;
        temp.inches=inches+x;
        return temp;
    }
    void display(){
        cout << feet<<"'"<<inches<<"''" << endl;
    }
};
int main()
{
    cout<<"\nDistance 1:\n";
    Distance d1;
    d1.input();
    cout<<"\nDistance 2:\n";
    Distance d2;
    d2.input();
    cout<<"\nDistance 3:\n";
    Distance d3;
    d3=d1+d2;
    d3.display();
    cout<<"\nDistance 4:\n";
    Distance d4;
    d4=d1+4;
    d4.display();
    return 0;
}
