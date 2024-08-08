#include <stdio.h>

int main(void)
{ int a, b, d = 3, *pr = &d;
  char c, *p = &c;

// concept of pointer, lvalue and rvalue 
  printf("sizeof(pr) = %d, sizeof(p) = %d \n\n", sizeof(pr), sizeof(p));
  printf("c is stored at memory location \t %p \n", &c);
  printf("p points to memory location  \t %p \n", p);

  c = 'A';
  printf("\n rvalue of c = %d \n lvalue of c = %p\n", c, &c);
  printf("\n rvalue of p = %p \n lvalue of p = %p\n", p, &p);

// how to use pointer by the * operator 
  a = * pr;
  b = *&d;
  printf("\nrvalue of a = %d \n lvalue of a = %p\n", a, &a);
  printf("rvalue of b = %d \n lvalue of b = %p\n", b, &b);
  printf("rvalue of d = %d \n lvalue of d = %p\n", d, &d);

  *pr = 2 + a;
  printf("\nafter *pr = 2 + a;");
  printf("\n rvalue of d = %d \n lvalue of d = %p = %p \n", d, &d, pr);

  *pr = *pr + *pr;
  printf("\nafter *pr = *pr + *pr;");
  printf("\n rvalue of d = %d \n lvalue of d = %p = %p \n", d, &d, pr);

  *pr = *pr**pr;
  printf("\nafter *pr = *pr**pr;");
  printf("\n rvalue of d = %d \n lvalue of d = %p = %p \n", d, &d, pr);
  printf("\n rvalue of a = %d \n lvalue of a = %p != %p \n", a, &a, pr);
  printf("\n rvalue of b = %d \n lvalue of b = %p != %p \n", b, &b, pr);

  pr++;
//  pr = pr + 32;
  printf("\n rvalue of d = %d \n lvalue of d = %p \n", d, &d);
  printf("\n rvalue of pr = %p \n value pr points to = %d \n ", pr, *pr);

  return 0;
}
