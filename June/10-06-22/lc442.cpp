#include <iostream>
using namespace std;

void soort(int num[] , int size){
    int a = 0 ;
    int b = size-1 ;
    int c[size];
    for(int i = 0 ; i<size ; i++){
        if(num[i] == 0){
            c[a] = 0;
            a++;
        }
        else if (num[i]== 1){
            c[b] = 1;
            b--;
        }
    }

    
 for(int i = 0; i<size; i++){
        cout<<c[i]<<" ";
    }
    
}


int main(){
    int size ;
    cin>> size;

    int num[100];

    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
    soort(num , size) ;
}