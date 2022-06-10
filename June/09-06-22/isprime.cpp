#include <iostream>
using namespace std ;

int isprime(int n ){
    int b = 1 ;
    for (int i = 2 ; i<n ; i++){
    if (n%i == 0){
        b = 0;
    }
    }
    return b ;
}

int main(){
    int a;
    cin >>a;
    int ans = isprime(a);

    if(ans == 0){
        cout<<"non - prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    
}