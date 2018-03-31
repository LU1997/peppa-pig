void welcome()//
{
    char a;
    printf("do you have personel id?\n");
    printf("write Y to login,N to register\n");
    scanf("%c",&a);
    if(a=='Y')
    {
        login();//denglu
    }
    else if(a=='N')
    {
        reg();//zhuce
    }
}
void reg()
{
    int name;
    int password;
    printf("your name?\n");
    scanf("%d",name);
    printf("your password?");
    scanf("%d",&password);
    printf("success!\n");
    
    
}