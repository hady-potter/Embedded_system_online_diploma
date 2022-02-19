#include"stdio.h"

int main(){

  // getchar();
  unsigned char c = 0;
  int a = 0, b = 0;
  float f1 = 0.0f, f2 = 0.0f;


  do{
    unsigned char ex_number = 0;
    printf("example number: ");
    scanf("%d", &ex_number);
    switch(ex_number){
      case 1:
        printf("C Programming\n");
        break;
      case 2:
        printf("number: ");
        scanf("%d", &c);
        printf("you enterd: %d\n", c);
        break;
      case 3:
        printf("enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("sum: %d\n", a + b);
        break;
      case 4:
        printf("enter two numbers: ");
        scanf("%f %f", &f1, &f2);
        printf("product: %f\n", f1 * f2);
        break;
      case 5:
        printf("char: ");
        getchar(); //handle enter key
        scanf("%c", &c);
        printf("ASCII value of %c = %d\n", c, c);
        break;
      case 6:
        printf("a: ");
        scanf("%f", &f1);
        printf("b: ");
        scanf("%f", &f2);
        float temp = f1;
        f1 = f2;
        f2 = temp;
        printf("after swaping\n");
        printf("a: %f\n", f1);
        printf("b: %f\n", f2);
        break;
      case 7:
        printf("a: ");
        scanf("%d", &a);
        printf("b: ");
        scanf("%d", &b);
        a ^= b;
        b ^= a;
        a ^= b;
        printf("after swaping\n");

        printf("a: %d\n", a);
        printf("b: %d\n", b);
        break;
      default:
        printf("wrong answer!\n");
  }
    getchar(); //handle enter key
    printf("press y to continue, n to exit: ");
  }while(getchar() == 'y');
  

  return 0;
}