#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size()-1;
        int col = matrix[0].size()-1;
        int i = 0;
        
        while(i<=row){
            int s = 0;
            int e =col;
            int mid = s+(e-s)/2;
            while(s<e){
                if(matrix[i][mid]==target){
                    return mid;
                }
                else if(matrix[i][mid]>target){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
                mid = s+(e-s)/2;
            }
            i++;
        }
        return 0;
        
    }

int main(){
    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(mat,7);
}