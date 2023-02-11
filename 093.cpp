#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream ifile;
ifile.open("b.txt");
cout<<"reading from the file"<<endl;
while(!ifile.eof()){
    char ch;
    ifile>>ch;
    cout<<ch;
}
ifile.close();
return 0;
}