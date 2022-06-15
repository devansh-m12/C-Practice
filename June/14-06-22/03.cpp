#include <iostream>
using namespace std;

int divisorGame(int n) {
        int ans = 0;
        int i = 1;
            while ( n>0 ){
                if(n%i == 0){
                    n = n - i;
                    ans ++;
                }
            }
        return ans;
    }


int main(){
    int a,b;
    a = 5;
    b = 8;
    b = a;
    cout<<a<<b<<endl;
}