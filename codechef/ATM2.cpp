#include<stdio.h>
int count_three( int );
int factorial(int n) ;

int factorial(int n){
  int fact = 1;
  for(int i=1 ; i<= n; i++){
      fact = fact* i;
  }
  return fact;
}

int main()
{
    int num;   
    printf( "Input a number: " );
    scanf("%d", &num); 
    int x = factorial(num);   
    printf("The number of threes in the said number is %d\n", count_three(x) );
    return 0;
}

int count_three(int num) 
{
    int ctr = 0;
    int remainder;
    
    while(num > 0) {
        remainder = num % 10;
        num /= 10;
        
        if(remainder == 3)
            ctr++;
    }
    
    return ctr;
}
