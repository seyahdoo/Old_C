#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;

    //INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT

    printf(" ");
    //Get number of students
    int studentSize;
    printf("Number of students: ");
    scanf("%d", &studentSize);

    //Get all student numbers
    int* studentNumbers;
    studentNumbers = malloc(studentSize * sizeof(int));
    for (i = 0;i < studentSize;i++){
        printf("Give one student number: ");
        scanf("%d",(studentNumbers+i));
    }

    printf(" ");
    //Get number of courses
    int courseSize;
    printf("Number of courses: ");
    scanf("%d", &courseSize);

    //Get name of courses
    char** courses;
    courses = malloc(courseSize*sizeof(char*));
    for(i=0;i<courseSize;i++)
    {
        printf("%dth course name: ",i);
        scanf("%s",&courses[i]);
    }

    //char courseNames[][] = {"Maths 101","Science","Maths 201","C and Beyond","Test Course"};

    //how much course every student has to enroll (k)

    int enrollCount = 1;
        //every student gets x number of course?
        //or
        //every student gets k>=x number of course?


    //get x


    //INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT



    //CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE


    //start

    //calculate List of (int,int) = (student number, course number) [student * k]

    //Pick a random student
    //Every student gets (enrollCount) number of courses
    int* CourseStudent;
    CourseStudent = malloc(2*sizeof(int));
    int ramCounter = 0;
    for(i = 0; i<studentSize;i++)
    {
        for(j=0;j<enrollCount;j++)
        {
            ramCounter++;
            CourseStudent = realloc(CourseStudent,2*ramCounter*sizeof(int));
            *(CourseStudent+(ramCounter*2)-2)= i;
            *(CourseStudent+(ramCounter*2)-1) = rand()%courseSize;
        }
        //TODO show students with course list for x second

    }

    //CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE


    //OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT

    //TODO delete this
    printf("student:course \n");
    for(i=0;i<ramCounter;i++)
    {
        printf("%d:%s \n",studentNumbers[*(CourseStudent+((i*2)))] ,&courses[(*(CourseStudent+(i*2)+1))]);
    }
    ///////////////////////////////////


    system("cls");
    //show courses with student list
    printf("-----------------------------------------");
    printf("-------------STUDENT LIST----------------");
    printf("-----------------------------------------");

    for(i = 0; i<studentSize;i++)
    {
        printf("-Student %d",studentNumbers[i]);
        printf()

    }

    //show students with course list

    //OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT



    return 0;
}
