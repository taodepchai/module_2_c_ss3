#include<stdio.h>
int main () {
   float math , literature , english ;
   float total_point, medium_point;
   printf ("diem toan : ");
   scanf ("%f",&math);
   printf ("diem van : ");
   scanf ("%f",&literature); 
   printf ("diem anh : ");
   scanf ("%f",&english);
   total_point = math + literature + english;
   medium_point = (math + literature + english) / 3;
   printf ( "tong diem la: %.2f\n", total_point);
   printf ( "diem trung binh la %.2f",  medium_point);
return 0;
}
