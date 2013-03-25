#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int32_t rev_num = 0 ;
int32_t base_pos = 1;

static inline void clear(void) {
  rev_num = 0;
  base_pos =1;
}

int32_t reverse(int32_t num) {
  if(num>0) { 
    reverse(num/10) ;
    rev_num +=(num%10)*base_pos ;
    base_pos *=10 ;
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
   rev_num = 0;
   base_pos =1;
   rev_b = reverse(b) ;
   rev_num = 0;
   base_pos =1;
   rev_sum = reverse(rev_a + rev_b);
   printf("%d\n",rev_sum) ;
  }
  return 0 ; 
}
