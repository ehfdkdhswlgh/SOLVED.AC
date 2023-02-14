#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    //아스키코드 : 대문자 65~90, 소문자 97~122
    int alphabet[26];

    //배열초기화
    for(int i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); i++)
    {
        alphabet[i] = 0;
    }

    string str;
    cin >> str;

    //알파벳 빈도수 측정
    for(int i = 0; i < str.length(); i++)
    {
       if(str[i] < 97) //대문자
       {
            alphabet[str[i]-65]++;
       }
       else //소문자
       {
            alphabet[str[i]-97]++;
       }
    }

    //최빈값 찾기
    int max = 0;
    int cnt = 0;
    int idx;

    for(int i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); i++)
    {
        if (alphabet[i] > max)
        {
            max = alphabet[i];
            cnt = 1;
            idx = i;
        }
        else if(alphabet[i] == max)
        {
            cnt++;
        }
    }

    if(cnt >= 2)
    {
        cout << "?";
    }
    else
    {
        cout << (char)(65 + idx);
    }
}