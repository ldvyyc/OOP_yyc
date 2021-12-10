#include "Parser.h"
#include <iostream>
#include <cstring>
using namespace std;
bool Num(string str) //判断是否为纯数字
{
    for (int i = 0; i < str.size(); i++)
    {
        int tmp = (int)str[i];
        if (tmp >= 48 && tmp <= 57)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void Parser::add_argument(string a, int b, string c)
{
    if (c.compare("First number") == 0)
    {
        number1 = a;
        x1 = b;
        num1 = number1.substr(2);
    }
    if (c.compare("Next number") == 0)
    {
        number2 = a;
        x2 = b;
        num2 = number2.substr(2);
    }
    if (c.compare("Third number") == 0)
    {
        number3 = a;
        x3 = b;
        num3 = number3.substr(2);
    }
}
int Parser::init(int a, char *b[])
{
    int q;
    string y[7];
    for (int i = 1; i < a; i++)
    {
        y[i] = b[i];
    }
    for (int i = 1; i < a; i++)
    {
        if (y[i].compare("--help") == 0)
        {
            cout << typ1 << endl
                 << endl
                 << typ2 << endl
                 << typ3 << endl
                 << typ4 << endl
                 << typ5
                 << endl
                 << typ6 << endl;
            exit(0);
        }
    }
    if (a == 7)
    {
        if ((Num(y[2]) != 0) && (Num(y[4]) != 0) && (Num(y[6]) != 0))
        {
            if (y[1].compare(number1) == 0 && y[3].compare(number2) == 0 && y[5].compare(number3) == 0)
                x1 = atoi(b[2]);
            x2 = atoi(b[4]);
            x3 = atoi(b[6]);
            return q;
        }
    }
    int mark1 = 99; //不是整数
    int mark2 = 99; //未添加的参数
    int mark3 = 99; //未提供值
    for (int i = 1; i < a; i += 2)
    {
        if ((y[i].compare(number1) != 0) && (y[i].compare(number2) != 0) && (y[i].compare(number3) != 0) && (y[i].compare("--help") != 0))
        {
            mark2 = i;
            break;
        }
    }
    for (int i = 2; i < a; i += 2)
    {
        if (Num(y[i]) == 0)
        {
            mark1 = i;
            break;
        }
    }
    if ((a % 2) == 0 && a > 2)
    {
        if (mark1 == 99)
        {
            mark3 = a - 1;
        }
    }
    if (mark1 == mark2 && mark2 == mark3)
    {
        for (int i = 1; i < a; i += 2)
        {
            if (y[i].compare(number1) == 0)
            {
                x1 = atoi(b[i + 1]);
            }
            if (y[i].compare(number2) == 0)
            {
                x2 = atoi(b[i + 1]);
            }
            if (y[i].compare(number3) == 0)
            {
                x3 = atoi(b[i + 1]);
            }
        }
        return q;
    }
    if (mark3 < mark1 && mark3 < mark2)
    {
        cout << typ1 << endl
             << missingc1 << y[a - 1] << missingc2 << endl;
        exit(0);
    }
    if (mark2 < mark1 && mark2 < mark3)
    {
        cout << typ1 << endl
             << wrongc << y[mark2] << endl;
        exit(0);
    }
    if (mark1 < mark2 && mark1 < mark3)
    {
        cout << typ1 << endl
             << missingc1 << y[mark1 - 1] << notz << y[mark1] << "'" << endl;
        exit(0);
    }
}
int Parser::get_argument(string d)
{
    if (d.compare(num1) == 0)
    {
        return x1;
    }
    else if (d.compare(num2) == 0)
    {
        return x2;
    }
    else if (d.compare(num3) == 0)
    {
        return x3;
    }
}