#include <iostream>
using namespace std;

int main(){
    int a,b,w,x,y,z;
    
    cin>>x>>y;
    cin>>w>>z;

    a = x+w;
    b = y+z;

    while (b >= 60) {
        a = a + 1 ;
        b = b - 60;
    }

     while (a >= 24) {
        
        a = a - 24;
    }

    cout << setw(2) << setfill('0') <<a<<" "<<b<<endl;

}