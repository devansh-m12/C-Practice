#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start +(end - start)/2; // for int_max limit
    int ans = 0 ;
    while (start<=end)
    {
        if(arr[mid] == key) {
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
       mid = start +(end - start)/2;
       ans = mid + 1 ;
    }

    return ans;
    
}


int main(){
    int even[6] = {2 , 4,6,8,12,18};
    int odd[5] = {3,7,12,45 ,50} ;

    int index = binarysearch(even , 6 , 19);
    cout<<index<<endl;
}