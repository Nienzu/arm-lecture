#include <stdio.h>
#include <time.h>
extern int fibonacci(int x);

int main(int argc, char **argv)
{
  int number=0;
  int result=0;
  FILE *fp;
  fp=fopen("rec_time.txt","a");
  clock_t start, end;
  double time_spent;
  scanf("%d",&number);
  start=clock();
  result = fibonacci(number);   
  end=clock();
  time_spent=(double)(end-start)/CLOCKS_PER_SEC;
  printf("The fibonacci sequence at %d is: %d\n", number, result);
  fprintf(fp, "%f\r\n", time_spent);
  fclose(fp);
}

