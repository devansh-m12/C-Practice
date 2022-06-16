#include<iostream>
#include <string>
using namespace std;

int main(){
     int n,k;
    cin>>n>>k;
    if(n%k == 0 && n != k){
     int mid = n/2;
     int i = 0;
     char c = 'a' ;
     for(int i = 1;i<=mid;i++){
        cout<<c;
        c++;
     }
     for(int j = mid + 1 ; j<=n;j++){
        c--;
        cout<<c;
     }
    }
    if(n == 1 && k == 1 ){
        cout<<'a';
    }
   else{
    cout<<-1;
   }
    
}