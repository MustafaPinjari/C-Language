#include<stdio.h>
#include<conio.h>

struct student
{
    int std_prn;
    char std_name[30];
    float std_percent;
};

    void main()
    
    {
        struct student s1,s2;
        int i,j;
        
            printf("\n ENTER PRN OF STUDENT  :");
            scanf("%d",&s1.std_prn);
            
            printf("\n ENTER NAME OF STUDENT  :");
            scanf("%s",&s1.std_name); 
            
            printf("\n ENTER PERCENTAGE OF STUDENT  :");
            scanf("%f",&s1.std_percent);
            
            printf("\nENTER PRN OF STUDENT  :");
            scanf("%d",&s2.std_prn);
            
            printf("\nENTER NAME OF STUDENT  :");
            scanf("%s",&s2.std_name); 
            
            printf("\nENTER PERCENTAGE OF STUDENT  :");
            scanf("%f",&s2.std_percent);   
            
            for(i=0;i<2;i++)
            {
                printf("\n \n");
                for(j=0;j<=39;j++)
                {
                   
                 printf("-X-",i,j);
                }
            
            }
            printf("\n\n \t \t \n \n DETAIL YOU ENTERED");
            printf("\t \t \n \n \t \tDETAILS OF FIRST STUDENT");
            printf("\n\n NAME :%s",s1.std_name);
            printf("\n\n PRN :%d",s1.std_prn);
            printf("\n\n PERCENTAGE :%f",s1.std_percent);
            printf("\t \t \n \n \t \tDETAILS OF SECOND STUDENTS");
            printf("\n \nNAME :%s",s2.std_name);
            printf("\n \nPRN :%d",s2.std_prn);
            printf("\n\nPERCENTAGE :%f",s2.std_percent);
    }