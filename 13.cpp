#include <iostream>

using namespace std;
class count{
  private:
  int value;
  public:
  count(){value=5;}
  
  void operator ++(){//PREFIX
      ++value;
  }
  void operator ++(int){//POSTFIX
      value++;
  }
  void display(){
      cout<<value<<endl;
  }
};
int main()
{
    count c;
    c++;
    ++c;
    c.display();

    return 0;
}