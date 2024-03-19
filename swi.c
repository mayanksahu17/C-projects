
#include <stdio.h>
int main()
{    
    int option,ch1,ch2,ch3;
     printf("-----------------------WELCOME TO OUR SCHOOL----------------------- ");
         printf("\nYou are searching for a department in a university and youâ€™re asked to select a school from a choice of three schools namely: \n1. School of Computer Science\n2.School of Business\n3. School of Engineering");

      printf("\nenter your option: ");
     scanf("%d",&option);
      switch(option){
          
        case 1:    printf("School of Computer Science offers: \na. Department of Informatics\nb.Department of Machine Learning");
          printf("\nenter your option: ");

          scanf("%d",&ch1);
          switch(ch1){
          
        case 1:  printf(" your seat registered for Informatics");    break;  
        case 2:   printf(" your seat registered for Machine Learning");     break;  
        default:
        printf("\nyou entered wrong option");  break;  
          } break;
        case 2:     printf("School of Business offers: \na.Department of Commerce\nb.Department of purchasing");
          printf("\nenter your option: ");
          scanf("%d",&ch2);
          switch(ch2){
          
        case 1:  printf(" your seat registered for Commerce");     break;  
        case 2:   printf(" your seat registered for purchasing");     break;  
        default:
        printf("you entered wrong option");
          break;  } break;
        case 3:  printf("School of Engineering offers: \na.Department of Mechanical Engineering\nb.Department of Mechatronics Engineering");
          printf("\nenter your option: ");
          scanf("%d",&ch3);
          switch(ch3){
          
        case 1:  printf(" your seat registered for Mechanical Engineering");        break;  
        case 2:   printf(" your seat registered for Mechatronics Engineering");     break;  
        default:
        printf("you entered wrong option");
        break;  }  break;
      
        default:
        printf("\nyou entered wrong option");
      }

    return 0;
}