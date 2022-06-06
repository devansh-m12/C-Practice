# include<iostream>
using namespace std;

int main(){
    int n ,x,y,z,a;
    cin>>n;

    switch (1)
    {
    case 1:
        x = n/100;
        cout<<"No. of 100 notes "<<x<<endl;
        n = n - x*100;
        // break;
    case 2:
        y = n/50;
        cout<<"No. of 50 notes "<<y<<endl;
        n = n - y*50;
    case 3:
        z = n/20;
        cout<<"No. of 20 notes "<<z<<endl;
        n = n - z*20;
    case 4:
        
        cout<<"No. of 1 notes "<<n<<endl;

    }
}