//#include "ArrayQueue.h"
#include <iostream>
using namespace std;

template <class Type>

class QueueAsArray

{

private:

    int maxQueueSize;
    int count;
    int queueFront;
    int queueRear;
    Type* list;


public:

    QueueAsArray(int queueSize = 100);

    void initializeQueue();

    void destroyQueue();

    bool isEmptyQueue();

    bool isFullQueue();

    void addQueue(Type queueElement);

    void deQueue(Type& deqElement);

    ~QueueAsArray();

    const QueueAsArray<Type>& operator=(const QueueAsArray<Type>&);

    QueueAsArray(const QueueAsArray<Type>& otherQueue);

};

template <class Type>




void QueueAsArray<Type>::initializeQueue()

{

    queueFront = 0;




    queueRear = maxQueueSize - 1;




    count = 0;

}




template <class Type>

void QueueAsArray<Type>::destroyQueue()

{

    queueFront = 0;




    queueRear = maxQueueSize - 1;

    count = 0;

}




template <class Type>




bool QueueAsArray<Type>::isEmptyQueue()

{

    return (count == 0);

}




template <class Type>

bool QueueAsArray<Type>::isFullQueue()

{

    return (count == maxQueueSize);

}




template <class Type>

void QueueAsArray<Type>::addQueue(Type newElement)

{

    if (!isFullQueue())

    {

        queueRear = (queueRear + 1) % maxQueueSize;




        count++;




        list[queueRear] = newElement;

    }




    else




        cout << "cant add " << endl;

}




template <class Type>

void QueueAsArray<Type>::deQueue(Type& deqElement)




{




    if (!isEmptyQueue())

    {

        deqElement = list[queueFront];




        count--;




        queueFront = (queueFront + 1) % maxQueueSize;

    }

    else

        cout << "can't delete from empty queue." << endl;

}




template <class Type>




QueueAsArray<Type>::QueueAsArray(int queueSize)

{

    if (queueSize <= 0)

    {

        cout << "Creating an array of size 188. " << endl;




        maxQueueSize = 100;

    }

    else




        maxQueueSize = queueSize;




    queueFront = 0;




    queueRear = maxQueueSize - 1;




    count = 0;




    list = new Type[maxQueueSize];

}




template <class Type>




QueueAsArray<Type>::~QueueAsArray()

{

    delete[] list;

}




template <class Type>




const QueueAsArray<Type>& QueueAsArray<Type>::operator=(const QueueAsArray<Type>& otherQueue)




{




    cout << "Write the definition of the function "

        << "to overload the assignment operator" << endl;

}




template <class Type>




QueueAsArray<Type>::QueueAsArray(const QueueAsArray<Type>& otherQueue)
{

   cout << "Write the definition of the copy constructor" << endl;

}

