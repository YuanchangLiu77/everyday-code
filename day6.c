#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    return 0;
}



// 函数
// int main()
// {
//     char arr1[20] = {0};
//     cahr arr2[] = "hello bit";
//     strcpy(arr1,arr2);
//     printf("%s\n", arr1) ;//打印arr1 这个字符串 = %s - 以字符串的格式打印
//     return 0;
// }

// int main()
// {
//     cahr arr[] = "hello bit";
//     memset(arr, 'x',5); //把arr数组的 前五个字节设置成x
//     printf("%s\n",arr);

//     return 0;
// }

// get_max(int x, int y)
// {
//     int z = 0;
//     if(x>y)
//     z=x;
//     else
//     z=y;
//     return z;

// }
// int main()
// {
//     int a = 10;
//     int b =20;
//     // 函数的调用
//     int max = get_max(a,b);
//     printf("max = %d\n", max);


//     return 0;
// }
// 函数返回类型的地方写void 表示这个函数并不返回任何值，也不需要返回
// void swap(int *pa, int *pb)
// {
//  int z = 0;
//  z = *pa;
//  *pa= *pb;
//  *pb = z;
// }

// int main()
// {
//      int a = 10;
//     //  int *pa = &a; // pa 是指针变量
//      int b = 20;
//     //  写一个函数 - 交换两个整型变量的值
//     printf("交换前: a=%d b=%d\n", a, b);
//     swap(&a, &b);
//     printf("交换后: a=%d b=%d\n", a, b);


//     return 0;
// }
// // err！！！！！
// // 当需要更改数值时（函数内部和外部需要建立联系时）需要使用指针

//  函数的参数分为实参和形参 
// 函数调用时 调用实际参数，（函数的参数可以放常量，变量，表达式，函数等）   函数定义时，调用形式参数（只在函数内部有效）
//  传值调用： 传送变量（copy数值，但是没有必要联系，分别占有不同的内存块， 对形参的修改不会影响实参）
// 传址调用 ： 把函数外部创建变量的内存地址传递给函数的参数， 可以让函数和函数外部的变量建立联系，函数内部可以直接操作函数外部的变量


// int is_prime (int n)
// {
//     // 2->n-1之间的数字
//     int j = 0;
//     for ( j = 0; j < n; j++)
//     {
//         if(n%j == 0)
//         return 0;
//     }
//     return 1;
    
// }

// int main()
// {
// //  100-200之间的素数
// int i= 0;
//  for ( i = 100; i <= 200; i++)
//  {
//      if(is_prime(i) == 1)
//      {
//          printf("%d", i)
//      }
//  }
//     return 0;
// }


// int isleap_year(int n)
// {
//  if((n%4 == 0 && n%100 != 0)|| (n % 400==0)){
//    return 1 ; 
//  }
//  else 
//  return 0;
// }
// int main()
// {
//     int y = 0;
//     for ( y = 1000; y <=2000; y++)
//     {
//      if (isleap_year(y) == 1)
//      {
//         printf("%d\t", y);
//      }
     
//     }
    
//     return 0;
// }
// #include<stdio.h>
// int binary_search(int a[], int k, int s)
// {
//     int left = 0;
//     int right = s-1;
    
//     while (left<=right)
//     {
//        int mid = (left +right )/2; 
//        if(a[mid]>k)
//     {
//         right = mid-1;
//     }
//     else if(a[mid]<k)
//     {
//         left = mid+1;
//     }
//     else 
//     {
//         return mid;
//     }
//     } 
//     return -1 ;//找不到了 
// }
// int main()
// {
//     int arr[] =  {1,2,3,4,5,6,7,8,9,10};
//     int key = 7;
//     // 找到了就返回位置的下标
//     // 找不到返回-1
//     int sz = sizeof(arr)/ sizeof(arr[0]);
//      数组arr 传参传递的不是数组本身，仅仅传过去了数组首元素的地址
//     int ret = binary_search(arr, key,sz);
//     if (-1 ==ret)
//     {
//         printf("找不到\n");
//     }
//     else
//     {
//         printf("找到了,下标是: %d\n", ret);
//     }
// return 0;
// }



// void add(int *p){
//     (*p)++;
// }

