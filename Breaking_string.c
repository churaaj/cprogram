#include<stdio.h>

int main() {
    char str[] = "my_name_is_edcast_future_skills";
    int i = 0;
    int counter = 0;
    
    //GETTING A STRING INPUT FROM USER
    char input[100];
    scanf("%[^\n]%*c",input);
    printf("%s\n",input);
    
    
    for(i=0;str[i]!='\0';i++){
        int next = i + 1;
        if(str[next] =='\0')
        {
            printf("%c",str[i]);
            printf("\"");
            printf(".");
            break;
        }
        
        if (counter == 0)
        {
            printf("\"");
            counter++;
        }
        
        if(counter >0 && str[i]!= '_'){
            printf("%c",str[i]);
        }
        
        if(str[i] == '_'){
            printf("\"");
            printf(",");
            counter = 0;
        }
    }
}
