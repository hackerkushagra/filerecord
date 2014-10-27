#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
FILE *fp;
struct emp
{
  char name[40];
  int age;
  float bs;
};
struct emp e;
fp=fopen(argv[1],"r");
if(fp==NULL)
{
  puts("Cann't open it");
  exit(1);
}
while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs)!=EOF)
printf("%s %d %f \n",e.name,e.age,e.bs);

fclose(fp);
return 0;
}
