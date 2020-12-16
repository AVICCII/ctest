
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char const *argv[])
{
    /* code */
    double a;
 
    int * p;
    int b;
    int c[2];
	int d;
 
    b = 1;
    a = b; //使用不当的类型转换
 
    p = (int *)malloc(10); //申请的内存未释放
 
    c[2] = 1; //数组访问越界
 
 
    printf("%d\n", b);
 
    return 0;
}