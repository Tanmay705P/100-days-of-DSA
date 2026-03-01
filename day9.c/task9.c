
#include <stdio.h>
#include <string.h>

int main() {
    char code[100];
    
    // Input the code name
    printf("Enter the code name: ");
    scanf("%s", code);

    int length = strlen(code);

    printf("Mirror format: ");
    
    // Print characters in reverse order
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", code[i]);
    }

    return 0;
}
