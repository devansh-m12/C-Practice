# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i = 0 ; i<=n;i++){
        int nextnum = a+ b;
        cout<<nextnum<<endl;
         a= b;
         b = nextnum;
    }
}