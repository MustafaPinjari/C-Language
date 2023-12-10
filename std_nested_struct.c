#include<stdio.h>

{
	struct student
		 {
		  int roll;
		  char name[25];
		 };
	 struct year
		{
		 int c,os;

		 };
	 void main()

	 {
		 struct year m1,m2;
		 struct student s1,s1;
		 m1.c=30;
		 m1.os=40;
		 m1.s1.roll=220;
		 m1.s1.name=mustafa;
		 m1.s2.roll=70;
		 m1.s2.name=rahul;

		 printf("\n STD DETAIL'S");

		 printf("\n  NAME OF STUDENT 1 : %s \n ROLL NO OF STUDENT 1 : %d \n MARKS OF OPERATING SYSTEM : %d\n MARKS OF C LANGUAGE : %d",m1.s1.name,m1.s1.roll,m1.os,m1.c);

		 printf("\n  NAME OF STUDENT 2 : %s \n ROLL NO OF STUDENT 2 : %d \n MARKS OF OPERATING SYSTEM : %d\n MARKS OF C LANGUAGE : %d",m1.s2.name,m1.s2.roll,m2.os,m2.c);
     }
}