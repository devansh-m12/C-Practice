#include <iostream>
using namespace std;

bool altadd(int a , int b){
   int  i = 1;
    for(int i = 1; a<b ; i++){
     if(i%2 == 0){
        a = a+2;
     }
     else{
        a = a+1;
     }
     i++ ;
    }
    
   if (a == b){
    return true ;
   }
   else{
    return false;
   }
}

int main(){
   int a , b;
   cin>>a>>b;

    altadd(a ,b)
   ? cout << "Yes"
   : cout << "No";
   return 0;
}