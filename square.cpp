#include <iostream>

using namespace std;

int main()
{
    // square pattern

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // abc version
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    // continue num version
    int num = 1;
    int x = 3;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    // triangle pattern
    int t = 7;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    // triangle pattern with numbers
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }

        cout << endl;
    }
    // triangle pattern with characters
    char cha = 'A';
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << cha;
        }
        cha++;
        cout << endl;
    }
    // triangle pattern ie:
    // 1
    // 12
    // 123

    int z = 6;
    for (int i = 0; i < z; i++)
    {
        int y = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << y;
            y++;
        }
        cout << endl;
    }

    // reverse triangle pattern ie:
    // 1
    // 21
    // 321

    for (int i = 0; i < 4; i++)
    {
        for (int j = (i + 1); j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    // floyd's triangle pattern
    int f = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << f;
            f++;
        }
        cout << endl;
    }

    // inverted triangle pattern:
    // 1111
    // 222
    // 33
    // 4

    int inv = 1;
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << inv;
        }
        inv++;
        cout << endl;
    }

    // Hollow Diamond pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}