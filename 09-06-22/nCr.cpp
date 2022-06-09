#include <iostream>
using namespace std ;

int factorial(int n){
  int fact = 1;
  for(int i=1 ; i<= n; i++){
      fact = fact* i;
  }
  return fact;
}

int nCr(int n , int r ){
    cin>>n>>r;
    int num = factorial(n);
    int dem = factorial(r)* factorial(n-r);
    int ans = num/dem ; 
    return ans; 
}

int main(){
   int a , b ;
   int ans = nCr(a,b);
   cout<<"nCr is "<<ans<<endl;
}