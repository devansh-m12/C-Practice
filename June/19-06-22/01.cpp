#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        while(i<n){
            if(s[i]==s[i+1]){
                s.erase(i , 2);
                n = n - 2;
                cout<<"i before "<<i<<endl;
                if(i>0){
                    i--;
                }
                cout<<"i after "<<i<<endl;
                cout<<"n "<<n<<endl;
                cout<<s<<endl;
            }
            else{
                i++;
            }
        }
        cout<<s<<endl;
    }

int main(){
   string s = "abbaca";
   removeDuplicates(s);
}