#include <stdio.h>

int is_prime(int num) {
   if (num <= 1) {
      return 0;
  }
  for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
           return 0;
      }
   }
  return 1;
}

int main() {
int m, n, p1, p2;
scanf ("%d %d", &n, &m);
p1=n;
p2=m;
while ((!is_prime(p1) && p1>1) || (!is_prime(p2) && m<=1000)){
if(is_prime(p1)||is_prime(p2))
break;

if((!is_prime(p1) && p1>1)){
    p1--;
}
if((!is_prime(p2) && m<=1000)){
    p2++;
}
}
printf("%d\n", p1*p2);
 
    return 0;
}