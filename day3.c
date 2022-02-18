#include <stdio.h>
// 函数
int main()
{

    return 0; 
}

Add(int x, int y){
    int z=0;
    z=x+y;
    return z;
    }


int main(){
    int num1;
    int num2;
    scanf("%d %d",&num1, &num2);
    // 函数的方式
    int sum = Add(num1, num2);
    int sum = num1+ num2;
    printf("%d\n", sum);
    return 0;
    
}

// 数组， 一组相同类型的元素的集合
// 10个整型1-10
// 数组使用下标来访问
int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //下标从0-数组最后 0-9
char ch[5] = {'a','b','c'};//不完全初始化，剩余的默认为0
int i = 0;
while (i<10)
{
    printf("%d",arr[i]);
    i++;
}


// 操作符
// +-*/%
// 《》
float a= 9/2.0; //必须在数值有一个是小数的情况下才能算出小数来
int a= 9%2; //取模（取余数）


int a = 2;
int b= a <<1;
// 左移操作符--移动的是二进制位

// 位操作符： ：& 按位与，|按位或， ^按位异或 

int main()
{
 int a = 2;
 a = a+5;
 a=6;
 a+=5;
 a=a-3;
 a-=3;
 a=a%3;
 a%=3;   
    return 0;
}

// 单目操作符
// sizeof 计算类型和变量的大小
// ！ 真变假假变真 
//  --
//  ++
// ~对一个术的二进制位按位取反, 把所有二进制位中的数字，1变0，0变1
// 整数a 0 二进制：000000000000000000000000000000000000 so ~a：111111111111111111111111111111111111
// 整数在内存中存储的是补码~
// 一个整数的二进制表示有三种：
// 原码，反码，补码
// e.g. 复数的计算方式 -1:1(最高位是1 表示负数)  10000000000000000000000000000001（-1的原码）
                                        //    11111111111111111111111111111110（反码）
                                        //    11111111111111111111111111111111（补码） 补码等于反码加一
// 正整数原码，反码，补码相同
int main()
{
    int a = 0;
    printf("%d\n",~a);

    return 0; 
}


int main()
{
    int a = 10;
    int b = ++a;//前值加加， 先++后使用
    printf("%d\n", b);
    return 0; 
}

int main()
{
    int a = 10;
    int b = a++;//后置++， 先使用 后++
    printf("%d\n", b);
    return 0; 
}
// -- 同理

// （类型）强制类型转换
int main()
{
    int a = (int)3.14;
    printf("%d\n",a);
    return 0; 
}

// 逻辑操作符 && 逻辑与 ||逻辑或
// 条件操作符（3目操作符   exp1?exp2:exp3） exp1成立 exp2 计算 整个表达式的结果是exp2的结果
                                            // exp1 不成立exp3计算，整个表达式的结果是exp3的结果

int main()
{
    int a = 0;
    int b = 3;
    int max = 0;
    max= (a>b)?a:b;
    // if (a>b){  max = a;}  
    // else { max = b;}

    // a>b?a:b;
       
    printf("%d\n", max);
    return 0; 
}

// 逗号表达式- 逗号隔开的一串表达式
int main()
{
(2,3+5,6);
    int a = 0;
    int b = 3;
    int c = 5;
                // a=5 c=1 b=3
    int d = (a=b+2,c=a-4,b=c+2));
    // 逗号表达式，从左往右以此计算
    // 整个表达式的结果是最后一个表达式的结果
    return 0; 
}

// 下标引用， 函数调用，和结构成员操作符 [], (),.,->
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}
    printf("%d\n", arr[5]);//arr[5]下标引用操作符
    return 0; 
}

int main()
{
    printf("hehe");// 函数调用的时候，函数名后面（）就是函数调用操作符
    return 0; 
}

