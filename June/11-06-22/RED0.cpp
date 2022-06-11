#include<iostream>
#include<math.h>
using namespace std;

int red(long long int x , long long  int y){
    int long long ans = 1;
    long long int z = 0;

    if((x>y)&&(x%y == 0)){
        long long int a = x/y;
        if(a%2 == 0){
          z = a;
        }
        else{
            return -1;
        }

    }
    else if ((x<y)&&(y%x)== 0){
        long long int a = y/x;
        if(a%2 == 0){
         z = a;
        }
        else{
            return -1;
        }
    }
    else{
        return -1;
    }

    for (int i= 0; i<31; i ++){
        int ans = pow(2 ,i);
        if (ans == z){
           z = i;
        }
     }
     return z + x;
}

// void power (int a){
//      for (int i= 0; i<31; i ++){
//         int ans = pow(2 ,i);
//         if (ans == a){
//            return i;
//         }
//      }
// }

int main(){
   long long int x , y;
    cin>>x>>y;
  int n = red(x,y);
  cout<<n<<endl;
}