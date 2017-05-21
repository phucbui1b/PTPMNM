#include "Toan.h"
#include<stdio.h>
int main()
	{
	  int a=1,b=2;
	  int t=tong(a,b);
	  int h=hieu(a,b);
	  int ti=tich(a,b);
	  float th=thuong(a,b);
	  printf("tong =%d \n",t);
	  printf("hieu =%d \n",h);
	  printf("tich =%d \n",ti);
	  printf("thuong =%2f \n",th);
  	  return 0;
	}
