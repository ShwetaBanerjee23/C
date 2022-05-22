#include <stdio.h>

/* Adding more information to the previous Grocery Store 
project by applying sales, modifying review score, and more */

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview = 823;
 int numberOfReviews = 9;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 3;

 // Another review
 appleReview += 52;
 numberOfReviews++;

 appleQuantity = 23;
 appleReviewDisplay = appleReview / numberOfReviews;

 // Fourth day of the week has lower sales so offer sale price
 if(appleQuantity < 10 || dayOfWeek == 3) {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and \
 your customers gave it an average review of %d%%!", applePrice, appleQuantity, 
        appleLocation, appleReviewDisplay);

}
