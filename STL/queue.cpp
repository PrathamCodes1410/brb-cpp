// First in, First Out
// FIFO
#include <iostream>
#include <queue>
using namespace std;

int main(){
    // creating a queue
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Size after Push : " << q.size() << endl;
    cout << "This is the current front element which will be removed : " << q.front() << endl;
    q.pop();  // will remove 1 here, ie first element to be pushed

    cout << "Size after Pop : " << q.size() << endl;
}