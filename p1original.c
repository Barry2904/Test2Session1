#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter a x1 coordinate");
  scanf("%f",x1);
  printf("Enter a x2 coordinate");
  scanf("%f",y1);
  printf("Enter a y1 coordinate");
  scanf("%f",x2);
  printf("Enter a y2 coordinate");
  scanf("%f",y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  float a,b;
  a=(x2-x1)*(x2-x1);
  b=(y2-y1)*(y2-y1);
  *area=sqrtf(a+b);
}
void output(float x1, float y1,float x2, float y2, float area)
{
  printf("The distance between the 2 points is %f",area);
}
int main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}