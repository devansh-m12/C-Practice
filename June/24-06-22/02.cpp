#include <iostream>
using namespace std;

int maxi(int arr[],int n){
    int count[1000]={0};
    for(int i = 0;i<n;i++){
        count[arr[i]]++;
    }
    
    int max = count[0];
    for(int j = 0;j<1000;j++){
        if(count[j]>max){
            max = count[j];
        }
    }
    return max;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[1000] = {0};
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        
        int x = maxi(arr,n);
        cout<<n-x<<endl;
        
    }
	return 0;
}
