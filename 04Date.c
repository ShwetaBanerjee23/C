#include <stdio.h>
/*This program will take a date as input in the format 
mm/dd/yyyy (e.g. 01/01/2021) and print it out in the 
style "1st January 2021"*/

int main(void) {
  // m is used later to work out the suffix of the day
  int month, day, year, m;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch (month) {
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
    default:
      printf("Invalid argument:\n\tEnter a number for month:" 
      " 1-12\n\tEnter a number for day:\n\t\t-> 1-29 February(leap year)"
      "\n\t\t-> 1-28 February otherwise\n\t\t-> 1-30 April, June, September,"
      "\n\t\tNovember\n\t\t-> 1-31 otherwise"
      "\n\tEnter only numbers for year\n");
      exit(-1);
  }

  // Print the day
  printf(" %d", day);

  // Print the suffix for a given day
  m = day % 10;
  switch (m) {
    case 1:
      if (day != 11) {
        printf("st");
        break;
      }
    case 2:
      if (day != 12) {
        printf("nd");
        break;
      }
    case 3:
      if (day != 13) {
        printf("rd");
        break;
      }
    default:
      printf("th");
  }

  // Print the year
  printf(", %d\n", year);
  
  return 0;
}
