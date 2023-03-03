#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int a, b, v;
    cin >> a >> b >> v;

    if(a >= v)
    {
        cout << "1";
    }
    else if((v - a) % (a - b) == 0) //다음날 정상에 도달할 수 있는 경우 (+1일뒤에 a만큼 가면 도착)
    {
        cout << ((v - a) / (a - b)) + 1;
    }
    else //다음날에도 정상에 못 도달하는 경우 (+2일뒤에 a만큼 가면 도착)
    {
        cout << ((v - a) / (a - b)) + 2;
    }

}


/*
https://cryptosalamander.tistory.com/22

정상에 일단 다다르기만 하면 미끄러지지는 않으므로, 최종적으로 가야하는 목표는 V가 아닌 V-A까지만 가면 다음날 아침에 A만큼 올라서 정상에 다다를 수 있다. 

그리고 V-A를 가는데에 걸리는 기간은 (V-A)/(A-B)이다.

이때 (V-A) / (A-B)가 나머지가 0일 경우에는 (V-A) / (A-B) 일 만큼 오르고, 마지막날 A만큼 오르면 되지만,
(V-A) / (A-B)의 나머지가 0이 아닐 경우에는 정상에 도달하기에 이동거리가 조금 모자라므로 1을 추가로 더해주면 된다.
*/