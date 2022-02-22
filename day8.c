#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    return 0;
}


// return 不能同时返回两个数据
// 函数可以嵌套调用，但是并不能嵌套定义
// 实际参数和形参可以重名
// 函数必须要先声明后使用

// 逗号表达式
// exec ((v1,v2),(v3,v4),v5,v6);// 逗号表达式传递的时逗号后的数值
// =exec(v2,v4,v5,v6);

// 乘法口诀表
// void print_table(int n)
// {
//  int i = 0;
// //  line
//  for ( i = 1; i <=n>; i++)
//  {
//     int j = 0;
//     for ( j = 0; j <=i; j++)
//     {
//         printf("%d*%d=%d", i , j ,i*j);
//     } 
//     printf("\n") ;
//  }    
// }
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     // function
//     print_table(n);
//     // 名字要体现函数的功能
//     return 0;
// }

// 递归不可无限递归


// 字符串逆序 
// my_strlen(char* str)
// {
//     int count = 0;
//     while (*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
    
// }
// void reverse_string (char* str)
// {
//     int left = 0;
//     int right = my_strlen(str)-1;
//     while(left < right)
//     {
//         char tmp = str[left]; //tmp = *(str+left)
//     str[left] = str[right];  //*(str+left)= *(str+right)
//     str[right] = tmp;//*(str+right)=tmp
//     left ++;
//     right --;
//     }
// }
// int main()
// {
//     char arr[] = "abcdef";
//     reverse_string(arr);
//     printf("%s\n", arr);
//     return 0;
// }

// 递归的话
// my_strlen(char* str)
// {
//     int count = 0;
//     while (*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
    
// }
// void reverse_string (char* str)
// {
//     char tmp = *str;
//     int len = my_strlen(str);
//     *str= *(str+len-1);
//     *(str + len - 1 )='\0';
//     if (my_strlen(str+1)>=2)
//     {
//      reverse_string(str+1);
//     }
//     *(str + len - 1 )=tmp;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     reverse_string(arr);
//     printf("%s\n", arr);
//     return 0;
// }


// int digitsum (int n)
// {
//     if (n>9)
//     {
//         return digitsum(n/10)+n%10;
//     }
//     else
//     {
//         return n;
//     }
// }

// int main()
// {
//     int num = 1729;
//     int sum = digitsum(num);
//     printf("%d\n", sum);
//     return 0;
// }


// 编写一个函数实现n的k次方，用递归实现
// double Pow(int n, int k)
// {if (k>0)
// {
//    return n*Pow(n,k-1);
// }
// else if (k==0)
// {
//     return 1.0;
// }  
// else
// return 1.0/(Pow (n,-k) )
// }
// int main()
// {
//     int n = 0;
//     int k = 0;
//     scanf("%d %d", &n, &k);
//     double ret = Pow(n,k);
//     printf("%lf\n",ret);
//     return 0;
// }

// 一维数组的创建和初始化
// 数组—— 一组相同类型元素的集合
// 数组的元素数量应该是常量，而不是变量
// 0= \0;
// 字符数组最后没有\0
// 字符串后默认放一个\0


// 一维数组的使用
// int main()
// {
//     int arr[10] = {0};
//     arr[4] = 5;//下标引用操作符
//     printf("%d\n", arr);
//     int sz = sizeof(arr)/sizeof(arr[0]);//求数组的大小 sizeof 求的是多少个byte
//     printf("%d\n",sz);
//     return 0;
// }
// 一维数组在内存中是连续存放的
// 随着数组下标的增长，地址是由低到高变化的

// 二位数组的创建和初始化 
// 二维数组创建时行可以省略但是列不可以，必须确定一行有几个元素

// 二维数组的使用


// int main()
// {
//     int arr[][4] = {{1,2},{3,4},{4,5}};
//     int i = 0;
//     int j = 0;
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; i < 4; i++)
//         {
//             printf("%d",arr[i][j]);
//         }
//        printf("\n") ;
//     }  
//     return 0;
// }

// 二维数组在数组中的存储
// int main()
// {
//     int arr[][4] = {{1,2},{3,4},{4,5}};
//     int i = 0;
//     int j = 0;
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; i < 4; i++)
//         {
//             printf("&arr[%d][%d] = %p\n",i, j, &arr[i][j]);
//         }
//     }  
//     return 0;
// }

// 二维数组在内存中也是连续存放的
// 行的内部是连续的，跨行也是连续的（必须知道列的大小）
// int main()
// {
//     int arr[][4] = {{1,2},{3,4},{4,5}};
//     int i = 0;
//     int j = 0;
//     int *p = &arr[0][0];
//     for ( i = 0; i < 12; i++)
//     {
//       printf("%d",*p) ;
//       p++;
//     } 
//     return 0;
// }


// 数组作为函数参数
// void bubble_sort(int arr[], int sz )//形参 arr本质是指针
// {
//     // 确定趟数
//     int i = 0;
//     for ( i = 0; i < sz; i++)
//     {
//         // 一趟冒泡排序的过程
//         int j = 0;
//         for ( j = 0; j < sz-1-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 // 交换
//                 int tmp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = tmp;
//             }
//         }
        
//     }
    
// }
// int main()
// {
//     int arr[] = {9,8,7,6,5,4,3,2,1,0};
//     // 排序为升序 - 冒泡排序
//      // 计算数组元素个数
//     int sz = sizeof(arr)/ sizeof(arr[0]);
//     bubble_sort(arr,sz); //数组传参的时候，传递的其实是数组首元素的地址
//     return 0;
// }

// 数组名是什么
// 数组名是首元素的地址
// 但是又两个例外
// 1. sizeof（数组名）- 数组名表示整个数组， 计算的是整个数组的单位大小，单位是字节
// 2. &数组名 - 数组名表示整个数组，取出地使整个数组的地址
int main()
{
    int arr[10] = {0};
    printf("%p\n", &arr); //1- &arr 取出的是数组的地址
    printf("%p\n", &arr+1);//+28
    printf("%p\n", arr);//2
    printf("%p\n", arr+1);//+4
    // printf("%p\n", &arr[0]);//3

    // int sz = sizeof(arr); //数组名表示整个数组
    // printf("%d\n",sz);
    // printf("%p\n",&arr[0]);
    // printf("%p\n",arr);//数组名表示的时首元素的地址
    return 0;
}
