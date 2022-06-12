#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start +(end - start)/2; // for int_max limit
    int ans = -1;

    while (start<=end)
    {
        if(arr[mid] == key) {
            ans = mid;
            start =  mid + 1 ;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
       mid = start +(end - start)/2;
    }

    return ans;
    
}


int main(){
    int even[6] = {2 , 4,12,12,12,18};
    int odd[5] = {3,7,12,45 ,50} ;

    int index = binarysearch(even , 6 , 12);
    cout<<index<<endl;
}