//There are five classes with different number of students in them.five arrays containing marks of students of each class.
//write a function to recieve an address of an array of pointers to access marks of all the students.the job of function is to 
//find the hoghest marks among all the classes.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int highestMarks(int **p,int no_of_classes,int num_of_students[])
{
    int max,i,j;
    max=p[0][0];
    for(i=0;i<no_of_classes;i++)
    {
        for(j=0;j<num_of_students[i];j++)
            if(max<p[i][j])
                max=p[i][j];
    }
    return max;
}
int main() {
    // Number of classes
    int no_of_classes = 3;

    // Number of students in each class
    int num_of_students[] = {3, 4, 2};

    // Allocate memory for the 2D array
    int *marks[no_of_classes];
    for (int i = 0; i < no_of_classes; i++) {
        marks[i] = (int *)malloc(num_of_students[i] * sizeof(int));
    }

    // Initialize the marks for each class
    marks[0][0] = 85; marks[0][1] = 90; marks[0][2] = 78;
    marks[1][0] = 88; marks[1][1] = 92; marks[1][2] = 79; marks[1][3] = 95;
    marks[2][0] = 91; marks[2][1] = 87;

    // Call the highestMarks function
    int highest = highestMarks(marks, no_of_classes, num_of_students);

    // Print the highest mark
    printf("Highest mark is: %d\n", highest);

    // Free allocated memory
    for (int i = 0; i < no_of_classes; i++) {
        free(marks[i]);
    }

    return 0;
} 