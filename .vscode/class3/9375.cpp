#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n, k; 
    string input1, input2;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        map<string, int> m;

        cin >> k;

        for(int j = 0; j < k; j++)
        {
            cin >> input1 >> input2;

            if(m.find(input2) != m.end()) // 값이 있으면
            {
                m.insert({input2, m[input2]++});
            }
            else // 값이 없으면
            {
                m.insert({input2, 1});
            }
        }

        int sum = 1;

        //모자 2종류 , 안경 1종류 인 경우
        //(2 + 1) * (1 + 1) - 1 이 총 경우의 수다 (-1는 모두 안입었을 경우) (+1 는 안입었을 경우를 경우의수에 넣기위해 처리)

        for(auto iter: m)
        {
            sum *= (iter.second + 1); //안입었을경우를 위해 + 1 처리
        }

        cout << --sum << '\n';

    }

}