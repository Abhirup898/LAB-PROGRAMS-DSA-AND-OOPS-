#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char line[100];
    fstream file;
    file.open("b.txt",ios::out|ios::app);
    if(file.fail()){
        cout<<"error opening file"<<endl;

    }
    else{
        cout<<"enter a line:";
        cin.getline(line,100);
        file<<line<<endl;
        cout<<"line written into the file"<<endl;
        file.close();

    }
    return 0;
}
