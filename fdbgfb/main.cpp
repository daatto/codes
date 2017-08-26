#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    vector<int> numbers1 = {1, 5, 42, 7, 8};
vector<int> numbers2 = {10, 7, 4, 2, 2};
vector<int> results;
std::transform(numbers1.begin(), numbers1.end(),
               numbers2.begin(),
               std::back_inserter(results),
               [](int i, int j) {return i+j;});
copy(results.begin(),results.end(),ostream_iterator<int>(cout," "));
for_each(results.begin(),results.end(),[](int i)->void {cout<<i<<" ";});
    return 0;
}
