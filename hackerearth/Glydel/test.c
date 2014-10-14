#include<stdio.h>
int main() {
    int n, i, count=0, j, k, int_count;
    printf("Enter the number of values needed: ");
    scanf("%d", &n);
    i = 1;
    while(count < n) {
       int_count = 0;
       for (j=1; j<=((int(pow(i, 1.0/3)); j++) {
          for(k=j+1; k<=((int(pow(i,1.0/3)); k++) {
              if(j*j*j+k*k*k == i)
              int_count++;
          }
       }
       if(int_count == 2) {
          count++;
          printf("\nGot %d Hardy-Ramanujan numbers %d", count, i);  
       }
       i++;
    }
}

