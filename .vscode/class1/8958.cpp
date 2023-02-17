#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int repeat;
    cin >> repeat;

    //총 반복문
    for(int i = 0; i < repeat; i++)
    {
        string str;
        cin >> str;

        int count = 1;
        int sum = 0;

        //문자열 길이만큼 반복
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] == 'O')
            {
                sum += count;
                count++;
            }
            else // 'X'
            {
                count = 1;
            }   
        }

        cout << sum << '\n';
    
    }

}