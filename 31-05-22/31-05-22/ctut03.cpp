#include <iostream>
using namespace std;

int main() {
  int x;
  cin>>x;
  
   if(x > 20){
       cout<<"OK"<<endl;
       x = 19;
   }
   else if ( x == 24){
       cout<<"hmm"<<endl;
   }
   else{
       cout<<"nothing"<<endl;
   }
   cout<<x<<endl;
  return 0;
}