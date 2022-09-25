#include <stdio.h>



struct Teacher {

    char name[10];

    char class[10];

    char gender[1];

    int hours;

    

};



int main() {

    struct Teacher st[10];

    int i;

    for (i=0; i<2; i++) {

        printf("Enter Teacher name: ");

        scanf("%s", &st[i].name);

        

        printf("Enter Teacher class: ");

        scanf("%s", &st[i].class);

        

        printf("Enter Teacher working hours: ");

        scanf("%d", &st[i].hours);

        

        printf("Enter Teacher gender: ");

        scanf("%s", &st[i].gender);

}



printf("Details of the Teacher\n");

    for (i=0; i<2; i++) {

        printf("Teacher : %s\n", st[i].name);

        printf("Roll No : %s\n", st[i].class);

        printf("Subject : %d\d", st[i].hours);

        printf("marks : %s\n", st[i].gender);

    }

}