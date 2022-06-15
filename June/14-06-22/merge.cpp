#include <iostream>
using namespace std;

int insesort(int arr1[],int m , int arr2[], int n){
    for(int i = 0;i<n;i++){
        int temp = arr2[i];
        int j = m + i - 1;
        while(j>=0){

            if(arr1[j]>temp){
              arr1[j+1]=arr1[j];}

            else{
              break;}
            j--;
        }
        arr1[j+1]=temp;
   }


    for(int i = 0; i<(n+m);i++){
        cout<<arr1[i]<<" ";
    }
}



int main(){
  int size1 = 4;
  int arr1[size1] = {1,3,4,9,0,0,0};
  int size2 = 3;
  int arr2[size2] = {1,4 ,5};
  insesort(arr1,size1,arr2,size2);
}