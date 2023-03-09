#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Person
{
    Person(int age_, string name_, int idx_) : age(age_), name(name_), idx(idx_){}

    int age;
    string name;
    int idx;
};

bool compare(Person a, Person b)
{
    if(a.age == b.age)
    {
        return a.idx < b.idx; //오름차순 정렬
    }    
    else
    {
        return a.age < b.age; //오름차순 정렬
    }
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int len;
    cin >> len;

    vector<Person> v;


    for(int i = 0; i < len; i++)
    {
        int age;
        string name;

        cin >> age >> name;

        v.push_back(Person(age, name, i));
    }

    sort(v.begin(), v.end(), compare);

    for(auto i : v)
    {
        cout << i.age << " " << i.name << '\n';
    }

}