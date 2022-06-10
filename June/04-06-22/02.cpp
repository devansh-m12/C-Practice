#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,x,y , p , q ;
	cin>>a>>b>>x>>y;
	 p = max(a,b);
	 q = max(x,y);
	 if(p>q){
	     cout<<p<<endl;
	 }
	 else if(q>p){
	     cout<<q<<endl;
	 }
	 else{
	     cout<<"TIE"<<endl;
	 }
	
    }
}