#include <stdio.h>

int main() {
    char firstname[10];
    char lastname[10];
    int i, j;
    /*for (i = 0; i<6; i++) {
        printf("Enter character");
        fflush(stdin);
        scanf("%c", name);
    }
    */
   // printf("The Entered Name is: %s ",name);

    printf("Enter Name");
    scanf("%s", name);
    printf("The Entered Name is: %c ", name[0]);

} 
