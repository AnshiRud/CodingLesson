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
#include <string.h>

int main() {
    char Fname[100];
    char Lname[100];
    char fullname[100];
    int i, j;
    int length;
    int lastlength;

    printf("Enter First Name ");
    scanf("%s", Fname);
    length = strlen(Fname);
    printf("The first name is: %s \n", Fname);
    //printf("The length of the string is: %d\n", strlen(Fname));
    printf("Enter Last Name ");
    scanf("%s", Lname);
    lastlength = strlen(Lname);
    printf("The last name is: %s \n", Lname);
    
    for(i=0 ; i<length ; i++)
    {
        fullname[i]=Fname[i];
    } 

    fullname[length]= ' ';

    for(i=0 ; i<lastlength ; i++)
    {
        fullname[i+length+1]=Lname[i];
    }
    printf("The full name is: %s \n", fullname);
}

