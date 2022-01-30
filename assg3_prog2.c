#include <stdio.h>

struct Distance {
   int km;
   int m;
} d1, d2, result;

int assg3prog2() {
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter in km: ");
   scanf("%d", &d1.km);
   printf("Enter in m: ");
   scanf("%d", &d1.m);
 
   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter in km: ");
   scanf("%d", &d2.km);
   printf("Enter in m: ");
   scanf("%d", &d2.m);
   
   // adding distances
   result.km = d1.km + d2.km;
   result.m = d1.m + d2.m;

   while (result.m >= 1000) {
      result.m = result.m - 1000;
      ++result.km;
   }
   printf("\nSum of distances = %d km and %d m ", result.km, result.m);
   return 0;
}