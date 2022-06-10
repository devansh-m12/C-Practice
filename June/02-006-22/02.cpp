#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n){
            char x = 'A'+i-1;
            cout<<x;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}