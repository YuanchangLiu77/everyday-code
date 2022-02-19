#include <stdio.h>
#include <string.h>

// int main ()
// {



// return 0;    
// }


// 结构体可以让c 语言创建新的类型
struct stu{
    char name[20] ;//printf 时用%s
    int age;
    double score;
};

struct book{
    char name[20];
    float price;
    char id[30];
};

int main()
{
    struct stu s ={"张三",20,85.5 };//结构体的初始化 
    printf("%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
    struct stu *ps = &s;
    printf("2: %s %d %lf\n ", (*ps).name,(*ps).age, (*ps).score);
    printf("3: %s %d %lf\n ", ps->name,ps->age, ps->score);//箭头左边一定是结构体指针->成员变量
return 0;    
}

// 小作业

// 创建数组时，不能用变量创建
int main()
{
    int n = 10;
    int arr[n] = {0};
return 0;    
}


int main()
{
    printf("%d\n", strlen("c:\test\121"));
return 0;    
}

// 指针是变量  统称为指针变量
// static 改变的是局部变量，全局变量，和函数的生命周期


// 
int main()
{
    printf("%d\n", strlen("c:\test\121"));
return 0;    
}

// c语言中由分号隔开的就是一条语句
// else 和离得最近的 if 匹配
//  if（5 == num）； 防止少一个等号，变成了赋值

int main()
{
    int day = 0;
    scanf("%d",&day );
    switch (day)
    {
    case 1:
        printf("11\n");
        break;
    case 2:
        printf("22\n");
        break;
    case 3:
        printf("33\n");
        break;
    case 4:
        printf("44\n");
        break;
    case 5:
        printf("55\n");
        break;
    case 6:
        printf("66\n");
        break;
    case 7:
        printf("77\n");
        break;
    
    default:
        printf("wrong\n");
        break;
    }
return 0;    
}
// case后面要求是整型常量表达式， break 不一定必须加，根据需求
// switch 允许嵌套使用

// while 循环可能会碰到break和continue
// while 循环中break用于永久的终止循环
// while 循环中continue， 跳过本次循环，直接进行下一次循环（容易出现死循环），直接去判断部分，看是否进行下一次循环
//  getchar() 获取字符, 返回Ascii 码值（整数），如果在读取时遇到错误，或者文件结束 返回EOF（-1）end of file-文件的结束标志， getchar获取字符
//  putchar（） 输出字符
//  按ctrl + z时getchar 就读取结束
// 注意回车也会被getchar读取


int main()
{
    char password[20] = { 0 };
    printf("请输入密码:>");
    scanf("%s", password);
    printf("请确认密码(Y/N):>");
    // 清理缓冲区
    // getchar();//处理\n
    // 清理缓冲区中的多个字符
    int tmp = 0;
    while ((tmp = getchar())!='\n')
    {
    ;
    }
    
    int ch == getchar();
    if (ch == 'Y')
    {
    printf("确认成功\n");
    }
    else
    {
    printf("确认失败\n");
    } 
return 0;    
}

// for loop
int main()
{
for (size_t i = 0; i < count; i++)
{
    /* code */
}

return 0;    
}
// for循环里可能会出现 break 和continue 
// break直接跳出循环
// continue跳出目前循环，进入下次循环
// 不可在for循环内部改变循环变量（出现死循环）
// 前毕后开写法 E.G. for（i=0; i<10; i++）{}


// for 循环变种
// 判断部分省略=判断部分恒为真
for(;;)
{
    printf("hehe\n");
}


int x, y;
for (x = 0, y = 0; x<2 && y<5; ++x ,y++)
{
    printf("hehe\n");
}


int main()
{
    int i=0;
    int k=0;
for ( i = 0, k = 0; k=0 ; i++,k++) //k=0 赋值而不是判断， 0 为假， 所以一次都不循环
{
    k++;
}

return 0;    
}

