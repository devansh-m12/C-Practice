 #include <iostream>
 using namespace std;

 int reversePairs(int nums[] , int n) {
        int ans = 0 ;
        for(int i = 0;i<n;i++){
            
            for(int j = i+1; j<n;j++){
                
                 int x = nums[j];
                 int y = nums[i];
                  x = x + x;
                  if(y > x){
                    ans++ ;
                  }
            }
        }
        return ans;
    }

    int main(){
        int arr[5] = {1,3,2,3,1};
        int x = reversePairs(arr , 5);
        cout<<x;
    }