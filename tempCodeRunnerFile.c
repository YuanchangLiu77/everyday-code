int my_strlen(char*str)
{
    if (*str!='\0')
    {
        return 1+ my_strlen(str+1);
    }
    else 
    return 0;
}
int main()
{
    char arr[] = "bit";
    // ['b']['i']['t']['\0']
    // 模拟实现一个strlen函数
    printf("%d\n", my_strlen(arr));
    return 0;
}
