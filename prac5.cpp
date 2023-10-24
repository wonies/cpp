#include <iostream>

int myFun(int a = 10)
{
    return a + 1;
}


int myFun(void)
{
    return 10;
}


int main(void)
{
    myFun(1);
    myFun();
    myFun();

}