int a = 0 ;
    int c[size];
    for(int i = 0 ; i<size ; i++){
        if(num[i] == 0){
            c[a] = 0;
            a++;
        }
    }
    for(int i = 0 ; i<size ; i++){
        if(num[i] == 1){
            c[a] = 1;
            a++;
        }
    }
    for(int i = 0 ; i<size ; i++){
        if(num[i] == 2){
            c[a] = 2;
            a++;
        }
    }

    
 for(int i = 0; i<size; i++){
        cout<<c[i]<<" ";
    }
    
}