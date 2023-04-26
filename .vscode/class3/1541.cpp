#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;
    string str;
    string tmp = "";
    cin >> str;
    bool isMinus = false;

    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] == '-' || str[i] == '+' || i == str.size())
        {

            if(isMinus)
            {
                sum -= stoi(tmp);
            }
            else
            {
                sum += stoi(tmp);

                if(str[i] == '-')
                {
                    isMinus = true;
                }
            }

            tmp = "";
        }
        else
        {
            tmp += str[i];
        }

    }
    cout << sum;
}