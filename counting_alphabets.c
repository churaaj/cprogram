#include<stdio.h>

int main() {
    char str[100];
    scanf("%s",str);
    
    int count[25] = {0};
    int i;
    
    for(i = 0; i <= 25 ;i++)
    {
        int c = str[i] - 'a';
        count[c]++;
    }
    
    for(i =0;i<=25;i++){
        if(count[i] > 0){
            printf("%c --> %d\n",i+'a', count[i]);
        }
    }
}
