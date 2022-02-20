#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
int main()
{



    return 0;
}

// do while 先执行循环在判断
do
{
    /* code */
} while (/* condition */);

int main()
{
    int i =1;
    do
    {
        if(i==5)
        break;//continue
        printf("%d",i);
        i++;
    } while (i<=10);
    

    return 0;
}



// 练习1  计算n的阶乘
int main()
{
    int i=0;
    int n = 0;
    int ret = 1;
    int sumn = 0;
    for ( n = 1; n <= 10; n++)
    {
        ret = 1;//计算n的阶乘之前ret要被reset to 1
            for ( i = 1; i <= n; i++)
            {
            ret*=i;
            }  
    sumn +=ret; 
    }
    
    printf("%d\n",sumn);


    return 0;
}
// or
int main()
{
    int i=0;
    int n = 0;
    int ret = 1;
    int sumn = 0;
    for ( n = 1; n <= 10; n++)
    {
        ret *=n;//计算n的阶乘之前ret要被reset to 1
        sumn +=ret; 
    }
    
    printf("%d\n",sumn);


    return 0;
}

// 在一个有序数组中查找某个数字n  //折半查找法， 二分查找效率高

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 1 ;//要查找的数字
    //在 arr 这个有序的数组中查找k（7）的值
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
while (left<=right)
{
   int mid = (left + right)/2;
if (arr[mid]<k)
{
    left = mid +1;
}
else if (arr[mid]>k)
{
    right = mid -1;
}
else
{
    printf("找到了:下标是%d\n",mid);
    break;
}
if (left>right)
{
    printf("找budao");
}

}  
    return 0;
}

// 编写代码，演示多个字符从两端移动，揭露一串字符
int main()
{
    char arr1[] = "welcome to bit !!!!!!";
    char arr2[] = "#####################";
    int left = 0;
    int right = strlen(arr1) - 1;
    while (left<=right)
    {
    arr2[left] = arr1[left];
    arr2[right] = arr1[right];
    printf("%s\n",arr2);
    Sleep(1000);//睡眠一秒
    system("cls")//清空屏幕
    printf("%s\n",arr2);
    left++;
    right--;
    }
    return 0;
}


// 编写代码实现，模拟用户登陆情景，并且只能登陆三次。（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次军输入错误，则退出程序）
int main()
{
    int i = 0;
    // 假设正确密码是字符串“12356”
    char password[20] = {0};
    for ( i = 0; i <= 3; i++)
    {
        printf("请输入密码:");
        scanf("%s", password);//数组名不需要取地址！！！！！
        if (strcmp(password,"123456")==0))//err-两个字符串比较，不能使用==，应该使用strcmp
        {
           printf("chenggong\n");
           break;
        }
        else{printf("密码错误,重新输入\n");}
        if (i==3)
        {
            printf("tuichu\n");
        }  
    }
    return 0;
}

// 猜数字游戏
// 1. 自动产生一个1-100之间的随机数
// 2.猜数字
// a。猜对了，恭喜你游戏结束
// b。 猜错了，会告诉你大了还是小了，继续猜，知道猜对
// 3. 游戏可以一直玩，除非退出游戏
void menu(){
    printf("********************\n");
    printf("*******1.play*******\n");
    printf("*******0.exit*******\n");
    printf("********************\n");
}
void game(){
    // 生成随机数
    // 时间在发生变化，直接用时间戳
    
    int ret = rand()%100+1;//rand 函数返回了一个0-32767之间的数字, 模100+1 可以把范围缩小到0-100
    // printf("%d\n",ret);
    int guess = 0;
    while (1)
    {
        printf("猜数字\n");
        scanf("%d", &guess);
        if (guess<ret)
        {
            printf("猜小了\n");
        }
        else if (guess>ret)
        {
            printf("猜da了\n");
        }
        else{
            printf("猜dui了\n");
            break;
        }
        
    }
    
}
int main()
{
    int input;
    srand((unsigned int)time(NULL));
    do
    {
        menu();//打印菜单
        printf("请选择\n");
        scanf("%d",&input)
        switch (input)
        {
        case 1:
            printf("猜数字\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("错误,重新选择\n");
            break;
        }
    } while (input);
    


    return 0;
}


// 分支循环作业讲解
// 辗转相除法
int main()
{
    int m;
    int n;
    scanf("%d%d", &m, &n);
    int t;
    while (t=m%n)
    {
        m=n;
        n=t;
    }
    printf("最大公约数: %d\n",n);
    // 最小公倍数 = m*n/最大公约数
    return 0;
}


//  goto语句 
int main()
{
    flag:
    printf("hehe\n");
    printf("haha\n");
goto flag
    return 0;
}


// 关机程序
// 只要运行起来，电脑就在一分钟内关机，如果输入我是猪，就取消关机！
//  shutdown-s -t 60 60秒关机
//  shutdown -a 取消关机
int main()
{
    // 关机
    // system（）-执行系统的命令
    char input[20] = { 0 };
    system("shutdown-s -t 60");
again:
    printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪就取消关机\n");
    scanf("%s",input)
    if(strcmp(input ,"我是猪")){//两个字符串是不能使用== 比较的， 应该使用strcmp（） string compare
        system("shutdown -a" );

    }
    else{
        goto again;
    }
    return 0;
}
// or
int main()
{
    // 关机
    // system（）-执行系统的命令
    char input[20] = { 0 };
    system("shutdown-s -t 60");
while (1)
{
   printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪就取消关机\n");
    scanf("%s",input)
    if(strcmp(input ,"我是猪")){//两个字符串是不能使用 == 比较的， 应该使用strcmp（） string compare
        system("shutdown -a" );
        break;
    }
}
    return 0;
}

// goto 语句在多层嵌套的循环中，可以帮助快速跳出，比break跳出一整个循环指令要更方便
// goto 语句只能在一个函数范围内专跳，不能跨函数（多个函数的情况下）