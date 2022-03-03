#include <stdio.h>

struct fraction {
int num, den;
};
typedef struct fraction Fraction;

int gcd(int a, int b);
Fraction input_fraction();
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum);

int main(){
  printf("%d\n", gcd(16,24));
}
int gcd(int a, int b){
  int t;
  while(b!=0){
    t = b;
    b = a%b;
    a = t;
  }
  return a;
}