int n,k;
    cin>>n>>k;
    if(n%k == 0){
     int mid = n/2;
     int i = 0;
     char c = 'a' ;
     if(n == 1 ){
        cout<<c;
    }
     for(int i = 1;i<=mid;i++){
        cout<<c;
        c++;
     }
     for(int j = mid + 1 ; j<=n;j++){
        c--;
        cout<<c;
     }
    }
   else{
    cout<<-1;
   }