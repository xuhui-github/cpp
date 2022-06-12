#include<stdio.h>

int main(void){
  int a[6]={[4]=29,[2]=100};
  for(int i=0;i<6;i++)
    printf("%d\n",a[i]);
  struct triplet{
    int x,y,z;
  };
  
  int x_val=1,y_val=2,z_val=3;

  struct triplet p={
    .y = y_val,
    .x = x_val,
    .z = z_val
  };
  printf("%d %d %d\n",p.x,p.y,p.z);

  struct triplet p1={
    x_val,
    y_val,
    z_val
  };

  return 0;
}

