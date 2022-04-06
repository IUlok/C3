#include <stdio.h>

int factr(int n)
{
  int answer;
  if(n==1) return(1);
  answer = factr(n-1)*n;
  return(answer);
}

int main() {
  printf("%d", factr(5));
  return 0;
}
