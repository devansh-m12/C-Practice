#include<iostream>
using namespace std;

int montarr(int arr[] , int size){

    for (int i = 0 ; i<size ; ++i){
        if(arr[i-1] < arr[i]<arr[i+1]){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[4] = {0,1,2,0};
    int n = montarr(arr , 4);
    cout<<n<<endl;
}