#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int remains[42];

    //배열 초기화
    for(int i = 0; i < 42; i++)
    {
        remains[i] = 0;
    }

    //10개의 숫자 입력받기
    for(int i = 0; i < 10; i++)
    {
        int input;
        cin >> input;

        int remain = input % 42;

        remains[remain]++;
    }

    int count = 0;

    //서로 다른 값 개수 측정
    for(int i = 0; i < 42; i++)
    {
        if(remains[i] != 0)
        {
            count++;
        }
    }

    cout << count;
    
}