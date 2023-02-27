#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int count, max;
    
    cin >> count >> max;

    vector<int> v;

    int usermax = 0;

    //배열에 저장
    for(int i = 0; i < count; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end()); //내림차순 정렬

    
    for(int i = 0; i < count; i++)
    {
        for(int j = i + 1; j < count; j++)
        {
            for(int k = j + 1; k < count; k++)
            {
                if(v[i] + v[j] + v[k] <= max)
                {

                    if(v[i] + v[j] + v[k] > usermax)
                    {
                        usermax = v[i] + v[j] + v[k];
                    }
                }

            }
        }
    }

    cout << usermax;

}