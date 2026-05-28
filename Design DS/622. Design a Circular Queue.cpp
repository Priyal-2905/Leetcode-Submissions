class MyCircularQueue {
public:
    vector<int> q;
    int frontIdx, rearIdx, size, capacity;

    MyCircularQueue(int k) {
        q.resize(k);
        capacity = k;
        size = 0;

        frontIdx = 0;
        rearIdx = -1;
    }
    
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        rearIdx = (rearIdx + 1) % capacity;
        q[rearIdx] = value;
        size++;

        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }

        frontIdx = (frontIdx + 1) % capacity;
        size--;

        return true;
    }
    
    int Front() {
        if (isEmpty()) {
            return -1;
        }

        return q[frontIdx];
    }
    
    int Rear() {
        if (isEmpty()) {
            return -1;
        }

        return q[rearIdx];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};