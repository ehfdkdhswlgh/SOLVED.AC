#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    long long loop;
    cin >> loop;

    //카운팅 정렬 사용
    int count[10001] = {};

    //값 입력
    for(int i = 0; i < loop; i++)
    {
        int input;
        cin >> input;

        count[input]++;
    }

    //출력
    for(int i = 0; i < 10001; i++)
    {
        for(int j = 0; j < count[i]; j++)
        {
            cout << i << '\n';
        }
    }

}