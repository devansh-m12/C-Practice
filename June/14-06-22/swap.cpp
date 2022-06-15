#include <iostream>
using namespace std;

int swapr (int arr[] , int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {1 , 2 ,4 ,5 ,1};
    swapr(arr,5);
}