#include <iostream>
using namespace std;

int bubblesort(int arr[] , int n){
   for(int j = 1;j<n;j++){
   for(int i = 0;i<n-j;i++){
    
    if(arr[i]==0){
        swap(arr[i],arr[i+1]);
       }
    }
   }

   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }
  
}

int main(){
  const int size = 7;
  int arr[size] = {0,0,7,9,31,5,13};
  bubblesort(arr,size);
}