#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int find_nth_term( int k, int a,int b,int c );
int s1(int j, int a, int b, int c);
int s1(int j, int a, int b, int c)
{    
    if (j==3)return c;
    else if (j==2)return b;
    else if (j==1)return a;
    else 
     return find_nth_term(j,a,b,c);  
    return 0;
}

int find_nth_term( int k, int a,int b,int c )
{
  if( (k > 0 && k <= 20) && (a > 0 && a <= 100) && 
  (b > 0 && b <= 100) && (c > 0 && c <= 100) )
  {  
  int X=0,Y=0,Z=0;  
  Z = s1(k-1,a,b,c);
  Y = s1(k-2,a,b,c);
  X = s1(k-3,a,b,c);
  return Z+Y+X;
  }
  else return 0;
}



int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
