#include<stdio.h>
int subarray(int a[],int size){
    int sum , temp,j = 0;
    for (int i = 0; i < size; i++)
    {
       for (j = i; j < size; j++)
       {
        sum = a[i] + a[j+1];
       }
       if (temp<sum)
       {
           temp = sum;
           break;
       }
       
    }
   printf("%d", temp);

    return temp;
}
int main(){
  int a[] = {-2,1,-3,4,-1,2,1,-5,4};
 int n = sizeof(a);
 int x = subarray(a,n);

return 0;
}