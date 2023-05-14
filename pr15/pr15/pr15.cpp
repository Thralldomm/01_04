 
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    do {
        cout << s.top() << endl;
        s.pop();
    } while (!s.empty());


    //3 2 1
}

 