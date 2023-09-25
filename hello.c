#include <stdio.h>
int main() {
  printf("kholdarov mukhammadaziz\n");

  printf("sejong university\n");

  printf("uzbekistan\n");

  printf("Andijan");
  return 0;
    
}

    int abc;

    printf("Enter a value =");

    scanf("%d",&abc);

     printf("The entered value is = %d",abc);

    return 0;
}

int myfavouritenumber = 0;

printf("please write your favourite number\n");

 scanf("%d" ,&myfavouritenumber);

 printf("You entred number : %d\n", myfavouritenumber);
 
 return 0;


//  

int main(){
float myfavouritenumber ;
float num;
float sum;
printf("please write your favourite number\n");

 scanf("%f" ,&myfavouritenumber);

 printf("You entred number : %f\n", myfavouritenumber);
//  ///////////////////////////////////////////////////////
 printf("Again !\n");
 
 scanf("%f",&num);
 
 printf("Your entered numbers = : %f",num);
//   printf("You entnred: %d",myfavouritenumber);

sum = myfavouritenumber + num;
printf("\nThe total amount is : %f + %f = %f",myfavouritenumber,num,sum);
sum = myfavouritenumber - num;
printf("\nThe total amount is : %f - %c = %f",myfavouritenumber,num,sum);
/////////////

}
////////////////////////////
#include <stdio.h>
int main(){
    printf("$$$$$");
    printf("\n$")  ;
    printf("  ");
    printf(" $");
    
   
    printf("\n$")  ;
    printf("  ");
    printf(" $");
    
    
    printf("\n$")  ;
    printf("  ");
    printf(" $");
    
    printf("\n$$$$$");
    
    /////
    printf("\n     $");
    printf("\n   $");
    printf("   ");
    printf(" $");
    printf("\n $");
    printf(" ");
    printf("       $");
    printf("\n$$$$$$$$$$$$");
    return 0;
  
}
int main () {
  int var1 = 5,var2=5;
    printf("%d\n",var1++);
    printf("%d\n", ++var2);
    return 0;
}
    

int main () {
    int a= 100;
    
    printf("%d\n",a);
    printf("%d\n",a++);
    printf("%d\n",a);
    printf("%d\n",++a);
    printf("%d",--a);
    
    return 0;
}
// //////////error>
// #include <stdio.h>

// int main () {
//     int a= 10+;
    
//   printf(a++) +(++a);
    
//     return 0;
// }
/////////////////////////////////////////////if else - else if >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <stdio.h>

int main() {
    int a = 12;
    int b = 23;
   if (a = b)
{
    printf("It is raining");
} else
{
    printf(" It isn't raining");
}
   
}
// //////////////////////////////     switch      -         case   >>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <stdio.h>

int main() {
  int day = 7;
  
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
  }
    
  return 0;
}