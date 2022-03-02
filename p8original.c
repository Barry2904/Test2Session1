#include<stdio.h>
#include<math.h>

struct _point 
{
  float x,y;
};
typedef struct _point Point;

struct _line
{
  Point p1,p2;
  float distance;
};
typedef struct _line Line;

struct _polygon 
{
  int n;
  Line l[100];
  float perimenter;
};
typedef struct _polygon Polygon;
int input_n()
{
  int x;
  printf("Enter sides of polygon:- ");
  scanf("%d",&x);
  return x;
}
void input_polygon(int n,Polygon *p)
{
  p->n=n;
}
int main()
{
  int n;
  Polygon p;
  n=input_n();
  input_polygon(n,&p);
  Line l[100];
  Line input_line();
  input_n_lines(int n, Line l[n]);
  find_perimeter(&p);
  output(&p);
}