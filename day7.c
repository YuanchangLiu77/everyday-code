#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    return 0;
}



// 作业
// 1-100中出现了多少个数字9
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for ( i = 1; i <= 100; i++)
//     {
//         if (i%10 == 9)
//         {
//             count++;
//         }
//         if (i/10 ==9)
//         {
//             count++;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }

// Q2
// int main()
// {
//     int i = 0;
//     double sum = 0;
//     int flag = 1;
//     for ( i = 1; i <=100; i++)
//     {
//         sum +=flag *1.0/i;
//         flag = -flag;
//     }
//     printf("%lf\n" ,sum);
    
//     return 0;
// }

// 求十个整数中的最大值
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int max = arr[0];//不要随便设置max
//     int i = 0;
//     for ( i = 0; i < 10; i++)
//     {
//         if (arr[i]>max)
//         {
//             max = arr[i];
//         }
        
//     }
//     printf("%d\n", max);
//     return 0;
// }

// 输出乘法口诀表
// int main()
// { 
//     int  i = 1;
    
//     for ( i = 0; i <=9; i++)
//     {
//         int j =0;

//         for (j = 1; i <=i; j++)
//         {
//             printf("%d*%d = %-2d", i , j, i*j);//-2d左对齐，2d 右对齐
//         }
//         printf("\n")
//     }
    
//     return 0;
// }


// 函数： 高内聚函数足够的独立，低耦合跟别人不要有牵连
// 尽量不使用全局变量
// 函数参数设计时参数不宜过多
// 设计函数时，尽量做到谁申请的函数谁来释放
// 函数必须有参数和返回值
// 在不同的函数中可以使用相同名字的变量
// 函数的形参是放在栈区中的
// 函数内定义的变量只在函数内部生效（局部变量）
// 复合语句中定义的变量只在相关括号中生效

