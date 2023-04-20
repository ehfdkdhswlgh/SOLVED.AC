#include <iostream>
#include <vector>
#include <stack>

using namespace std;



// 재귀 구현 (권장)
vector<int> graph[9];
bool visited[9] = {false, }; 

void dfs_recurr(int x)
{
    visited[x] = true;
    cout << x << " ";
    for(int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if(!visited[y])
        {
            dfs_recurr(y);
        }
    }
    
}


// 스택 구현
void dfs_stack(int start)
{
    stack<int> st;
    st.push(start);
    visited[start] = true;
    cout << start;

    while(!st.empty())
    {
        int cur = st.top();
        st.pop();

        for(int i = 0; i < graph[cur].size(); i++)
        {
            int y = graph[cur][i];
            
            if(!visited[y]) 
            {
                cout << y;
                visited[y] = true;
                // 스택에 넣을 때 방문함
                // cur 자식에 방문할 대상이 있으면 기존에 pop했던 cur를 다시 살려야함
                st.push(cur);
                st.push(y);
                break; // 방문했다면 반복문 탈출 (다시시작)
            }

            //cur 자식에 반문할 대상이 없다면 cur은 스택에서 삭제된다.
        }

    }

}




// int main()
// {
//     graph[1].push_back(2);
//     graph[1].push_back(3);
//     graph[1].push_back(8);

//     graph[2].push_back(1);
//     graph[2].push_back(7);

//     graph[3].push_back(1);
//     graph[3].push_back(4);
//     graph[3].push_back(5);

//     graph[4].push_back(3);
//     graph[4].push_back(5);

//     graph[5].push_back(3);
//     graph[5].push_back(4);

//     graph[6].push_back(7);

//     graph[7].push_back(2);
//     graph[7].push_back(6);
//     graph[7].push_back(8);

//     graph[8].push_back(1);
//     graph[8].push_back(7);

//     dfs(1);
// }