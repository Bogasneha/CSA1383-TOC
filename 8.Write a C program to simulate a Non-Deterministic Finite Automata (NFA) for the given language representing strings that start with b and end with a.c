//  Write a C program to simulate a Non-Deterministic Finite Automata (NFA) for the
// given language representing strings that start with b and end with a

#include<stdio.h>
#include<string.h>

int main(){

    char input[100];

    while(1){
        printf("Enter an Input String over E = {a,b} : ");
        scanf("%s", &input );

        int l = strlen(input);
        int invalid = 0;

        for(int i = 0;i<l;i++){
            if(input[i] == 'a' || input[i] == 'b')
                continue;
            else{
                invalid = 1;
                printf("String Invalid. Enter a String over E = {a,b} .\n\n");
                break;
            }
        }

        if(input[0] == 'b' && input[l-1] == 'a' && invalid == 0)
            printf("String Accepted. HURRAYYY !\n\n");
        else if(input[0] != 'b' || input[l-1] != 'a' && invalid == 0)
            printf("String Rejected. YIKES ! \n\n");
    
    }


    return 0;
}
