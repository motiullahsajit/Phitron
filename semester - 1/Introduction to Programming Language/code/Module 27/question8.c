#include <stdio.h>

void printTypedString(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        printf("%c", str[i]); 
        i++;
        printf("%c", str[i]); 
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char str[100];
    scanf("%s", str);

    printTypedString(str);
    return 0;
}
