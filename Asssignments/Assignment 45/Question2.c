//write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[20];
};
struct Student inputStudent()
{
    struct Student s;
    printf("Enter Student roll no and name");
    scanf("%d",&s.rollno);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void displayStudent(struct Student s)
{
    printf("\n%d  %s",s.rollno,s.name);
}
void inputNStudents(struct Student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        s[i]=inputStudent();
}
void displayNStudents(struct Student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        displayStudent(s[i]);
}


//write a program to store information of n students and display them using structure.
void inputNStudents(struct Student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        s[i]=inputStudent();
}
void displayNStudents(struct Student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        displayStudent(s[i]);
}
void f2()
{
    struct Student s[10];
    inputNStudents(s,10);
    displayNStudents(s,10);
    
}

//question4

struct Marks{
    int rollno;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
struct Marks inputMarks()
{
    struct Marks mark;
    printf("Enter marks data");
    scanf("%d",&mark.rollno);
    fflush(stdin);
    fgets(mark.name,20,stdin);
    mark.name[strlen(mark.name)-1]='\0';
    scanf("%d",&mark.chem_marks);
    scanf("%d",&mark.maths_marks);
    scanf("%d",&mark.phy_marks);
    return mark;
}
float percentage(struct Marks m)
{
    return (m.chem_marks+m.maths_marks+m.phy_marks)/3.0;
}
void f4()
{
    struct Marks m[5];
    int i;
    for(i=0;i<=4;i++)
        m[i]=inputMarks();
    for(i=0;i<=4;i++)
        printf("%d %s %f",m[i].rollno,m[i].name,percentage(m[i]));

}