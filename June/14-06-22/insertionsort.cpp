#include <iostream>
using namespace std;

int insesort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j = i - 1;
        for(;j>=0;j--){

            if(arr[j]>temp)
              arr[j+1]=arr[j];

            else
              break;
        }
        arr[j+1]=temp;
    }
}



int main(){
  const int size = 7;
  int arr[size] = {8,22,7,9,31,5,13};
  cout<<insesort(arr,size);
}