#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int cnt;
    cin >> cnt;

    //총반복
    for(int i = 0; i < cnt; i++)
    {
        int repeat;
        cin >> repeat;

        string str;
        cin >> str;

        //각 문자 만큼 반복
        for(int j = 0; j < str.length(); j++)
        {
            //repeat만큼 반복
            for(int k = 0; k < repeat; k++)
            {
                cout << str[j];
            }
        }
        cout << '\n';
    
    }

}