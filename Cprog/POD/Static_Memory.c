#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, how are you today?";
    char *token;


     token = strtok(str, ",");
     printf(" Token = %s",token);

    
    while (token != NULL) {
         printf("Token: %s\n", token);
         token = strtok(NULL, " ,?");
    
    }

    return 0;
}
