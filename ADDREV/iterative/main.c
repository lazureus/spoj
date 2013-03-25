#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int32_t reverse(int32_t num) {
  int32_t rev_num = 0 ;
  while(num>0) {
    rev_num = rev_num*10 + num%10 ;
    num = num/10;
  }
  return rev_num ;
}

int32_t main(void) {
  int32_t n ;
  int32_t a,b;
  int32_t rev_a, rev_b ;
  int32_t rev_sum ;
  scanf("%d",&n) ;
  while(n--) {
   scanf("%d %d",&a,&b) ;
   rev_a = reverse(a) ;
   rev_b = reverse(b) ;
   rev_sum = reverse(rev_a + rev_b);
   printf("%d\n",rev_sum) ;
  }
  return 0 ; 
}
