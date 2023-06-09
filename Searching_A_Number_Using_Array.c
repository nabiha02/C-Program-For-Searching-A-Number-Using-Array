//Searching a number using an ARRAY(Linear Search)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int num[500] ,n, value, position = -1 , i;

   printf("How many numbers you want to input? ");
   scanf("%d", &n);
   printf("Input your %d numbers: ", n);

   for(i=0;i<n;i++){

    scanf("%d", &num[i]);
   }

   printf("Input the value number: ");
   scanf("%d", &value);

   for(i=0;i<n; i++){

    if(value == num[i]){

        position = i+1;

        break;
    }

   }

   if(position == -1)

    printf("Not found\n");

   else
   
    printf("The position of %d is %d\n", value,position);
}