#include <iostream>
#include <queue>

using namespace std;


struct AbsHeap
{
    int abs;
    int sign;
    AbsHeap(int _abs, int _sign) : sign(_sign)
    {
        if(_abs < 0)
        {
            abs = -_abs;
        }
        else
        {
            abs  = _abs;
        }
    };

    bool operator< (const AbsHeap second) const 
    {

        if(abs > second.abs)
        {
            return true;
        }
        else if(abs == second.abs)
        {
            if(sign > second.sign)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<AbsHeap> pq; 
    int n, input;


    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input == 0)
        {
            if(pq.empty())
            {
                cout << 0 << '\n';
            }
            else if(pq.top().sign > 0)
            {
                cout << pq.top().abs << '\n';
                pq.pop();
            }
            else
            {
                cout << -pq.top().abs << '\n';
                pq.pop();
            }
        }
        else
        {
            if(input > 0)
            {
                pq.push(AbsHeap(input, 1));
            }
            else
            {
                pq.push(AbsHeap(input, -1));
            }
        }

    }

}