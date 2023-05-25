#include <iostream>
#include <string>
#include <vector>

using namespace std;

# define INF 99999999

// 개념 : https://velog.io/@kimdukbae/%ED%94%8C%EB%A1%9C%EC%9D%B4%EB%93%9C-%EC%9B%8C%EC%85%9C-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Floyd-Warshall-Algorithm
// 구현 : https://ansohxxn.github.io/algorithm/floyd/

int main()
{

    int a[4][4] = {
        {0, 5, INF, 8},
        {7, 0, 9, INF},
        {2, INF, 0, 4},
        {INF, INF, 3, 0},
    };

    

    for(int k = 0; k < 4; k++) // k : 거쳐가는 정점
    {
        for(int i = 0; i < 4; i++) // i : 행 (출발 정점)
        {
            for(int j = 0; j < 4; j++) // j : 열 (도착 정점)
            {
                if(a[i][k] + a[k][j] < a[i][j]) // 점화식 :  distance[i,j] = min(distance[i,j], distance[i,n] + distance[n,j])
                {
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }


    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

}