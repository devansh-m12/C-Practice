int bubblesort(int arr[] , int n , int m){
   int ans = 0;
   for(int j = 1;j<n;j++){
   int x = -1;
   for(int i = 0;i<n-j;i++){
    
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        ans ++;
        x = +1 ;
       }
    }
    if(x == -1){
        break;
    }
   }
  int sum = 0;
  for(int j = 0;j<m;j++){
    sum = sum+ arr[j];
  }
  return sum;
}

int main(int argc, char *a[])
{
	int T;
	cin>>T;
	while(T--){
		int arr[100000];
		int M,N;
		cin>>M;
		cin>>N;
		for(int i = 0;i<N;i++){
			cin>>arr[i]
		}
		cout<<bubblesort(arr,N-1,M)<<endl;

	}
}