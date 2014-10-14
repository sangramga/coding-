
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<limits.h>
void optimal_substr(char *p)
{
  int start=0, end=0, count=0, i=0,length=0;
  length = strlen(p);
  while(i<length && *(p+i) != 'b')
    {
      i++;
    }
  if(i == length)
    {
      printf("%d,%d\n",0,0);
      return;
    }
  start=i;
  end=i;
  int prev_count =0;
  int prev_end = 0;
  for(i = start+1; (i<length && *(p+i)!= '\n');i++)
    {
      if(*(p+i) == 'a')
	{
	  end = i;
	  count++;
      	}
      else
	{
	  if(count>prev_count)
	    {
	      prev_end = end;
	      prev_count = count;
	    }
	  count =0;
	}
    }
  if(count> prev_count)
    prev_end = end;
  printf("%d,%d\n",start,prev_end);
}





int main(void) {
	char p[]="aabb";
  	optimal_substr(p);
	return 0;
}
