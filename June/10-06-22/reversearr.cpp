#include <iostream>
#include <limits.h>
using namespace std;

void reverse(int num[], int size ){
    for (int i = 0; i<size ; i++){
        int z = size - i - 1;
        cout<<num[z]<<" ";
    }
    
}

int main(){
    int size ;
    cin>> size;

    int num[100];

    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
    reverse(num , size) ;
}