#include<stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    
    int arr[number];
    int i;
    
    // getting user numbers
    for(i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int final=0;
    
    for(i=0;i<number;i++){
        
        
        int digit,n;
        n = arr[i];
        digit = 0;
        
        // finding the digit of number
        while(n){
            digit++;
            n = n/10;
        }
        
        n = arr[i];
        int sum = 0;
        int rem;
    
        while(n){
            rem = n % 10;
            int power = 1;
            int j;
            for(j = 0; j < digit; j++){
                power = power * rem;
            }
            
            sum = sum + power;
            
            n = n / 10;
        }
    
        n = arr[i];
      
        if(n == sum)
        {
            final = final + 1;
           
        }
    }
    
    if(final == number){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
