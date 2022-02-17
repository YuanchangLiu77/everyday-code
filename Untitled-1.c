#include <stdio.h>
#include <string.h>
#define MAX 10000;
int main(){
    printf("hehe\n");
    int a = 10;
    printf("a=%d\n",a);
    return 0;
}

// 变量的作用域(变量在哪里可以使用那里就是作用域)和生命周期
// 局部变量的作用域： 就是变量所在的局部范围
// 全局变量的作用域： 整个工程
extern int g; //声明整个工程其他地方的全局变量
int g = 2021;

int main(){
    printf("g=%d\n",g);
    printf("hehe\n");
    {int a = 10;
    printf("g=%d\n",g);
    printf("a=%d\n",a);}
    printf("g=%d\n",g);
    return 0;
}

// 生命周期
// 变量的生命周期：变量的创建和销毁之间的时间段
// 局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
// 全局变量的生命周期：程序的生命周期
int main(){
    {
        int a=10;
        printf("%d\n" ,a);
    }
    // 除了括号以后生命周期结束
return 0;
}

// 常量：

int main(){
// 1.字面常量   
//    3.14;
//    10;
//    'a';
//    "abcdef";

// const 修饰的常变量
// const int num = 10; //变量
// num = 20;
// printf("num = %d\n", num);//20


int arr[10] = {0}; //10 elements
const int n = 10;
int arr2[n] = {0}; // n 是变量的， 不可以使用


 //3.#define 定义的标识符常量
 int n = MAX
 printf("n=%d\n",n)
  return 0;}


// 性别
enum sex//枚举关键词 enum
{
    //这种枚举类型的变量的可能取值
MALE=3,//赋初值,
FEMALE,
SECRET 
};
int main(){
    //  枚举常量
// 可以一一例举的常量
enum sex s=MALE;
// 但是不可以在使用时更改枚举常量的数值
// MALE = 3；//err
printf("%d\n",MALE);
printf("%d\n",FEMALE);
printf("%d\n",SECRET);
    return 0;
}

// 字符串
// 字符串就是一串字符 - 用双引号括起来的一串字符
int main(){
    "abcdef";
    "hello bit";
    return 0;
}

int main(){
    // 字符数组 - 数组是一组相同类型的元素
char arr[] = "hello";
// 总共6个元素其中包括结束符\0(在字符穿的结尾位置隐藏了一个\0字符
    char arr1[] = "abc";
    char arr2[] ={'a','b','c'};
    // 打印字符串
    printf("%s\n",arr1);//四个元素多了\0
    printf("%s\n",arr2);//不会自动结束，所以在c后会生成乱码，无法读取 除非改成如下
    // char arr2[] ={'a','b','c','\0'};
    printf("%s\n",strlen(arr1)); //3
    printf("%s\n",strlen(arr2)); //随机值 随机找\0

    // 求字符串长度
    int len = strlen("abc"); //strlen 需要头文件#include <string.h>
    // 使用strlen 求字符串长度时 \0不算在里面
    printf("%s\n",len);// 3

    
    return 0;
}


// 转义字符
int main(){
 printf("c:\test\test.c");
    // \t就是转义字符，转变了字符原来的意思
    printf("ab\ncd");
    printf("%c\n",'a');
    printf("%c\n",'\'');//加\进行转义
    printf("%s\n","abc");
    printf("%s\n","a");
    printf("%s\n","\"");//加\进行转义

     printf("c:\\test\\test.c"); //\t水平制表符=tab

     printf("\a\a\a");//触发蜂鸣
     //\n 换行 \r 回车  \t 水平制表符 \v 垂直制表符
     //\ddd  ddd表示1-3八进制数字 如：\103X
     //\xdd  dd表示2个十六进制数字 如：\x300
    return 0;
}

int main(){
 printf("%c\n",'\130'); //8 进制的130是10进制的  X ==ASCII 88
 printf("%d\n",'');//A - 10进制65 - 8进制是：101
// 看ASCII 码表

printf("%c\n",'\x30');//48-'0'
    return 0;
}

// e.g.
int main(){
    printf("%d\n", strlen("c:\test\328\test.c")) //14 /328 8不能算进去 其他的正常计算 \t 算一个
    return 0;
}

// 注释：解释复杂代码 // //是c++注释风格

/*
int b=0;
*/ //c 的注释风格（不支持嵌套注释）


// 选择语句
int main (){
    int input;
    printf("加入比特:>")
    printf("你要好好学习吗(1/0)")
    scanf("%d",&input);
    if (input==1)
    {
     printf("hao offer\n"); 
    }
    else
    {
    printf("sell sweet potato\n");
    }
    return 0; 
}


// 循环
int main(){
    int line = 0;
    while (line <30000)
    {
       printf("写代码:%d\n",line);
       line++;
    }
    if (line==30000)
    {
     printf("好offer:%d\n",line);
    }
    
    

    return 0;
}
