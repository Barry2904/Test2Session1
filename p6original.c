#include<stdio.h>
void input_string(char *a)
{
  printf("Enter a string:- ");
  scanf("%s",a);
}
int str_reverse(char *string,char *substring)
{
  printf("Enter the substring to be found:- ");
  scanf("%s",substring);
}
void output(char *string,char *substring,int index)
{
  
}
int main()
{
  int index;
  char a,string,substring;
  input_string(&a);
  index=str_reverse(&string,&substring);
  output(&string,&substring,index);
  return 0;
}