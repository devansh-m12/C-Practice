#include <iostream>
using namespace std ;

int type(int a ){
    
    if(a%2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a;
    cin >>a;
    
    if(type(a) == 0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}