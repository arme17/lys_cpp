// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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
    switch (score)
    {
    case 10:
        cout << "您认为经典电影" << endl;
        break;
    case 9:
        cout << "经典" << endl;
        break;
    case 8:
        cout << "非常好" << endl;
        break;
    case 7:
        cout << "非常好" << endl;
        break;
    case 6:
        cout << "一般" << endl; 
        break;
    case 5:
        cout << "一般" << endl;
        break;
    default:
        cout << "一般" << endl;
        break;
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
