#include<stdio.h>
#include<conio.h>
#include<math.h>

void permutation()
    {
      int p,n,r,n1,l1,i,j;
            
            printf("ENTER 'N' VALUE : ");
                 scanf("%d",&n);
            
            printf("ENTER 'R' VALUE :");
                scanf("%d",&r);
            l1=n-r;
            
            for ( i = 1; i <= n; ++i)
             {
                n1 *= i;
             }
            for ( j = 1; j <= l1; ++j)
             {
                l1 *= j;
      
             }
            
            
            p=n1/l1;
            printf("PERMUTATION : %d",p);
          
}
void combination()
    {
      int p,n,r,r1,n1,l1,i,j,k;
            
            printf("ENTER 'N' VALUE : ");
                 scanf("%d",&n);
            
            printf("ENTER 'R' VALUE :");
                scanf("%d",&r);
            l1=n-r;
            
            for ( i = 1; i <= n; ++i)
             {
                n1 *= i;
             }
            for ( j = 1; j <= l1; ++j)
             {
                l1 *= j;
      
             }
            for ( k = 1; k <= l1; ++k)
             {
                r1 *= k;
      
             }
            
            
            p=n1/r1*l1;
            printf("COMBINATION : %d",p);
            
}

int main()
{
    int choice;
    
    printf("ENTER YOUR CHOICE :-\n 1)PERMUTATION \n 2)COMBINATION\n");
        scanf("%d",& choice);
        
        if(choice==1)
        {
        permutation();
        }
        else if(choice==2)
        {
        combination();
        }
        else
        {
            printf("YOU HAVE ENTER INVALID CHOICE!!!!");
        }
        return 0;
}