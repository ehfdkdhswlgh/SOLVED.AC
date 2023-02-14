#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int cnt;
    cin >> cnt;
     
    double arr[cnt];
    double max = 0;
    double sum = 0;

    //배열에 저장, 최대값 찾기
    for(int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
        
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    //점수 수정
    for(int i = 0; i < cnt; i++)
    {
       arr[i] = arr[i] / max * 100; 
       sum += arr[i];
    }

    cout << sum / cnt;   
    
}