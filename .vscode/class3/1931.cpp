#include <iostream>
#include <algorithm>

using namespace std;

int n, start, ed;

struct Meeting
{
    int start;
    int end;

    Meeting(int _start, int _end)
    {
        start = _start;
        end = _end;
    }

    Meeting()
    {
        start = 0;
        end = 0;
    }

    bool operator<(const Meeting &m) const
    {
        if(end == m.end)
        {
            return start < m.start;
        }
       return end < m.end;
    }

};

Meeting arr[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> start >> ed;
        arr[i] = Meeting(start, ed);
    }

    sort(arr, arr + n);

    int count = 1;
    int now = arr[0].end;

    for(int i = 1; i < n; i++)
    {
        if(arr[i].start >= now)
        {
            count++;
            now = arr[i].end;
        }
    }

    cout << count;


}