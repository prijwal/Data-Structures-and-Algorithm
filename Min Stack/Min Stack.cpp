stack<int> s;
stack<int> min_s;
MinStack::MinStack() {
    while(!s.empty())
        s.pop();
    while(!min_s.empty())
        min_s.pop();
}

void MinStack::push(int x) {
    s.push(x);
    if(min_s.empty())
        min_s.push(x);
    else if(x<min_s.top())
        min_s.push(x);
    else
        min_s.push(min_s.top());
}

void MinStack::pop() {
    if(!s.empty())
        s.pop();
    if(!min_s.empty())
        min_s.pop();
}

int MinStack::top() {
    if(!s.empty())
        return s.top();
    else
        return -1;
}

int MinStack::getMin() {
    if(!min_s.empty())
       return min_s.top();
    else
        return -1;
}

