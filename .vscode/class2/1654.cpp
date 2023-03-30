#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//매개변수 탐색 알고리즘 : https://m42-orion.tistory.com/70 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    vector<int> v;

    int k, n;
    cin >> k >> n;

    for(int i = 0; i < k; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }    

    sort(v.begin(), v.end());

    long long left = 1;
    long long right = *(v.end() - 1);
    long long len = -1;

    while(left <= right) //left가 right보다 커질 때까지 반복
    {
        long long mid = (left + right) / 2;
        int count = 0;
        for(auto i : v)
        {
            count += (i / mid);
        }
        
        if(count >= n) // n개 이상 나온다면 길이를 더 늘릴 수 있다
        {
            len = mid;
            left = mid + 1;
        }
        else //n개 미만 나온다면 길이를 줄여야 한다.
        {
            right = mid - 1;
        }

    }

    cout << len;

}