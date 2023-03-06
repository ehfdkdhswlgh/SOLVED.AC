#include <iostream>
#include <vector>

using namespace std;



//Pair 클래스를 사용하면 구조체 정의 없이 간단하게 2가지 타입의 데이터를 저장할 수 있다.
//vector<pair<int, int>> person; 
//https://ya-ya.tistory.com/91

struct man
{
    int weight;
    int height;
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int len;
    cin >> len;

    vector<man> v;

    for(int i = 0; i < len; i++)
    {
        int w, h;
        cin >> w >> h;

        man m;
        m.weight = w;
        m.height = h;
        
        v.push_back(m);
    }

    vector<man>::iterator iter;
    for(iter = v.begin(); iter != v.end(); iter++)
    {
        int rank = 1;
        vector<man>::iterator iter2;
        for(iter2 = v.begin(); iter2 != v.end(); iter2++)
        {
            if(iter->height < iter2->height && iter->weight < iter2->weight)
            {
                rank++;
            }
        }
        cout << rank << '\n';
    }

}