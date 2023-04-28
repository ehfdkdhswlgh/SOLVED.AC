#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 좌표 압축 개념 : https://velog.io/@jxlhe46/%EB%B0%B1%EC%A4%80-18870%EB%B2%88.-%EC%A2%8C%ED%91%9C-%EC%95%95%EC%B6%95
// lower_bound 사용법 : https://chanhuiseok.github.io/posts/algo-55/


int main()
{

    vector<int> v, pressed;

    int n, input;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
        pressed.push_back(input);
    }

    sort(pressed.begin(), pressed.end());
    pressed.erase(unique(pressed.begin(), pressed.end()), pressed.end());

    for(int i = 0; i < v.size(); i++)
    {

        //lower_bound 시간복잡도 = O(logn) (정렬되어있을때만 가능) (이진탐색)
        //sort 시간복잡도 = O(nlogn) (개선된 퀵정렬)
        //총 시간복잡도 O(nlogn) + O(logn)  <---- O(n)보다는 좋음
        cout << lower_bound(pressed.begin(), pressed.end(), v[i]) - pressed.begin() << " ";
        
        //find 시간복잡도 = O(n) -> 시간  초과!! (순차탐색)
        //cout << find(pressed.begin(), pressed.end(), v[i]) - pressed.begin() << "";
    }
    
}