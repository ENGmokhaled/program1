#include <stdio.h>
#include <stdlib.h>

int p;

struct student_data* arr_student_data;
void insert(int j)
{
    p++;
    for (int i = p-1; i >= j; i--)
      arr_student_data[i] = arr_student_data[i - 1];
    printf("\nEnter details of student %d\n\n", j);

        printf("Enter name: ");
        scanf("%s", arr_student_data[j].student_name);

        printf("Enter ID: ");
        scanf("%d", &arr_student_data[j].student_ID);

        printf("Enter birthday: ");
        scanf("%d", &arr_student_data[j].student_birth_day);
        printf("Enter birth month: ");
        scanf("%d", &arr_student_data[j].student_birth_month);
        printf("Enter birth year: ");
        scanf("%d", &arr_student_data[j].student_birth_year);
        printf("Enter last year score: ");
        scanf("%d", &arr_student_data[j].student_lastyear_score);
        for(int i = 0; i < p; i++ )
    {
        printf("%s\t%d\t%.2d\t%s\t%.2d\t%s\t%.4d\t%s\t%.d\n",
        arr_student_data[i].student_name, arr_student_data[i].student_ID, arr_student_data[i].student_birth_day,"     ", arr_student_data[i].student_birth_month,"     ", arr_student_data[i].student_birth_year, "     ",arr_student_data[i].student_lastyear_score);
    }

}
int main()
{}
