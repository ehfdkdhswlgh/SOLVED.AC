#include <iostream>

using namespace std;

int n, m;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> s;

    int count = 0;

    for(int i = 0; i < m - 2 * n; i++) 
    {
        if(s[i] == 'I')
        {
            bool isI = true;
            bool isComplete = false;
            
            for(int j = i + 1; j <= i + 2 * n; j++)
            {

                if(isI && s[j] == 'O') // 이전값이 I일때
                {
                    isI = false;
                    if(j == i + 2 * n)
                    {
                        isComplete = true;
                    }

                }
                else if(!isI && s[j] == 'I') // 이전값이 O일때
                {
                    isI = true;
                    if(j == i + 2 * n)
                    {
                        isComplete = true;
                    }
                }
                else
                {
                    break;
                }
                
            }

            if(isComplete)
            {
                count++;
            }

        }
    }

    cout << count;
}