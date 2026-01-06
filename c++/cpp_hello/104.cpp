#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;

    if(n > 1) {
        // eng kichik elementning iteratorini topamiz
        auto it = min_element(a.begin(), a.end());
        cout << it << " ";
        // oxirgi element bilan almashtiramiz
        swap(*it, a.back());
    }

    
}