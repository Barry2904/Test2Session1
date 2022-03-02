// #include<stdio.h>
// #include<string.h>
// void input_string(char string[] ,char substring[]){
//     printf("Enter the string\n");
//     scanf("%s",string);
//     printf("Enter the substring\n");
//     scanf("%s",substring);
// }
// int str_reverse(char string[],char substring[]){
//     int count=0;int count1=0;int index,i,j;
//     for (i=0;string[i]!='\0';i++)
//     {
//         count++;
//     }
//     for (int i=0;substring[i]!='\0';i++){
//         count1++;
//     }
//     if(count1>count){
//         index=0;
//     }
//     for( i=0;i<count;i++){
//         for( j=0;j<count1;j++){
//             if(string[i+j]!=substring[j]){
//                 break;
//             }
//         }
//         if(j==count1){
//             index=i;
//         }
//     }
//     return index;
// }
// void output(char string[], char substring[], int index){
//     printf("The index of %s in %s is %d",substring,string,index);
// }
// int main(){
//     char string[200];char substring[200];
//     int index;
//     input_string(string,substring);
//     index=str_reverse(string,substring);
//     output(string,substring,index);
//     return 0;
//   }


// #include<stdio.h>
// #include<string.h>
// void input_string(char *string ,char *substring)
// {
//   printf("Enter the string\n");
//   scanf("%s",string);
//   printf("Enter the substring\n");
//   scanf("%s",substring);
// }
// int str_reverse(char *string,char *substring)
// {
//   int count=0,count1=0,index,i,j;
//   for (i=0;string[i]!='\0';i++)
//   {
//     count++;
//   }
//   for (int i=0;substring[i]!='\0';i++)
//   {
//     count1++;
//   }
//   if(count1>count)
//   {
//     index=0;
//   }
//   for( i=0;i<count;i++)
//   {
//     for( j=0;j<count1;j++)
//     {
//       if(string[i+j]!=substring[j])
//       {
//         break;
//       }
//     }
//     if(j==count1)
//     {
//       index=i;
//     }
//   }
//   return index;
// }
// void output(char *string,char *substring,int index)
// {
//   printf("The index of %s in %s is %d",substring,string,index);
// }
// int main()
// {
//   char string[200];char substring[200];
//   int index;
//   input_string(string,substring);
//   index=str_reverse(string,substring);
//   output(string,substring,index);
//   return 0;
// }

#include <stdio.h>
#include <math.h>

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

Point input_point()
{
  Point p;
  printf("Enter p1 coordinates(x,y)");
  scanf("%f %f",&p.x,&p.y);
  return p;
}

Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}

void find_length(Line l)
{
  l.distance=sqrtf(pow(l.p2.x - l.p1.x,2)+pow(l.p2.y - l.p1.y,2));
}

void output(Line l)
{
  printf("Length of line is %f",l.distance);
}

int main()
{
  Line l;
  l=input_line();
  find_length(l);
  output(l);
  return 0;
}