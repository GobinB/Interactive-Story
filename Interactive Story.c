
# Description: creating a interactive stories using random, pointers and arrays. 


#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>

int main(void)
{
	
srand(time(0));
char name[50];
int num, num2;
  
// assigning char to change the story everytime the user runs it. 

char temp[4][50] = {"winter" , "cold", "freezing", "chilly"};

char drinks[4][50] = {"hot chocolate" , "Tea" , "Coffee" , "Cappichiano"};

char desserts[4][50] = {"Chocolate Cheesecake", "Apple pie", "Cherry pie", "Banana bread"};

// collecting data from user

   printf("What is your name? ");
   scanf("%s", &name[0]);
   
   printf("\nPick a number between 0 to 10 ");
	 scanf("%d", &num);
	 
  printf("\nWhat's your favorite number!? ");
	 scanf("%d", &num2);
  
   
   // fun little story of a mother and her "chef kids". 
   

   printf("\nA long time ago, in the midst of a %s day, ", temp[rand()%4]);
	printf("\n%s and the siblings decided to surprise their mother by making her favorite beverage, %s. " , name, drinks[rand()%4]);
	printf("\nWhen the mother tasted it, she gives it a %d out of 10. Anyway, she really appreciated the effort.", num);
	printf("\nTo surprise their mother again, the siblings decided to make her favorite dessert, %s.  " , desserts[rand()%4]);
	printf("\nAfter taking a bite of the dessert, the mother said PLEASE do not make me desserts anymore!!");
	printf("\nHowever, the kids did not listen and made %d more desserts for their mother.", num2);




return 0;





}
	











