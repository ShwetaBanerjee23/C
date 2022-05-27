#include <stdio.h>

/*
Little Mac is an interplanetary space boxer, who is trying to win championship 
belts for various weight categories on other planets within the solar system.

Write a space.c program that helps him keep track of his target weight by: It 
should ask him what his earth weight is. Ask him to enter a number for the planet 
he wants to fight on. It should then compute his weight on the destination planet.

Here is the table of conversion:

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19

*/

int main() {
  // Enter Earth weight here:
  int earthWeight = 95;
  // Enter the number of the planet you want to fight on:
  int fightPlanet = 1;

  switch (fightPlanet) {
    case 1:
      printf("%f", earthWeight * 0.38);
      break;
    case 2:
      printf("%f", earthWeight * 0.91);
      break;
    case 3:
      printf("%f", earthWeight * 0.38);
      break;
    case 4:
      printf("%f", earthWeight * 2.34);
      break;
    case 5:
      printf("%f", earthWeight * 1.06);
      break;
    case 6:
      printf("%f", earthWeight * 0.92);
      break;
    case 7:
      printf("%f", earthWeight * 1.19);
      break;
    default:
      printf("Invalid argument: Not a valid destination planet!");
  }
  return 0;
}
