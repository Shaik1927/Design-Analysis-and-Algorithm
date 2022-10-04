#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int i;
    char string[] = "MALAYALAM";
    bool flag = true;

    for( i = 0; i < strlen(string); i++){
        string[i] = tolower(string[i]);
    }

    for( i = 0; i < strlen(string)/2; i++){
        if(string[i] != string[strlen(string)-i-1]){
            flag = false;
            break;
        }
    }

    if(flag)
        printf("Given string is palindrome");
    else
        printf("Given string is not a palindrome");

    return 0;
}
