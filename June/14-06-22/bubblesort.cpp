#include <iostream>
using namespace std;

int bubblesort(int arr[] , int n){
   int ans = 0;
   for(int j = 1;j<n;j++){
   int x = -1;
   for(int i = 0;i<n-j;i++){
    
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        ans ++;
        x = +1 ;
       }
    }
    if(x == -1){
        return ans;
    }
   }
   return ans;
}

int main(){
  const int size = 7;
  int arr[size] = {8,22,7,9,31,5,13};
  cout<<bubblesort(arr,size);
}