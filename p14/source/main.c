#include<stdio.h>
#include<stdlib.h>
#define STUDENT 3
#define EXAMS 4
int minimum(const int grade[][EXAMS], int puplis, int tests);
int maximum(const int grade[][EXAMS], int puplis, int tests);
double average(const int setofgrades[], int test);
void printarray(const int grade[][EXAMS], int puplis, int test);
int main(void)
{
	int student;
	const int studentgrades[STUDENT][EXAMS]=
	{ {77,68,86,73},
	  {96,87,89,78},
	  {70,90,86,81}
	};
	printf("the array is :\n");
	printarray(studentgrades,STUDENT,EXAMS);
	printf("\n\nlowest grade: %d\nhighest grade: %d\n", 
		minimum(studentgrades, STUDENT, EXAMS),
		maximum(studentgrades, STUDENT, EXAMS));
	for (student = 0; student < STUDENT; student++)
	{
		printf("the average grade for student%d is %.2f\n",
			student, average(studentgrades[student], EXAMS));
	}
	system("pause");
	return 0;
}
int minimum(const int grade[][EXAMS], int puplis, int test)
{
	int lowgrade = 100;
	for (int i = 0; i < puplis; i++)
	{
		for (int j = 0; j < test; j++)
		{
			if (lowgrade > grade[i][j])
			{
				lowgrade = grade[i][j];
			}
		}
	}
	return lowgrade;
}
int maximum(const int grade[][EXAMS], int puplis, int test)
{
	int highgrade = 0;
	for (int i = 0; i < puplis; i++)
	{
		for (int j = 0; j < test; j++)
		{
			if (highgrade < grade[i][j])
			{
				highgrade = grade[i][j];
			}
		}
	}
	return highgrade;
}
double average(const int setofgrade[], int test)
{
	int total = 0;
	for (int i = 0; i < test; i++)
	{
		total += setofgrade[i];
	}
	return (double)total / test;

}
void printarray(const int grade[][EXAMS], int puplis, int test)
{
	printf("                 [0]  [1]  [2]  [3]");
	for (int i = 0; i < puplis; i++)
	{
		printf("\nstudentgrades[%d] ", i);
		for (int j = 0; j < test; j++)
		{
			printf("%-5d", grade[i][j]);
		}
	}

}
