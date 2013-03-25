#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int32_t main(void) {
  int32_t n ;
  int32_t a,b,sum;
  int32_t rev_a = 0 ;
  int32_t rev_b = 0 ;
  int32_t rev_sum = 0;
  scanf("%d",&n) ;
  while(n--) {
   scanf("%d %d",&a,&b) ;
   while(a>0) {
     rev_a = rev_a*10 + a%10 ;
     a = a/10;
   }
   while(b>0) {
     rev_b = rev_b*10 + b%10 ;
     b = b/10;
   }
   sum = rev_a + rev_b ;
   while(sum>0) {
     rev_sum = rev_sum*10 + sum%10 ;
     sum = sum/10;
   }
   printf("%d\n",rev_sum) ;
   rev_a = 0;
   rev_b = 0;
   rev_sum = 0;
  }
  return 0 ; 
}
