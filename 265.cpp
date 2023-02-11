#include <iostream>
using namespace std;
class space { 
    float x;
    float add;
    float diff;
    float mul;
    float div;

    public:
void getdata (float a ){ 
    x=a;
}

space operator+(space b){ 
  space temp;
 
  temp.add=(float)x+(float)b.x;
  return temp;
    
}
space operator-(space b){ 
  space temp;

  temp.diff=(float)x-(float)b.x;
  return temp;
    
}
space operator*(space b){ 
  space temp;
  
  temp.mul=(float)x*(float)b.x;
  return temp;
    
}
space operator/(space b){ 
  space temp;
 
  temp.div=(float)x/(float)b.x;
  return temp;
    
}
void display(){
    cout<<"\n addition : " <<add;
    cout<<"\n substraction : "<<diff;
    cout<<"\n multiplication : "<<mul;
    cout<<"\n division : "<<div;

    }
};
int main (){

    space s1;
    s1.getdata(4.3);
    space s2;
    s2.getdata(2.1);
    space s3;
    s3=s1+s2;
    s3=s1-s2;
    s3=s1*s2;
    s3=s1/s2;
    s3.display();


}