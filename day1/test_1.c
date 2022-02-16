#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void){
printf("bite\n");
return 0;  
}
//mian= name of the function main 函数主体只能有一个
//{what inside the bracket is the body of the function}
// int is integral
// printf - print on the screen 
//#include <stdio.h> quote the head file, so we can use the printf
//编译+连接+运行 ctrl+F5
//\n 换行 enter

// c 语言数据类型
//e.g. 价格 - 15.6元 - 小数（浮点数）
//e.g. 年龄 - 整型（15）
//char字符数据类型- %s （'a'-字符a） sizeof（大小为1）单位byte
//short 短整型                  sizeof（大小为2）单位byte
//int   //打印一个整数-%d       sizeof（大小为4） 单位byte
//long 长整型                   sizeof（大小为4）单位byte
//long long更长的整型           sizeof（大小为8）单位byte
//float 单精度浮点数 %f           sizeof（大小为4）单位byte
//double 双精度浮点数 %lf           sizeof（大小为8）单位byte
//C语言标准 sizeof（long）>=sizeof(int)
//计算机中的单位 bit——比特位 一个bit 位存一个2进制位
//1个 byte=8bit  kb=1024byte mb=1024kb gb=1024mb
int main(){
    char ch = 'a';
    int age = 20;
    short num = 10;
    float weight = 55.5;
    double d = 0.0;
    printf("%d\n",age); //打印一个整数-%d
    //sizeof - function - 操作符 - 计算类型或者变量所占空间的大小
    printf("%d\n",sizeof(ch)) ;
    return 0;

}

// 变量和常量
// 常量-不能改变的量
// 变量- 能被改变的量
int main(){
    //creat a variable
    //遵循格式 类型 变量的名字 = 0；
    int age = 20；
    double weight = 75.3；
    age = age+1;
    weight = weight-10;
    printf（"%d\n", age）;
    printf("%lf\n",weight);
    return 0;
}


// 变量的分类，

// 全局变量 - 大括号外部定义
int a = 100；
int main(void){
    int a = 10；
// 局部变量 - 大括号内部定义（局部变量优先）
// 当全局变量和局部变量名字冲突时局部优先
return 0；
}


int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    sum=  a+b;
    printf("sum = %d\n",sum);
    return 0;
}

