class MyCircularDeque {
public:
    vector<int>q;
    int size=0;
    MyCircularDeque(int k) {
       size=k;
    }
    
    bool insertFront(int value) {

        if(q.size()<size)
        {
            q.insert(q.begin(),value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(q.size()<size)
        {
            q.insert(q.end(),value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(q.size()>0)
        {
            q.erase(q.begin());
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(q.size()>0)
        {
            q.erase(q.end()-1);
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(q.size()>0)
        {
            return q[0];
        }
        return -1;
    }
    
    int getRear() {
          if(q.size()>0)
        {
            return q.back();
        }
        return -1;
    }
    
    bool isEmpty() {
        return q.size()==0;
    }
    
    bool isFull() {
        return q.size()==size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */