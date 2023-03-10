#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;

    vector<int> v;

    for(int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    
    vector<int>::iterator iter = v.begin();


    cout << "<";

    while(v.size() != 0)
    {
        for(int i = 0; i < k - 1; i++)
        {
            if(iter != (v.end() - 1)) //마지막원소 미만이면
            {
                iter++;
            }
            else //마지막원소이면
            {
                iter = v.begin(); 
            }
        }

        if(v.size() > 1)
        {
            cout << *iter << ", ";
        }
        else
        {
            cout << *iter;
        }

        if(iter == v.end() - 1)
        {
            v.erase(iter);
            iter = v.begin();
        }
        else
        {
            v.erase(iter);
        }
        

    }

    cout << ">";

}