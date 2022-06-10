#include <iostream>
#include <limits.h>
using namespace std;

int ls (int num[], int size , int x){
    int z = 0 ;
    for (int i = 0; i<size ; i++){
        if (num[i] == x){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size , x;
    cin>> size;

    int num[100];

    for(int i = 0;i<size;i++){
        cin>>num[i];
    }

    cout<<"enter number you want to search ";
    cin>>x;

    if (ls(num , size , x)== 1){
        cout<<x<<" is present in array"<<endl;
    }
    else{
        cout<<x<<" is not in a given array."<<endl;
    }
}