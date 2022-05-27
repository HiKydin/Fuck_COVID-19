#include "initdata.h"
#include "mainInterface.h"
#include "pushData.h"

int main()
{
    initData();//加载本地数据库
    mainInterface();//用户交互
    pushData();//保存数据库
    return 0;
}