#include<stdio.h>
void main()
{
    int month;  
    scanf("%d",&month); 
        printf("Enter the number of  month ");
                switch (month)
                {
                    case 1:
                        printf("Its January");               
                                 break;                      
                         case 2:
                              printf("Its February");  
                                    break;                                                
                            case 3:
                                 printf("Its March");  
                                        break;                                                 
                                case 4:
                                      printf("Its April");
                                           break; 
                                        case 5:
                                            printf("its may");
                                                    break;
                                                        case 6:
                                                            printf("its june");
                                                                break;
                                                                case 7:
                                                            printf("its july");
                                                        break;
                                                    case 8:
                                            printf("its august");
                                        break;
                                   case 9:
                                printf("its september");
                           break;
                    case 10:
               printf("its october");
            break;
                case 11:
                    printf("its november");
                        break;
                            case 12:
                            printf("its december");
                                break;
          }   
     return 0;                      
}