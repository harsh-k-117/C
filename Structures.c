#include<stdio.h>
#include<conio.h>

struct student
{
        int rollno;
        char name[10];
}emp[5];

void main()
{
    int i;
    struct student st[5];
    printf("Enter the details of 5 Students:\n");
    for(i=0; i<5; i++)
    {
        printf("\n Enter the Roll Number: ");
        scanf("%d",&st[i].rollno);
        printf(" Enter the Name: ");
        scanf("%s",&st[i].name);
    }

    printf("\n----------------------------\nStudent Information List\n");

    for(i=0; i<5; i++)
    {
        printf(" Roll Number: %d, Name: %s\n",st[i].rollno, st[i].name);
    }

}
