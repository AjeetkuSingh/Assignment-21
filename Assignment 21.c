//Assignment 21 sol 1//
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;

int main()
{
    //number of employees
    int n=2;

    //array to store structure values of all employees
    Employee employees[n];

    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%d \n",employees[i].id);

        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("\n");
    }

    return 0;
}
*/

//Sol 2//
/*
#include <stdio.h>
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};

int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
*/

//Sol 3//
/*
#include <stdio.h>
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};

int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
*/

//Sol 4//
/*
#include<stdio.h>
struct employee
{
     int eno;
     char ename[20];
     int salary;
}emp[10];
int main()
{
     int i,high,n;
     printf("/*How many employee info\nyou want to accept : ");
     printf("Enter Limit: ");
     scanf("%d",&n);
     printf("-----------------------------\n");
     printf("Enter details for %d employees:",n);
     printf("\n-----------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("Employee Number: ");
          scanf("%d",&emp[i].eno);
          printf("Name           : ");
          scanf("%s",emp[i].ename);
          printf("Salary         : ");
          scanf("\n %d",&emp[i].salary);
          printf("-----------------------------\n");
     }
     high=emp[0].salary;
     for(i=0;i<n;i++)
     {
          if(emp[i].salary>high)
          high=emp[i].salary;
     }
     printf("Highest salary employee details:");
     printf("\n-----------------------------\n");
     printf("EMPNO    NAME  SALARY\n");
     for(i=0;i<n;i++)
     {
          if(emp[i].salary==high)
          printf("\n %d\t%s\t%d",emp[i].eno,emp[i].ename,emp[i].salary);
     }
     return 0;
}
*/

//Sol 5//
/*
#include<stdio.h>
int main()
{
	struct employee
	{
		int salary,id;
		char name[100];
	}s[100],s1[100];
	int n,i,j,index=0;
	printf("Enter number total no. of Employee=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Employee[%d]-id=\n",i);
		scanf("%d",&s[i].id);

		printf("Employee[%d]-name=\n",i);
		scanf("%s",s[i].name);

		printf("Employee[%d]-salary=\n",i);
		scanf("%d",&s[i].salary);
	}

	for(i=0;i<=n;i++)
	{
		s1[i]=s[i];

	}

	printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",s[i].id,s[i].name,s[i].salary);
	}

	printf("printing another structure\n");
	printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",s1[i].id,s1[i].name,s1[i].salary);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(s[j].salary<s[j+1].salary)
			{
				s[j].salary=s[j].salary ^ s[j+1].salary;
				s[j+1].salary=s[j].salary ^ s[j+1].salary;
				s[j].salary=s[j].salary ^ s[j+1].salary;
			}
		}
	}
	printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",s[i].id,s[i].name,s[i].salary);
	}
	printf("Sorted By Salary is=\n\n");

	printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i].salary==s1[j].salary)
			index=j;
		}
		printf("%d\t%s\t%d\n",s1[index].id,s1[index].name,s1[index].salary);

	}
	return 0;
}
*/

//Sol 6//
/*
#include<stdio.h>
#include<string.h>
main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter number of names :\n");
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
}
*/

//Sol 7//
/*
#include <stdio.h>
struct TIME {
   int seconds;
   int minutes;
   int hours;
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

int main() {
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours,
         &startTime.minutes,
         &startTime.seconds);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,
         &stopTime.minutes,
         &stopTime.seconds);

   // Difference between start and stop time
   differenceBetweenTimePeriod(startTime, stopTime, &diff);
   printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
          startTime.minutes,
          startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minutes,
          stopTime.seconds);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minutes,
          diff.seconds);
   return 0;
}

// Computes difference between time periods
void differenceBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff) {
   while (stop.seconds > start.seconds) {
      --start.minutes;
      start.seconds += 60;
   }
   diff->seconds = start.seconds - stop.seconds;
   while (stop.minutes > start.minutes) {
      --start.hours;
      start.minutes += 60;
   }
   diff->minutes = start.minutes - stop.minutes;
   diff->hours = start.hours - stop.hours;
}
*/

//Sol 8//
/*
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
*/

//Sol 10//
#include <stdio.h>

//defining structure
struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

//main function
int main() {

    struct Marks marks[5];

    //Getting user input for info of the 5 students
    for(int i=0; i<4; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &marks[i].phy_marks);
    }

    // Calculating and printing percentage for each student
	for(int i=0; i<4; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}
