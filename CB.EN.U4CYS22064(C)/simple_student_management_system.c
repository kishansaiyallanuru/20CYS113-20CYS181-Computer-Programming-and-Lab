#include<stdio.h>
#include<string.h>
#define MAX_STUDENTS 3
enum score{A=6,B=5,C=4,D=3,E=3,F=1};
struct Student{
        char name[40];
        int age;
        enum score studentscore;
};
void addStudent(struct Student student[],int f){
        int option,i=0;
       
        scanf("%s",student[f].name);
        scanf("%d",&student[f].age);
        scanf("%s",&student[f].studentscore);
        printf("Student added successfully.\n");
       
        };
 void findHighestScoringStudent(struct Student student[MAX_STUDENTS])
                {
                        }

                
int main(){
     struct Student student[MAX_STUDENTS];

        int i,option,f=0,run=0,n=0;

do{
 scanf("%d",&option);
        switch(option){
                case 1:
                       if(f<=2){ run=1+run;
                        addStudent(student,f);
                         
                        f=f+1;}
                        else if(f==3){printf("Maximum number of students reached.\n");}
                        
                       
                break;
                case 2:
               
                if (run==0){printf("No students.\n");}
                else {
                printf("List of students:\n");
                for(i=0;i<f;i++){
                printf("Student %d\n",i+1);
                printf("Name: %s\n",student[i].name);
                printf("Age: %d\n",student[i].age);
                printf("Score: %c\n",student[i].studentscore);
                printf("\r\n");
                 
        }       }

                break;
  case 3:printf("Highest-scoring student:\n");
            printf("Name: %s\n",student[0].name);
            printf("Age: %d\n",student[0].age);
            printf("Score: %c\n",student[0].studentscore);
            printf("\r\n");
            break;
           
 case 4:
    printf("Exiting the program. Thank you for using our system!");
    return 0;
    break;
    default:
    printf("Invalid Input");
    return 0;

        }}while(n==0);

return 0;}
