//thevenin eq. solver

#include <stdio.h>
#include <math.h>
#include <locale.h>

double theveninEsdeger(double r1, double r2, double r3, double v)
{
  double vA, vC, vD;

  //takip eden 5 satır ml.
  /*vC = v;
  ((vD-vC) / r1) + (vD/r3) + ((vD-vA)/r2) = 0;
  (vA-vD) / r2 = 0;
  vA = vD;
  vA(r3+r1) = v * r1;*/

  vA = (v*r1) / (r3+r1);
  return vA;
}

double theveninDirenci(double r1, double r2, double r3)
{
  return (r3*r1) / (r3+r1) + r2;
}

int main()
{

setlocale(LC_ALL, "Turkish");

printf("  -------R1-----------------R2---------O(A)\n");
printf("  |              |\n");
printf("  |              |\n");
printf("  |              |\n");
printf("  |              |\n");
printf(" (+)             |\n");
printf("  |              R3\n");
printf(" (-)             |\n");
printf("  |              |\n");
printf("  |              |\n");
printf("  |              |\n");
printf("  |              |\n");
printf("  -------------------------------------O(b)\n");

double r1;
double r2;
double r3;
double v;

printf("\tR1: ");
scanf("%lf", &r1);

printf("\tR2: ");
scanf("%lf", &r2);

printf("\tR3: ");
scanf("%lf", &r3);

printf("\tV: ");
scanf("%lf", &v);

printf("\tEsdeger Voltaj: %f%s", theveninEsdeger(r1, r2, r3, v), "\n");
printf("\tEsdeger Direnc: %f%s", theveninDirenci(r1, r2, r3), "\n");
}
