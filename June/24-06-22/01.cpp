#include <iostream>
using namespace std;

void maxi(int arr[],int n){
    int count[10]={0};

    for(int i = 0;i<n;i++){
        count[arr[i]]++;
    }
    
    
    for(int j = 0;j<10;j++){
        cout<<count[j]<<" ";
    }

    int max = count[0];
    for(int j = 0;j<10;j++){
        if(count[j]>max){
            max = count[j];
        }
    }
    cout<<max<<endl;
}

int main() {
	int arr[11]={1,2,2,2,2,2,5,6,8,1,20};
	maxi(arr,11);
}
