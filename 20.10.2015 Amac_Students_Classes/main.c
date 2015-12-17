/** @file
BLM2541 spring2015 assignment 1.
A program that fakes USIS course selection code.

@author
Name:             Seyyid Ahmed Doðan
Student no:       14011038
E-Mail:           seyyidahmed.dogann@gmail.com

Date:             20/10/2015
Compiler used:    GCC
IDE:              CodeBlocks
Operating System: Windows 10  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> // for sleep

typedef enum { false, true } bool; //to use bool[] for determine if course chosen?

int main()
{

    int i,j;

    //INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT

    printf(" ");
    //Get number of students
    int studentSize;
    printf("Number of students: ");
    scanf("%d", &studentSize);
    //////////////////////////////////////

    //Get all student numbers
    int* studentNumbers;
    studentNumbers = malloc(studentSize * sizeof(int));
    for (i = 0;i < studentSize;i++){
        printf("Give one student number: ");
        scanf("%d",(studentNumbers+i));
    }
    //////////////////////////////////////

    printf(" ");
    //Get number of courses
    int courseSize;
    printf("Number of courses: ");
    scanf("%d", &courseSize);

    //Get name of courses
    char** courses;
    char* tmpStr;
    tmpStr = malloc(50*sizeof(char));
    courses = malloc(courseSize*sizeof(char*));
    for(i=0;i<courseSize;i++)
    {
        printf("%dth course name: ",i);
        scanf(" %[^\n]s",tmpStr);
        courses[i] = malloc((strlen(tmpStr)+1)*sizeof(char));
        strcpy(courses[i],tmpStr);
    }
    free(tmpStr);
    //////////////////////////////////////

    //TODO delete this //char courseNames[][] = {"C and Beyond (with master AMAC)","Test Course","Maths 101","Science","Maths 201"};

    printf(" ");
    //get enrollCount
    int enrollCount;

    printf("How much courses every student has to enroll(get): ");
    scanf("%d",&enrollCount);
    while(enrollCount>courseSize)
    {
        printf("Error, not enough course to choose from, please decrease enroll size: ");
        scanf("%d",&enrollCount);
    }
    //////////////////////////////////////

    printf(" ");
    //get x how much second wait to show next enroll;
    int milisecondsToWait;
    printf("How much seconds do you want to wait for each enroll: ");
    scanf("%d",&i);
    milisecondsToWait = i*1000;
    //////////////////////////////////////



    //INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT  INPUT



    //CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE

    //calculate List of (int,int) = (student number, course number) [student * k]

    //Pick a random student
    //Every student gets (enrollCount) number of courses
    int* CourseStudent;
    CourseStudent = malloc(2*sizeof(int));
    int CourseStudentSize = 0;
    bool* isChosen;
    isChosen = malloc(courseSize*sizeof(bool));
    for(i = 0; i<studentSize;i++)
    {
        //clear isChosen
        for(j=0;j<courseSize;j++)
        {
            isChosen[j] = false;
        }
        //start enroll for student i
        for(j=0;j<enrollCount;j++)
        {
            int randomCourse;
            CourseStudentSize++;
            CourseStudent = realloc(CourseStudent,2*CourseStudentSize*sizeof(int));
            *(CourseStudent+(CourseStudentSize*2)-2)= i;
            //Check if student has the same course?

            randomCourse = rand()%courseSize;
            while(isChosen[randomCourse]==true)
            {
                randomCourse = rand()%courseSize;
            }
            *(CourseStudent+(CourseStudentSize*2)-1) = randomCourse;
            isChosen[randomCourse] = true;
        }

        //show student i with course list for x second
        printf("\n Enrolled Student %d",studentNumbers[i]);
        printf("\n\n");
        for(j=0;j<CourseStudentSize;j++)
        {
            if(*(CourseStudent+(j*2))== i){
                //student found on (student,course), print course
                printf("  %s \n",courses[*(CourseStudent+(j*2)+1)]);
            }
        }


        Sleep(milisecondsToWait);

    }

    //CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE CALCULATE


    //OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT

    system("cls");

    //show students with course list
    printf("----------------------------------------- \n");
    printf("-------------COURSE  LIST---------------- \n");
    printf("----------------------------------------- \n");

    for(i = 0; i<courseSize;i++)
    {
        printf("- %s \n",courses[i]);
        printf("\n");
        //for all Student class find student == Students[i] and print
        for(j=0;j<CourseStudentSize;j++)
        {
            if(*(CourseStudent+(j*2)+1)== i)
            {
                //course found on (student,course), print course
                printf(" %d \n",studentNumbers[*(CourseStudent+(j*2))]);
            }
        }
        printf("\n");
    }




    //show courses with student list
    printf("----------------------------------------- \n");
    printf("-------------STUDENT LIST---------------- \n");
    printf("----------------------------------------- \n");

    for(i = 0; i<studentSize;i++)
    {
        printf("-Student %d \n",studentNumbers[i]);
        printf("\n");
        //for all Student class find student == Students[i] and print
        for(j=0;j<CourseStudentSize;j++)
        {
            if(*(CourseStudent+(j*2))== i){
                //student found on (student,course), print course
                printf(" %s \n",courses[*(CourseStudent+(j*2)+1)]);
            }
        }
        printf("\n");
    }

    //OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT OUTPUT

    printf("\nProgram Ended.\n");
    system("PAUSE");
    return 0;
}
