#include <iostream>
#include <vector>
using namespace std;

int row = 10;
int col = 10;
int defaultValue = 0;


int main()
{
    //열과 행을 이미 알고 있는 경우
    vector<vector<int>> v(row, vector<int>(col, defaultValue));

    
    //열만 알고 있는 경우 -> v[알고있음][모름]
    vector<vector<int>> v1(col);
    v1[0].push_back(99);


    //행과 열 둘다 모르는 경우
    vector<vector<int>> v2;
    v2.push_back(vector<int>()); //하나의 열 추가  --> v[0][] 생성됨
    v2[0].push_back(99); 

}

