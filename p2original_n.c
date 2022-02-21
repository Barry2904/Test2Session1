#include <stdio.h>
#include <math.h>
void input_line(float *x1, float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter coordinate x1,y1:- ");
  scanf("%f %f",x1,y1);
  printf("Enter coordinate x1,y1:- ");
  scanf("%f %f",x2,y2);
  printf("Enter coordinate x1,y1:- ");
  scanf("%f %f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area;
  area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y2-y1);
  return area;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istri)
{
  if(istri!=0)
    printf("(%.1f,%.1f),(%.1f,%.1f),(%.1f,%.1f) are the coordinates of a triangle",x1,y1,x2,y2,x3,y3);
  else if(istri==0)
    printf("The coordinates do not form a triangle.");
}
int main()
{
  float x1,y1,x2,y2,x3,y3,area;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  area=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,area);
  return 0;
}