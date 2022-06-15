#include<iostream> 
using namespace std;

int getPivot(int arr[]) {

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarysearch(int arr[] , int key){
    int start = 0;
    int end = size-1;
    int mid = start +(end - start)/2; // for int_max limit

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
    }

    return -1;
    
}

int main() {
    int arr[7] = {2 , 2 , 3 , 3 , 4 , 4 , 1};
    cout << "Pivot is " << getPivot(arr, 7) << endl;
}