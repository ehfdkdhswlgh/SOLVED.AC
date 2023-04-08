#include <iostream>

using namespace std;

//집합의 표현 -> 비트마스크 사용
//https://travelbeeee.tistory.com/451



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int s = 0;
    int roop;
    cin >> roop;

    for(int i = 0; i < roop; i++)
    {
        string str;
        cin >> str;

        if(str == "add")
        {
            int x;
            cin >> x;
            s = s | (1 << x);
        }
        else if(str == "remove")
        {
            int x;
            cin >> x;
            s = s & ~(1 << x);
        }
        else if(str == "check")
        {
            int x;
            cin >> x;
            
            if(s & (1 << x)) 
            {
                cout << 1 << '\n';
            }
            else 
            {
                cout << 0 << '\n';
            }
        }
        else if(str == "toggle")
        {
            int x;
            cin >> x;
            s = s ^ (1 << x);
        }
        else if(str == "all")
        {
            s = s | (1 << 21) - 1;
            //ex) 10000(2) - 1(2) = 1111(2)
        }
        else if(str == "empty")
        {
            s = 0;
        }
    }



}