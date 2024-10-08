//#include <stdio.h>
//void main() {
  //  int a = 1, b = 2, i;
    //printf("%d, %d", a, b);
    //for (int i = 3; i <= 6; i++) {
   //     i = a + b;
//        printf(", %d", i);
  //      a = b;
    //    b = i;
  //  }
  //  printf("\n");
    //return 0;
//}
#include <stdio.h>
void main() {
    int a=1, b=2, i;
    while (a <= 13)
    {
        printf("%d, ", a);
        i = a + b;
        a = b;
        b = i;
    }
    
}