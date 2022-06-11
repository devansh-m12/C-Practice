#include<iostream>
#include<math.h>
using namespace std;

int binarys (int num[], int size, int x){
    int start = 0 ;
    int end = size ;
    int mid;
    while(num[mid] != x){
        if(x>num[mid]){
              start = mid + 1;
        }
        else{
               end = mid - 1;
        }
      mid = (start + end)/2;
    }
    // cout<<mid<<endl;
    return mid;
}


int main(){
    int num[5] = {1 , 2 , 3 , 4 , 5};
    int size = 5;
    int x = 1 ;
    int n =  binarys(num, size, x);
    cout<<n<<endl;
}
