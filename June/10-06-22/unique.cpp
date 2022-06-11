#include <iostream>
#include <limits.h>
using namespace std;

void diuv(int num[], int size ){
    
} 

int main(){
    int x;
    cin>>x;
    int start;
    if (x%2 == 0){
       start = x/2;
    }
    else{
       start = (x/2)+1;
    }

    for (int i = 0 ; i<x ; i++)
    {
        if (i%2 == 0){
           start = start + i;
           cout<<start<<" ";
        }
        else{
           start = start - i ;
           cout<<start<<" ";
        }
    }
}