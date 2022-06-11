#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a , b;
    cin>>a;
    cin>>b;
    int k = 0;
    char x = 'z' ;
    
    for(int i = 0;i<n;i++){
      if(a[i] != b[i]){
        
           if(b[i] != x){
            b[i] = x;
            k++;
           }
      }
    }
    cout<<k<<b<<endl;
}