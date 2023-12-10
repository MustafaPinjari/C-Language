#include<stdio.h>

        int main()
    {
        int n;
                printf("\n enter value of n :");
                scanf("%d",&n);
                    int arr[n];
                        printf("\n enter value of all elements of an array :");
                for(int i=0;i<n;i++)
                {
                    scanf("%d",&arr[i]);
                }
                    int diff=arr[0]-0;
                    for(int j=0;j<n;j++)
              -      {
                            if(arr[j]-j!=diff)
                            {
                                while(diff<arr[j]-j)
                                    {
                                        printf("%d \n",j=diff);
                                        diff++;
                                    }
                            }
                    }
                    return 0;
    }    