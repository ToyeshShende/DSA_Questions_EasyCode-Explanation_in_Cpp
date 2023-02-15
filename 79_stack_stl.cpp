#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>s;
    s.push(34); // push at top
    cout<<s.empty();
    s.pop();  //delete top most element
    cout<<s.empty();

    return 0;
}
