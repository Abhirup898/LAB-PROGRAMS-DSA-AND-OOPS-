#include<iostream>
using namespace std;
class box{
    public:
    double height;
    double weight;
    double volume;
    friend istream& operator >> (istream&din,box i );
    friend ostream& operator <<(ostream&dout,box o);

};
istream& operator >>(istream&din,box i){
    cout<<"enter height:";
    din>>i.height;
    cout<<"enter weight:";
    din>>i.weight;
     cout<<"enter volume:";
    din>>i.volume;

} 
ostream& operator <<(ostream&dout ,box o){
    dout<<"height =="<<o.height;
    dout<<"weight=="<<o.weight;
    o.volume=o.height*o.weight;
    dout<<"volume=="<<o.volume;
}
int main(){
    box b1;
    cin>>b1;
    cout<<b1;
    return 0;
}