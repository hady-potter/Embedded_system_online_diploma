#include"stdio.h"


float get_max(float a, float b, float c){
  float max = (a > b) ? a : b;
  return (max > c) ? max : c;
}

const char* vowel_or_const(char c){
  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
     c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
       return "vowel";
  }
  return "const";
}

const char* is_alphabet_or_not(char c){
  if((c >= 'A' &&  c <= 'Z') || (c >= 'a' && c <= 'z'))
    return "alphabet";
  return "not alphabet";
}

int factorial(int x){
  int ans = 1;
  for(int i = 1; i <= x; i++){
    ans *= i;
  }
  return ans;
}

float calculator(float a, float b, char opr){
  switch (opr)
  {
  case '+': return a + b;
  case '-': return a - b;
  case '*': return a * b;
  case '/': return a / b;
  default : return 0;
  }
}

int main(){
  unsigned char ch = 'y';
  int x = 0;
  float a = 0.0f;
  float b = 0.0f;
  float c = 0.0f;


  while(ch == 'y' || ch == 'Y'){
    unsigned char ex_number;

    printf("Ex-number: ");
    scanf("%d", &ex_number);
    switch(ex_number){
      case 1:
        printf("number: ");
        scanf("%d", &x);
        (x & 1) ? printf("%d odd\n", x) : printf("%d even\n", x);
        break;
      case 2:
        getchar(); //handle enter key
        printf("char: ");
        scanf("%c", &ch);
        printf("%c is %s\n", ch, vowel_or_const(ch));
        break;
      case 3:
        printf("enter 3 numbers: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("Largest number = %f\n", get_max(a, b, c));
        break;
      case 4:
        printf("number: ");
        scanf("%f", &a);
        if(a > 0) printf("%f is positive\n", a);
        else if(a < 0) printf("%f is negative\n", a);
        else printf("Zero\n");
        break;
      case 5:
        printf("char: ");
        getchar();
        scanf("%c", &ch);
        printf("%c is %s\n", ch, is_alphabet_or_not(ch));
        break;
      case 6:
        printf("number: ");
        scanf("%d", &x);
        printf("sum = %d\n", x * (x + 1) / 2);
        break;
      case 7:
        printf("positive integer: ");
        scanf("%d", &x);
        if(x < 0) printf("negative valuse are NOT allowed!\n");
        else printf("factorial = %d\n", factorial(x));
        break;
      case 8:
        printf("operator: ");
        getchar();
        scanf("%c", &ch);
        printf("enter two numbers: ");
        scanf("%f %f", &a, &b);
        printf("%f %c %f = %f\n", a, ch, b, calculator(a, b, ch));
        break;
      default:
        printf("wrong answer\n");
    }
    printf("to continue press y, to exit press n:  ");
    getchar();
    scanf("%c", &ch);
  }


  return 0;
}