#include <stdio.h>

/* This program puts together basic information
about one specific product in a grocery store
and displays the information at the end. */

int main() {
  int appleQuantity = 23;
  double applePrice = 1.49;
  float appleReview = 82.5;
  // implicit casting
  int appleReviewDisplay = appleReview;
  const char appleLocation = 'F';

printf("An apple costs: $%.2f, there are %d in inventory \
found in section: %c and your customers gave it an average \
review of %d%%!", applePrice, appleQuantity, appleLocation, 
       appleReviewDisplay);

}
