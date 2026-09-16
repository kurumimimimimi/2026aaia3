///week02-2.cpp要使用「命名空間」
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ::cout<<"請輸入你的名字:";
    ::string name;///使用標準的字串
    ::cin>>name;
    ::cout<<name<<"你好,你會用字串了";


}

