#include <iostream>
#include <queue>

using namespace std;

// 우선순위 큐를 사용하여 최대힙 구현

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>> q; // 최대힙 선언

    int n, x;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;

        if(x == 0)
        {
            if(q.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << q.top() << '\n';
                q.pop();
            }

        }
        else
        {
            q.push(x);
        }

    }


}