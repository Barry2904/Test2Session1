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

float find_distance(float x1, float y1, float x2, float y2)
{
  float a,b;
  a=(x2-x1)*(x2-x1);
  b=(y2-y1)*(y2-y1);
  return sqrtf(a+b);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a,b,c;
  int istriangle=-1;
  a=find_distance(x1,y1,x2,y2);
  b=find_distance(x2,y2,x3,y3);
  c=find_distance(x3,y3,x1,x2);
  if((a+b)>c&&(b+c)>a&&(c+a)>b)
  {
    istriangle=1;
  }
  return istriangle;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istri)
{
  if(istri==1)
    printf("(%.1f,%.1f),(%.1f,%.1f),(%.1f,%.1f) are the coordinates of a triangle",x1,y1,x2,y2,x3,y3);
  else if(istri==-1)
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