// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含
#include<ctime>
#include <iostream>
using namespace std;
int main()
{
    //switch语句给电影打分
    //经典10-9 8-7非常好，6-5一般 5一下烂片
    cout << "请给电影评分" << endl;
    int score = 0;
    cin >> score;
    cout << "您打的分数为" << score << endl;
    //根据用户输入的分数来提示用户最后的结果

    int num = 0;
    //while括号内写循环结束条件
   /* while (num < 10)
    {
        num++;
        cout << num << endl;
    }*/
    //系统随机生成1-100 ，提示猜大了还是小了，猜对了提示胜利
    // 添加随机数种子，利用时间生成随机数
    srand((unsigned int)time(NULL));

    //系统生成随机数
    num = rand() % 100+1;
   // cout << num << endl;
    //玩家猜测
    int val = 0;
    cout << "请输入猜测数字" << endl;
    int i = 0;
    while (i<5)
    {
        cin >> val;
        i++;
        if (val > num)
        {
            cout << "猜测过大" << endl;

        }
        else if (val < num)
        {
            cout << "猜测过小" << endl;
        }
        else
        {
            cout << "恭喜猜对了" << endl;
            break;
        }

    }
    
   
    
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
