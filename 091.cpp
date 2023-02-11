#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ofile;
    ofile.open("inputa.txt");
    ofile<<"this is a line in a file"<<endl;
   ofile<<"this is another file"<<endl;
    cout<<"data written to the file"<<endl;
    ofile.close();
    return 0;
}