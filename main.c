/* first assignment: using tools of dynamic array ,linked list and git
part1 create structure & main function (student 1)
part2 create linked list (student 2)
part3 create dynamic array (student 3)*/

#include <stdio.h>
#include <stdlib.h>

void dynamic_array (int);
void linked_list (int);

//create a structure representing student information
    struct student_data
{
   char student_name[70];
   int student_ID;
   int student_birth_day;
   int student_birth_month;
   int student_birth_year;
   int student_lastyear_score;
};

int main()
{
    int n,type;

     //welcome text
    printf("welcome to our project with DR.omar nasr\n");

    // what is the type of data structure to be used
    first:
    printf("what is the type of data structure that will be used\n");
    printf("press 1 to create dynamic array\n");
    printf("press 2 to use linked list\n");
    scanf("%d", &type);

    //use dynamic array
    if(type==1)
        {
        dynamic_array (n);
        }

    //use linked list
    else if (type==2)
    {
    printf("what is the number of students you need?\n");
    scanf("%d", &n);
    linked_list (n);
    }

     // invalid input
    else{
        printf("invalid input!\n");
        goto first;
        }
    return 0;
}
