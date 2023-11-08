#include <stdio.h>
int main() {
   float r = 2.5 , perimeter_circle, acreage_circle;
   const float PI = 3.14;
   perimeter_circle = 4 * PI * r;
   acreage_circle = r * r * PI;
   printf(" chu vi va dien tich hinh tron lan luot la %.2f va %.2f\n", perimeter_circle ,  acreage_circle  );
return 0; 
}
