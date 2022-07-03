#include<iostream>
using namespace std;

int rowsum(int arr[][4] , int n , int m){
    int row  = 0;
    int osum = 0;
    for(int i = 0; i<3;i++){
        int sum = 0;
        for(int j = 0;j<4;j++){
           sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
        if(sum>osum){
            osum = sum;
            row = i;
        }
    }
    cout<<endl;
    cout<<"largest row "<<row<<" and value is "<<osum<<endl;
}

int main(){
    int arr[3][4]={{1,2,3,4},{1,3,6,9},{3,6,8,0}};
    

    // for(int i = 0; i<3;i++){
    //     for(int j = 0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }


    for(int i = 0; i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    rowsum(arr , 3 ,4);
}