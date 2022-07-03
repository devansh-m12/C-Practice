#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int arr[100000];
        int sum = 0;

        for(int i = 0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }

        int div = sum/(n+1);

        for(int i = 0;i<n;i++){
            cout<<arr[i]/div<<endl;
        }
    }
}