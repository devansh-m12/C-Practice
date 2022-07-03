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
  const int size = 15;
  int arr[size] = {8,22,7,9 , 9,1,1,1,3,4,5,5,31,5,13};
  insesort(arr,size);

  for(int i = 0;i<15;i++){
    cout<<arr[i]<<" ";
  }
}