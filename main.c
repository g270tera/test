#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double myRoot(double x) // x >= 0 ではないとき exit(1) とする。
{
  int y;
  if( !(x >= 0) ){//xが負のとき
    exit(1);
  }
  y = sqrt(x);
    return y;
}

int main(void)
{
  int i;
  double *x = (double *)malloc(sizeof(double) * 101);

  for( i = 0; i <= 100; i ++ ){//iが定義されずに計算されるため,forを用いる。
      x[i] = myRoot((double)i);
    }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
