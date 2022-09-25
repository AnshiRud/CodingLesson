//take two strings from the user (ex: saptarshi paul) and then combine them and print it out


/* int main() {
int i;
char Name[2];

for (i=0; i<2; i++) {
    printf ("Enter first name and then last name: ");
    scanf("%s", &st[i].Name);
}

printf("Full Name: \n");

    for (i=0; i<2; i++) {

        printf("%s ", st[i].Name);

    }
}
*/


#include <stdio.h>


int main() {
    char Fname[10];
    char Lname[10];
    char fullname[11];
    int i, j;

    printf("Enter First Name ");
    scanf("%s", Fname);
    printf("The first name is: %s \n", Fname);

    printf("Enter Last Name ");
    scanf("%s", Lname);
    printf("The last name is: %s \n", Lname);
    
    for(i=0 ; i<5 ; i++)
    {
        fullname[i]=Fname[i];
    } 

    fullname[5]= ' ';

    for(i=0 ; i<5 ; i++)
    {
        fullname[i+6]=Lname[i];
    }
    printf("The full name is: %s \n", fullname);
}

