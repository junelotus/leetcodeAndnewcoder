#include <iostream>
#include <vector>
using namespace std;
/*int main()
{
    clock_t t1, t2, t3;
    vector<bool> vb;
    vector<int> vi;
    vector<char> vc;

    t1 = clock();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            vb.push_back(true);
        }
    }
    t1 = clock() - t1;

    t2 = clock();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            vi.push_back(1);
        }
    }
    t2 = clock() - t2;

    t3 = clock();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            vc.push_back('a');
        }
    }
    t3 = clock() - t3;

    cout << "'vector<bool>::push_back(true)' 1000000 times cost: " << t1 << endl;
    cout << "'vector<int>::push_back(1)' 1000000 times cost: " << t2 << endl;
    cout << "'vector<char>::push_back('a')' 1000000 times cost: " << t3 << endl;

    t1 = clock();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            bool b = vb[j + 1000 * i];
        }
    }
    t1 = clock() - t1;

    t2 = clock();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            int b = vi[j + 1000 * i];
        }
    }
    t2 = clock() - t2;

    t3 = clock();
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            char b = vc[j + 1000 * i];
        }
    }
    t3 = clock() - t3;

    cout << "'vector<bool>::operator[]' 1000000 times cost: " << t1 << endl;
    cout << "'vector<int>::operator[]' 1000000 times cost: " << t2 << endl;
    cout << "'vector<char>::operator[]' 1000000 times cost: " << t3 << endl;

    return 0;
}*/

int main()
{

vector<int> nide;
nide.reserve(20);
nide.push_back(1);
vector<bool> wode;//(3,true);
//bool& h =wode[0];
int& a = nide[0];
std::cout<<a<<std::endl;
std::cout<<sizeof(wode)<<std::endl;
std::cout<<sizeof(bool)<<std::endl;
bool dd= false;
bool & ddd =dd;

cout<<(char*)(1)<<endl;

return 0;
}

