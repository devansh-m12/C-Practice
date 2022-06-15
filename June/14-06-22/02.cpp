#include<iostream> 
using namespace std;

int getPivot(int arr[] , int n) {

    int s = 0;
    int e = n -1 ;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[0]<=arr[mid])
        {
            s = mid ;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return s + 1;
}



int main() {
    int arr[19] = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    int n = 19 ;
    cout << "Pivot is " << getPivot(arr, n) << endl;
}