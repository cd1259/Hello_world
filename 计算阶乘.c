#include<stdio.h>
int main()
{
//阶乘运算 【n的阶乘等于n(n-1)(n-2)...1】
    //int n; int sum=1;
	//scanf_s("%d", &n);        //输入要求阶乘的数值
	//for (n ; n > 1; n--)      //循环语句
	//{
	//	sum *= n;
	//}
	//printf("%d\n", sum);       //输出所求的值



//计算：1!+2!+3!+...+n!
  //第一种 while循环 
		  //int a=1,b=1,c=1,sum=0,n;
		  //scanf_s("%d", &n);
		  //while (a <= n)
		  //{
			 // while (b <= a)           /*计算阶乘*/
			 // {
				//  c *= b;
				//  b++;
			 // }
			 // a++;                     /*将上串代码的结果加起来*/
			 // sum += c;
		  //}
 		  //printf("%d\n", sum);
  //第二种 for循环
		  /*int x, y, z,N,xyz=0;
		  scanf_s("%d", &N);
		  for (y=1;y<=N;y++)
		  {
			  for (x = 1,z=1; x <= y; x++)
			  {
				  z *= x;
			  }

			  xyz += z;
		  }
		  printf("%d\n", xyz);*/
  //简化版！简化了计算，同时也简化了代码
		  /* int a, b=1, c=0,n;
		   scanf_s("%d", &n);
		   for (a=1;a<=n;a++)
		   {
			   b *= a;
			   c += b;
		   }
		   printf("%d\n", c);*/
	
	
	return 0;
}