// int main()
// {
//     int num = 0;
//     add(&num);
//     printf("%d\n",num);//1
//     add(&num);
//     printf("%d\n",num);//2
//     add(&num);
//     printf("%d\n",num);//3
//     return 0;
// }



// 函数的嵌套调用和链式访问
// 函数不能够嵌套定义，但是可以嵌套调用
// 链式访问：把一个函数的返回值，当作另一个函数的参数
//  printf（返回的是打印在频幕上的字符的个数）
// 使用函数之前 可以提前声明一下函数 （先声明一下后使用）
//  通过include“文件.h” 引用别人的函数 函数的声明要放在头文件里，函数定义放在.c文件里


// 函数的递归（recursion） 函数在直接或者间接调用自己的过程叫做递归（大事化小）
// 练习1： 接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入1234， 输出：1 2 3 4
// void print(unsigned int n)
// {
// if (n>9) //判断语句控制递归函数的开始和结束， 限制条件
// {
//     print(n/10);//保证递归在变小，逼近（限制）结束条件
// }
//     printf("%d ",n%10);
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%u", &num); //递归 - 函数自己调用自己
//     print(num); //print 函数可以打印参数部分数字的每一位
//     return 0;
// }
// 可能会出现栈溢出的情况（栈区空间溢出）
// 1.不能死递归，都有跳出条件，每次递归逼近跳出条件
// 2.递归层次不能太深

// 练习2： 编写函数不允许创建临时变量，求字符串长度
// int my_strlen(char*str)
// {
//     int count= 0;
//     while(*str !='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// int main()
// {
//     char arr[] = "bit";
//     // ['b']['i']['t']['\0']
//     // 模拟实现一个strlen函数
//     printf("%d\n", my_strlen(arr));
//     return 0;
// }

// 无临时变量
// int my_strlen(char*str)
// {
//     if (*str!='\0')
//     {
//         return 1+ my_strlen(str+1);
//     }
//     else 
//     return 0;
// }
// int main()
// {
//     char arr[] = "bit";
//     // ['b']['i']['t']['\0']
//     // 模拟实现一个strlen函数
//     printf("%d\n", my_strlen(arr));
//     return 0;
// }

// 函数递归不要用 i++ 或者++i 这样的语句

// 递归与迭代
// 练习三： 求n的阶乘

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = 1;
//     int i = 0; 
//     for ( i = 1; i <=n; i++)
//     {
//         ret = ret *i;
//     }
//     printf("%d\n",ret);
//     return 0;
// }
// 阶乘
// int Fac(int n)
// {
//     if(n<=1)
//     return 1;
//     else
//     return n*Fac(n-1);
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = Fac(n);
    
//     printf("%d\n",ret);
//     return 0;
// }
// // 有议席功能可以使用迭代的方式实现，也可以使用递归地方式实现


// 练习 4 求第n个斐波那契数（不考虑溢出）
// int Fib(int n)
// {
//     if(n<=2)
//     return 1;
//     else
//     return Fib(n-1)+Fib(n-2);
// }
// int main()
// {
//     int n = 0 ;
//     scanf("%d", &n)
//     int ret = Fib(n);
//     printf("%d\n",ret)
//     return 0;
// }
// 效率太低，进行了重复大量的计算
int count = 0;
// 递归可以求解，但是效率太低
int Fib(int n)
{
    // 计算第三个斐波那契数的计算次数统计
//     if(n==3)
//         count ++;
//     if(n<=2)
//         return 1;
//     else
//         return Fib(n-1)+Fib(n-2);
// }
// int main()
// {
//     int n = 0 ;
//     scanf("%d", &n);
//     int ret = Fib(n);
//     printf("%d\n", ret);
//     printf("count = %d\n",count);
//     return 0;
// }

// 用迭代的方式
// int Fib (int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//  while (n>2)
//  {
//     c=a+b;
//     a=b;
//     b=c;
//     n--;
//  }
//  return c;
// }
// int main()
// {
//     int n = 0 ;
//     scanf("%d", &n);
//     int ret = Fib(n);
//     printf("%d\n", ret);
//     return 0;
// }

// 使用递归有可能会栈溢出，会效率低下，这个时候就要考虑使用迭代的方式
