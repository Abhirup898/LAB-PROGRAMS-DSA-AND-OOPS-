#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream ifile;
    ifile.open("inputb.txt");
    cout<<"reading the data from the file:-";
    while(!ifile.eof()){
        char ch;
        ifile>>ch;
        cout<<ch;
        float amt;
        ifile>>amt;
        cout<<amt<<endl;


    }
    ifile.close();
    return 0;
}