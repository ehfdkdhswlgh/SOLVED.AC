#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//매개변수탐색 문제

vector<long long> v;
int n;
long long m;

bool isPossible(long long mid)
{

    long long sum = 0;

    for(auto i : v)
    {
        if(i > mid)
        {
            sum += (i - mid);
        }
    }


    if(sum >= m) //길이를 더 늘릴 수 있음
    {
        return true;
    }
    else //길이를 줄여야 함
    {
        return false;
    }

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        long long input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    //매개변수
    long long left = 0;
    long long right = *(v.end() - 1);
    long long max = 0;

    while(left <= right)
    {
        long long mid = (left + right) / 2;
        
        if(isPossible(mid)) //결정함수
        {
            left = mid + 1;
            max = mid;
        }
        else
        {
            right = mid - 1;
        }
    }


    cout << max;

}