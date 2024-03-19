
#include <stdio.h>
void printmenu();
void f1();
void f3();
void f2();
int main()
{    
    int option;
    printmenu();
      printf("\nenter your option: ");
     scanf("%d",&option);
      switch(option){
          
        case 1:  f1();     break;  
        case 2:  f2();       break;  
        case 3:  f3(); break;  
      
        default:
        printf("\nyou entered wrong option");
      }

    return 0;
}
     void printmenu()
     {
         printf("-----------------------WELCOME TO OUR SHOWROOM----------------------- ");
         printf("\nYou are searching for a car in city and  \n we offers these car brands: \n1. BMW \n2.MERCIDIES\n3. FRAARI");

     }
      void f1(){
          int option;
          printf("BMW offers these model: \nBMW X1 (2020-present)
                      \n                    BMW X2 (2020-present)
                      \n                    BMW X3 (2020-present)
                      \n                    BMW X4 (2020-present)
                      \n                    BMW X5 (2020-present)
                      \n                    BMW X6 (2020-present)
                      \n                    BMW X7 (2020-present)
                      \n                    BMW i3 (2020-present)
                      \n                    BMW i4 (2021-present)
                      \n                    BMW iX3 (2021-present)
                      \n                    BMW M3 (2021-present)
              there may be additional models or variations released by BMW during this time period.");
          printf("\nenter your option: ");

          scanf("%d",&option);
          switch(option){
          
        case 1:  printf(" your seat registered for Informatics");     break;  
        case 2:   printf(" your seat registered for Machine Learning");     break;  
        default:
        printf("\nyou entered wrong option"); break ;
      } }    
      
         void f3(){
          int option;
          printf("School of Engineering offers: \na.Department of Mechanical Engineering\nb.Department of Mechatronics Engineering");
          printf("\nenter your option: ");
          scanf("%d",&option);
          switch(option){
          
        case 1:  printf(" your seat registered for Mechanical Engineering");        break;  
        case 2:   printf(" your seat registered for Mechatronics Engineering");     break;  
        default:
        printf("you entered wrong option");
      }

      }    
         void f2(){
          int option;
          printf("School of Business offers: \na.Department of Commerce\nb.Department of purchasing");
          printf("\nenter your option: ");
          scanf("%d",&option);
          switch(option){
          
        case 1:  printf(" your seat registered for Commerce");     break;  
        case 2:   printf(" your seat registered for purchasing");     break;  
        default:
        printf("you entered wrong option");
      }

      }    
      

