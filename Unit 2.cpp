//
//  main.cpp
//  C++
//
//  Created by 🌲 🐷❌ on 2023/12/19.
//

#include <iostream> //预处理器编译指令

using namespace std;

/* 第二章(1)
int main()
{
 
    string address;
    string name;
 
    cout << "输入你的姓名：" << endl;
    cin >> name;
 
    cout << "输入你的地址：" << endl;
    cin >> address;
    
    cout << "你的姓名是：" << name << " 你的地址是：" << address << endl;
    
    return 0;

}
*/

/* 第二章(2)
double Ma(double);
int main()
{
    cout << "请输入Long的值：";
    double Long;
    cin >> Long;
    cout << "结果为：" << Ma(Long) << "码。" << endl;
    
    return 0;
}

double Ma(double x)
{
    return x * 120;
}
*/

/* 第二章(3)
void Three()
{
    cout << "Three blind mice" << endl;
    cout << "Three blind mice" << endl;
}

void See()
{
    cout << "See how they run" << endl;
    cout << "See how they run" << endl;
}

int main()
{
    Three();
    See();
}
*/

/* 第二章(4)
int birth(int);

int main()
{
    cout << "Enter your age: ";
    int age;
    cin >> age;
    
    cout << "Your age in months is " << birth(age) << "." << endl;
    
    return 0;
}

int birth(int x)
{
    return x * 12;
}
*/

/* 第二章(5)
double celsius(double);

int main()
{
    cout << "Pleace enter a Celsius value: ";
    int count;
    cin >> count;
    cout << count << " degrees Celsius is " << celsius(count) << " degrees Fahrenheit." << endl;
    return 0;
}

double celsius(double x)
{
    return x * 1.8 + 32.0;
}
*/

/* 第二章(6)
double lightYears(double);

int main()
{
    cout << "Enter the number of light years: ";
    double count;
    cin >> count;
    cout << count << " light years = " << lightYears(count) << " astronomical units." << endl;
    
    return 0;
}

double lightYears(double x)
{
    return x * 63240;
}
*/

/* 第二章(7)
void hours(int);
void minutes(int);

int main()
{
    cout << "Enter the number of hours: ";
    int years;
    cin >> years;
    
    cout << "Enter the number of minutes: ";
    int min;
    cin >> min;
    
    hours(years);
    cout << ":";
    minutes(min);
    cout << endl;
    
    return 0;
}

void hours(int h)
{
    cout << h;
}

void minutes(int m)
{
    cout << m;
}
*/

