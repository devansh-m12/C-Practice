#include <iostream>
#include <limits.h>
using namespace std;

void swapalt(int num[], int size ){
    for (int i = 0; i<size ; i++){
        if ((i%2 == 1)&&(i<size)){
            swap(num[i] , num[i-1]);
        }
    }
    
}
void print(int num[] ,  int size){
    for(int i = 0; i<size; i++){
        cout<<num[i]<<" ";
    }
}

int main(){
    int size ;
    cin>> size;

    int num[100];

    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
    swapalt(num , size) ;
    print(num , size);
}