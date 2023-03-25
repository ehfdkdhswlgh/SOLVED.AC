#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int roop;
    cin >> roop;

    vector<int> v;

    int plus[4001] = {};
    int minus[4001] = {};


    for(int i = 0; i < roop; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);    

        if(input >= 0)
        {
            plus[input]++;
        }
        else
        {
            minus[-input]++;
        }
    }

    //1. 산술평균
    double sum = 0;
    for(auto i : v)
    {
        sum += i;
    }

    if(round(sum / v.size()) == -0)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << round(sum / v.size()) << '\n';
    }
    

    //2. 중앙값
    sort(v.begin(), v.end());
    cout << v[v.size() / 2] << '\n';


    //3. 최빈값
    int plus_max = *max_element(begin(plus), end(plus));
    int minus_max = *max_element(begin(minus), end(minus));

    vector<int> p_v;
    vector<int> m_v;

    if(plus_max == minus_max)
    {
        
       for(int i = 0; i <= 4000; i++)
        {
            if(plus[i] == plus_max)
            {
                p_v.push_back(i);              
            }

            if(minus[i] == minus_max)
            {
                m_v.push_back(i);
            }
        }

        if(m_v.size() > 1)
        {
            cout << -*(m_v.end() - 2) << '\n';
        }
        else if(m_v.size() == 1)
        {
            cout << *(p_v.begin()) << '\n';
        }
        else if(m_v.size() == 0)
        {
            if(p_v.size() > 1)
            {
                cout << *(p_v.begin() + 1) << '\n';
            }
            else
            {
                cout << *p_v.begin() << '\n';
            }
        }


    }
    else
    {
        if(plus_max > minus_max)
        {
            for(int i = 0; i <= 4000; i++)
            {
                if(plus[i] == plus_max)
                {
                    p_v.push_back(i);              
                }
            }

            if(p_v.size() > 1)
            {
                cout << *(p_v.begin() + 1) << '\n';
            }
            else
            {
                cout << *p_v.begin() << '\n';
            }
                      
        } 
        else
        {
            for(int i = 0; i <= 4000; i++)
            {
                if(minus[i] == minus_max)
                {
                    m_v.push_back(i);              
                }
            }

            if(m_v.size() > 1) 
            {
                cout << -*(m_v.end() - 2) << '\n';
            }
            else
            {
                cout << -*m_v.begin() << '\n';
            }
        }
    }



    //4. 범위
    cout << *(v.end() - 1) - *v.begin() << '\n';

}