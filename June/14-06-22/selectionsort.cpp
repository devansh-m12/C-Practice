#include <iostream>
using namespace std;

void selectionsort(int arr[] , int n){

    for(int i = 0;i<n;i++){
        int ans = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[ans]){
                ans = j;
        }
        }
        swap(arr[ans] , arr[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
  const int size = 5;
  int arr[size] = {5, 2, 3, 4, 1};
  selectionsort(arr,size);
}