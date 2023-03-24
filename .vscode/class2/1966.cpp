#include <iostream>
#include <queue>


using namespace std;


struct Doc{
    int priority;
    int idx;

    bool operator<(const Doc d) const {
        return priority < d.priority;
    }

    Doc(int p, int i) : priority(p), idx(i) {} //생성자

};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int roop;
    cin >> roop;
    for(int i = 0; i < roop; i++)
    {

        priority_queue<Doc> pq;
        deque<Doc> dq;
        int count = 0;

        int n, m;
        cin >> n >> m; 
        //m = 찾고자 하는 idx

        for(int j = 0; j < n; j++)
        {
            int p;
            cin >> p;
            pq.push(Doc(p, j));
            dq.push_back(Doc(p, j));
        }

        while(true)
        {
            if(pq.top().priority == dq.front().priority){ //우선순위가 같다면?
                
                if(dq.front().idx == m){ //dq.front 가 찾고자하는 idx라면?
                    cout << ++count << '\n';
                    break;
                }
                else
                {
                    dq.pop_front();
                    pq.pop();
                    count++;
                }

            }
            else 
            {
                Doc doc = dq.front();
                dq.pop_front();
                dq.push_back(doc);
            }
        }


    }
	

}