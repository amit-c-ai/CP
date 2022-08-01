class MyStack {
public:
    queue<int> q1, q2, *orig, *temp, *k;
    void swap(queue<int>** a, queue<int>** b){
        queue<int> *t = *b;
        *b = *a;
        *a = t;
    }
    
    MyStack() {
        while(!q1.empty()){ q1.pop(); }
        while(!q2.empty()){ q2.pop(); }
        orig = &q1;
        temp = &q2;
    }
    
    void push(int x) {
        if(orig->empty()){
            temp->push(x);
            swap(&temp, &orig);
        }
        else{
            orig->push(x);
        }
    }
    
    int pop() {
        while(orig->size() > 1){
            temp->push(orig->front());
            orig->pop();
        }
        int t = orig->front();
        orig->pop();
        swap(&temp, &orig);
        return t;
    }
    
    int top() {
        int t = this->pop();
        orig->push(t);
        return t;
    }
    
    bool empty() {
       return (q1.empty() && q2.empty());
    }
};
