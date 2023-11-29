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
/// Loop (outer,inner) 
// 1
// 2
// 3
// 4
// 5/////////////////////////////
 
int main() {
    int a,b;
    for(a=1;a<=2;a++)
{  printf("outer:%d\n" ,a);
    for(b=1;b<=5;b++)
{
    printf( "inner:%d\n" ,b);
}
   
}
    
    return 0;
}

///  1 2 3 4 5 6 7
 //////////////////////////////
/// 
int main() {
    int a,b;
for(a=1;a<=5;a++)
//  {printf("%d" ,a);
{
    for(b=1;b<=7;b++)
{
    printf("%d\t" ,b);
}
printf(" \n");
   
}
    
    return 0;
}
//  to create an array this formula is used!
#include <stdio.h>
int main() 
{
int array [5];
for (int i = 0; i < 5; i++)
   {
    printf("enter a value: ");
   scanf("%d", &array[i]);
   }

int max = array[0];
for (int i=1; i < 5 ; i++ ) 
   {
      if ( max > array[i])
        {
          max = array[i];

         }
   }
printf("this is the biggiest number = %d\n", max);
return 0;

}
#include <stdio.h>

int main()
{
  int a[5],i;
  printf("please print 5 numbers ");
  for (i=0;i<5;i++){
      scanf("%d", &a[i]);
  }
  
  for(i =4;i>=0;i--){
      printf("%d\n",a[i]);
  }
    return 0;
}

#include <stdio.h>

int main() {
    float array[3][3];

    for (int i = 0; i < 3; i++)
        for (int k = 0; k < 3; k++) {
            scanf("%f", &array[i][k]);
            
        }

    printf("Identity Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++)
            printf("%f ", array[i][k]);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
  float a[2][2][2][2], b[2][2][2][2], result[2][2][2][2];
  
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    for (int k = 0; k < 2; ++k)
    for (int s = 0; s < 2; ++s)
    {
      printf("Enter a%d%d%d%d: ", i + 1, j + 1,k+1,s+1);
      scanf("%f", &a[i][j][k][s]);
    }
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    for (int k = 0; k < 2; ++k)
    for (int s = 0; s < 2; ++s)
    {
      printf("Enter b%d%d%d%d: ", i + 1, j + 1,k+1,s+1);
      scanf("%f", &b[i][j][k][s]);
    }
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
     for (int k = 0; k < 2; ++k)
    for (int s = 0; s < 2; ++s)
    {
      result[i][j][k][s] = a[i][j][k][s] + b[i][j][k][s];
    }

  printf("\nSum Of Matrix:");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    for (int k = 0; k < 2; ++k)
    for (int s = 0; s < 2; ++s)
    {
      printf("%.1f\t", result[i][j][k][s]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int k,i;
    
    printf(" enter numbers of elements:");
    scanf("%d",&k);
    printf("Entered numbers of elements: %d\n",k);
    ptr = (int*)malloc(k*sizeof(int));
    if (ptr ==NULL) {
        printf("Memory is not allocated.\n");
        exit(0);
    } else {
        printf("Memory successfully allocated using malloc \n");
        for(i=0;i<k;++i){
            ptr[i]=i +1;
        }
        printf("The elements of array are :");
        for (i=0;i<k;++i){
            printf("%d",ptr[i]);
        }
    }
    

    return 0;
}
#include <stdio.h>

int compareStrings(const char *str1, const char *str2) {
    for (; *str1 && *str2 && *str1 == *str2; str1++, str2++);

    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    // Input string from the user
    printf("Enter a string: ");
    gets(str);

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // If the current character is a space, tab, or newline, increment the word count
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++;
        }
    }

    // Add 1 to the word count to account for the last word
    count++;

    // Display the result
    printf("Total number of words: %d\n", count);

    return 0;
}
#include <stdio.h>

// Function to count words in a string
int countWords(char *str) {
    int count = 0;
    int isWord = 0; // Flag to track if we are inside a word

    // Loop through each character in the string
    while (*str) {
        // If the current character is a space, tab, or newline, set the flag to 0
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            isWord = 0;
        }
        // If the current character is not a space, tab, or newline and the flag is not set, increment the word count and set the flag to 1
        else if (!isWord) {
            isWord = 1;
            count++;
        }

        // Move to the next character in the string
        str++;
    }

    return count;
}

int main() {
    char str[1000];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Call the countWords function and display the result
    printf("Total number of words: %d\n", countWords(str));

    return 0;
}
