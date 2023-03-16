#include <iostream>

using namespace std;


/*
본문제는 브루트포스(전체탐색) 문제이다

문제는 8*8 고정크기의 체스판을 기준으로하기 때문에
내가 푼 방식보다는

8*8체스판이 나올수있는 2가지 상황인

	char chess1[8][8]{
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' }
	};
	char chess2[8][8]{
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' }
	};

을 선언하고 일치하는 갯수를 카운트하면 쉽게 풀 수 있다.

*/



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int n, m;
    cin >> n >> m;

    char arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            arr[i][j] = c;
        }
    }

    
    int row = n - 8 + 1;
    int col = m - 8 + 1;

    int b_start_cnt[row][col];
    int w_start_cnt[row][col];
    fill(&b_start_cnt[0][0], &b_start_cnt[row - 1][col], 0); //다차원 배열 초기화
    fill(&w_start_cnt[0][0], &w_start_cnt[row - 1][col], 0);

    char b_current = 'B';
    char w_current = 'W';


    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {

            for(int k = i; k < i + 8; k++)
            {
                for(int p = j; p < j + 8; p++)
                {

                    //-------------b start------------------------

                    if(arr[k][p] == b_current)
                    {
                        if(p != j + 7) //마지막 열 일때는 이번행 마지막열의 값 과 다음행 첫번째 열 값 이 일치해야함으로 current 를 바꾸지 않는다
                        {
                            //일치하고 마지막행일때 -> 아무것도x
                            //일치하고 마지막행이 아닐때 -> b_current 바꿈
                            if(b_current == 'B')
                            {
                                b_current = 'W';
                            }
                            else
                            {
                                b_current = 'B';
                            }
                        }
                    }
                    else //일치하지않을 때
                    {
                        //일치하지않고 마지막행일때 -> b_cnt ++
                        //일치하지않고 마지막행도아닐때 -> b_cnt++ + b_current 바꿈
                        if(p != j + 7)
                        {
                            b_start_cnt[i][j]++;
                            
                            if(b_current == 'B')
                            {
                                b_current = 'W';
                            }
                            else
                            {
                                b_current = 'B';
                            }                           
                            
                        }
                        else
                        {
                            b_start_cnt[i][j]++;
                        }
                    }


                    //-----------------W start------------------------------------

                    if(arr[k][p] == w_current)
                    {
                        if(p != j + 7) 
                        {
                            if(w_current == 'B')
                            {
                                w_current = 'W';
                            }
                            else
                            {
                                w_current = 'B';
                            }
                        }
                    }
                    else //일치하지않을 때
                    {
                        if(p != j + 7)
                        {
                            w_start_cnt[i][j]++;
                            
                            if(w_current == 'B')
                            {
                                w_current = 'W';
                            }
                            else
                            {
                                w_current = 'B';
                            }                           
                            
                        }
                        else
                        {
                            w_start_cnt[i][j]++;
                        }
                    }

                }
            }

        }
    }



    int min = 65;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(b_start_cnt[i][j] < min)
            {
                min = b_start_cnt[i][j];
            }
            if(w_start_cnt[i][j] < min)
            {
                min = w_start_cnt[i][j];
            }
        }
    }
    
    cout << min;


}