// 常见关键字
// auto 自动- 每个局部变量都是auto修饰的
// break case continue default do enum（枚举）extern（声明外部符号） goto register（寄存器关键字） signed(有符号的，unsigned 无符号的)， static（静态的），struct， union（联合体/共用体） void(空的) volatile， typedef（类型定义）
int main()
{
    register int num = 10: //建议num的存放在寄存器中 大量且频繁被使用的数据放在寄存器中，提升效率
    return 0; 
}
// define include 不是关键字

// typedef 类型重定义
typedef unsigned int u_int;
int main()
{
   unsigned int num = 100;
   u_int num2 = 200;
    return 0; 
}


// static - 静态的
// 1.static 修饰局部变量 -改变了局部变量的生命周期（改变了变量的存储类型）=全局变量
// 2. 修饰全局变量
// 3. 修饰函数
void test(){
    static int a = 1; //
    a++;
    printf("%d\n",a);
}
int main()
{
   int i=0;
   while (i<10)
   {
       test();
       i++;
   }
   
    return 0; 
}


// 2. static 修饰全局变量 ， 使全局变量只能在自己所在的源文件内部可以使用，其他源文件不能使用
// 全局变量在其他源文件内部可以使用，是因为全局变量具有外部连接属性，但是被static修饰以后就变成了内部链接属性，就不能连接到静态的全局变量了！
int g=2022;

extern int g;//extern 声明外部符号和变量的
int main()
{
    printf("%d\n",g)
    return 0; 
}


static int g=2022;

extern int g;//extern 声明外部符号和变量的
int main()
{
    printf("%d\n",g)
    return 0; 
}



// 3. 修饰函数 , static 秀实函数，使得函数只能在自己所在的源文件内部使用，不能再其他源文件内部使用
// 本质上：static 时将函数的外部连接属性变成了内部连接属性（和static 修饰全局变量一样！）
// 声明函数
extern int add(int x, int y);

int add(int x , int y){
    return x+y;
}


int main (){
    int a =10;
    int b = 20;
    int sum = add(a ,b);
    printf("sum= %d\n",sum);
    return 0;
}

extern int add(int x, int y);

static int add(int x , int y){
    return x+y;
}


int main (){
    int a =10;
    int b = 20;
    int sum = add(a ,b);
    printf("sum= %d\n",sum);
    return 0;
}


// define 定义常量和宏 - 预处理指令
// 定义符号
#define max 1000


int main (){
printf ("%d\n", max);
    return 0;
}

// 定义宏
#define ADD(X,Y) X+Y//#define ADD(X,Y) ((X)+(Y))

int main (){
printf ("%d\n", ADD(2,3));
    return 0;
}

int main (){
printf ("%d\n", 4*ADD(2,3));//变成了 4*2+3
    return 0;
}

// 指针：就是地址 
// 一个内存单元是一个字节 1 byte 8 bits
int main (){
    int a = 10 ; //a在内存中分配4 个字节
    printf ("%p\n", &a);// %p 打印地址
    int * pa = &a;//pa 是用来存放地址的， 在c 语言中pa 叫指针变量
    // *代表pa 是指针变量
    // int 说明pa执行的对象使int 类型的
    char ch = 'w';
    char * pc = &ch;
    return 0;
}

int main (){
    int a = 10;
    int * pa = &a;
    *pa = 20; //*解引用操作 *pa 就是通过pa 里面的地址找到a
    printf ("%d\n", a);
    return 0;
}
// 指针变量的大小: 指针的大小是相同的，指针是用来存储地址的，指针需要多大空间，取决于地址的储存需要多大空间
// 64位 64 bit - 8 byte
int main (){
    printf ("%d\n", sizeof(char*));
    printf ("%d\n", sizeof(short*));
    printf ("%d\n", sizeof(int*));
    printf ("%d\n", sizeof(long*));
    printf ("%d\n", sizeof(long long*));
    printf ("%d\n", sizeof(float*));
    printf ("%d\n", sizeof(double*));
    return 0;
}