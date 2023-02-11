#include <fstream>
#include<iostream>
using namespace std;
int main() {
  ifstream fin;
  char ch;

  fin.open("b.txt");
  cout<<"\n Data in file...";

  while(!fin.eof()){
    fin.get(ch);
    cout<<ch;
  }

 fin.close();
 return 0;
}
