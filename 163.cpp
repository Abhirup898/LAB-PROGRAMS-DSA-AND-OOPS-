#include <iostream>
using namespace std;
const int N = 7;

template <class Type>
class Array{
    private:
        Type arr[N];
    public:
        void read(){
            for(int i = 0; i < N; i++){
                cin>>arr[i];
            }
        }
        void sortArr(){
            Type temp;
            int SIZE = sizeof(arr)/sizeof(Type);
            for(int i = 0; i < SIZE - 1; i++){
                for(int j = i + 1; j < SIZE; j++){
                    if(arr[i] < arr[j]){
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
        void display(){
            int SIZE = sizeof(arr)/sizeof(Type);
            for(int i = 0; i < SIZE; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Array <int> i_obj;
    Array <float> f_obj;
   
    cout<<"Enter integer array:";
    i_obj.read();
   
    cout<<"Enter floating number array:";
    f_obj.read();
    i_obj.sortArr();
    f_obj.sortArr();
    cout<<"Sorted integer array:"<<endl;
    i_obj.display();
    cout<<endl<<"Sorted floating number array:"<<endl;
    f_obj.display();
    return 0;
}