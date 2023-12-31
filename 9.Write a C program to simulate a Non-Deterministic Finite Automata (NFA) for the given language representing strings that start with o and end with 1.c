// Write a C program to simulate a Non-Deterministic Finite Automata (NFA) for the
// given language representing strings that start with o and end with 1

#include<stdio.h>
#include<string.h>

int main(){

    char input[100];

    while(1){
        printf("Enter an Input String over E = {0,1} : ");
        scanf("%s", &input );

        int l = strlen(input);
        int invalid = 0;
        int i;

        for(i = 0;i<l;i++){
            if(input[i] == '0' || input[i] == '1')
                continue;
            else{
                invalid = 1;
                printf("String Invalid. Enter a String over E = {0,1} .\n\n");
                break;
            }
        }

        if(input[0] == '0' && input[l-1] == '1' && invalid == 0)
            printf("String Accepted. HURRAYYY !\n\n");
        else if(input[0] != '0' || input[l-1] != '1' && invalid == 0)
            printf("String Rejected. YIKES ! \n\n");
    
    }


    return 0;
}
