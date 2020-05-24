//Design Circular Deque

class MyCircularDeque {
private:
    int* dequeue;
    int front, rear, size;
public:
   
    MyCircularDeque(int k) {
        dequeue = new int[k+1]();
        front = rear = 0;
        size = k+1;
    }
    
    
    bool insertFront(int value) {
        if (isFull()) return false;
        else{
            front = (front + size - 1) % size;
            dequeue[front] = value;
            return true;
        }
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if (isFull()) return false;
        else{
            dequeue[rear] = value;
            rear = (rear + 1) % size;
            return true;
        }
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if (isEmpty()) return false;
        else{
            front = (front + 1) % size;
            return true;
        }
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if (isEmpty()) return false;
        else{
            rear = (rear + size - 1) % size;
            return true;
        }
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if (isEmpty()) return -1;
        else return dequeue[front];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if (isEmpty()) return -1;
        else return dequeue[(rear+size-1)%size];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return front == rear? true: false;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return front == (rear + 1) % size? true: false;
    }
};

