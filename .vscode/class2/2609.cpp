#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input1, input2;
    cin >> input1 >> input2;

    //최대공약수
    if(input1 > input2)
    {
        for(int i = input2; i > 0; i--)
        {
            if(input1 % i == 0 && input2 % i == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }
    else // input1 <= input2
    {
        for(int i = input1; i > 0; i--)
        {
            if(input1 % i == 0 && input2 % i == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }


    //최소공배수
    if(input1 > input2)
    {
        int i = input1;

        while(true)
        {
            if(i % input2 == 0)
            {
                cout << i << '\n';
                break;
            }
            i += input1;
        }

    }
    else // input1 <= input2
    {
        int i = input2;

        while(true)
        {
            if(i % input1 == 0)
            {
                cout << i << '\n';
                break;
            }
            i += input2;
        }

    }

}