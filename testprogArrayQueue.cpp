#include <iostream>

#include "ArrayQueue.h"

using namespace std;







int main()

{

    QueueAsArray<int> queue;

      int x, y;

    queue.initializeQueue();

    x = 4;
    y = 5;
    
    queue.addQueue(x); // 4

    queue.addQueue(y); // 4 5

    queue.deQueue(x); // 5

    queue.addQueue(x + 5); // 5 9

    queue.addQueue(16); // 5 9 16

    queue.addQueue(x); // 5 9 16 4

    queue.addQueue(y - 3); // 5 9 16 4 2 

    std::cout << "Queue Elements: ";

    while (!queue.isEmptyQueue())

    {

        queue.deQueue(y);

        std::cout << " " << y;

    }

    cout << endl;

    return 0;

}