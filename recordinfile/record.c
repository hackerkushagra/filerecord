#include<stdio.h>
#include"getchuse.c"
int main()
{
FILE *fp;
char another= 'Y';
struct emp
{ 
  char name[40];
  int age;
  float bs;
};

struct emp e;
fp=fopen("EMPLOYEE.DAT","w");
if(fp==NULL)
{
  puts("cannt open");
  exit(1);
}

while(another=='Y')
{
printf("\nEnter name , age and salary:\n");
scanf("%s%d%f",e.name,&e.age,&e.bs);
fprintf(fp,"%s%d%f\n",e.name,e.age,e.bs);

printf("Add another record (Y/N)");
//fflush(stdin);
if(another!='\n' && another!=EOF){
another=getchar();
}

another = getche();
}
fclose(fp);
return 0;
}
