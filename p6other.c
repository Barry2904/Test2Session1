#include<stdio.h>
#include<string.h>
void input_string(char *string)
{
  printf("Enter a string:- ");
  scanf("%s",string);
}
int str_reverse(char *string,char *substring)
{
  int k;
  printf("Enter the substring to be found:- ");
  scanf("%s",substring);
  char *i=strstr(string,substring);
  k=i-string;
  return k;
}
void output(char *string,char *substring,int index)
{
  if(index>=0 && index<=200)
    printf("%s is substring of %s with index %d",substring,string,index);
  else
    printf("%s is not substring of %s",substring,string);
    
}
int main()
{
  int index;
  char string[200],substring[200];
  input_string(string);
  index=str_reverse(string,substring);
  output(string,substring,index);
  return 0;
}


