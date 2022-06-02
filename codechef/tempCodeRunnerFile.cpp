
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    WHILE (T--){
   int A , B , A1 , B1 , A2, B2 ;
   cin>>A>>B>>A1>>B1>>A2>>B2;

   IF ((A1 = A || B1 = B) && ( A1 = B || B1 = A)){
       cout<<"1"<<endl;
   }
   ELSE IF ((A2 = A || B2 = B) && ( A2 = B || B2 = A)){
       COUT<<"2"<<ENDL;
   }
   ELSE {
       COUT<<"0"<<ENDL;
   }
    }

  return 0;
}