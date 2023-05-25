#include <iostream>
#include <vector>
#include <queue>

using namespace std;

# define INF 99999999

// https://velog.io/@717lumos/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EB%8B%A4%EC%9D%B5%EC%8A%A4%ED%8A%B8%EB%9D%BCDijkstra-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98

// 시작 위치와 정점의 개수, 인접 행렬을 받아
// 최소 거리 행렬을 반환함
vector<int> dijkstra(int start, int N, vector<pair<int, int>> graph[]) // graph[] : 정점의 정보를 저장함 <노드, 거리> 순
{
    vector<int> dist(N + 1, INF); // dist : 최단 거리 정보를 저장함

    priority_queue<pair<int, int>> pq; // 우선순위 큐 선언 <거리, 노드> 순

    dist[start] = 0; // 시작 노드 거리를 0으로 함
    pq.push({0, start}); // 우선 순위 큐에 넣기
    
    while(!pq.empty()) // 큐가 비면 종료
    {
        int cur_dist = -pq.top().first; // 큐에서 꺼내 방문하고 있는 정점의 거리
        // 우선순위 큐는 최대힙인데 (가장큰값우선), 최소힙처럼 쓰려면  값에 -를 붙여서 넣으면 된다.

        int cur_node = pq.top().second; // 정점의 인덱스 번호

        pq.pop();

        for(int i = 0; i < graph[cur_node].size(); i++)
        {
            int nxt_dist = cur_dist + graph[cur_node][i].second; // 인점 정점까지 거리
            int nxt_node = graph[cur_node][i].first; // 인접 정점 번호

            if (nxt_dist < dist[nxt_node]) // 지금 계산한 것이 기존 거리값보다 작다면
            {
                dist[nxt_node] = nxt_dist; // 거리값 업데이트
                pq.push({-nxt_dist, nxt_node}); // 우선순위 큐에 넣기
            }
        }
    }

    return dist; // start 노드로부터 각 노드까지 최단거리를 담은 벡터 리턴

}



int main()
{

    int N = 6; // 정점의 개수

    vector<pair<int, int>> graph[N + 1]; // <노드(to), 거리(cost)> 순

    graph[1].push_back({2, 2});
    graph[1].push_back({4, 1});

    graph[2].push_back({1, 2});
    graph[2].push_back({4, 2});
    graph[2].push_back({3, 3});

    graph[3].push_back({2, 3});
    graph[3].push_back({6, 5});
    
    graph[4].push_back({1, 1});
    graph[4].push_back({2, 2});
    graph[4].push_back({5, 1});

    graph[5].push_back({4, 1});
    graph[5].push_back({6, 2});

    graph[6].push_back({3, 5});
    graph[6].push_back({5, 2});

    vector<int> dist = dijkstra(1, N, graph);

    cout << dist[1] << " " << dist[2] << " "  << dist[3] << " " << dist[4]  << " " << dist[5] << " " << dist[6];

}
