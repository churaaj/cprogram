#include<stdio.h>

int main() {
    char str[100];
    scanf("%s",str);
    int i,j;
    int count = 1;
    int flag = 0;
    for(i=0;str[i]!='\0';i++){
        
        for(j=0;str[j]!='\0';j++){
            
            if(str[i] == str[j] && i<j){
                count++;
            }
            
            if (str[i] == str[j] && i > j){
                flag = 1;
                break;
            }
        
        }
         if(flag != 1){
                printf("%c %d\n",str[i], count);
            }    
            flag = 0;
            count = 1;
    }
}
