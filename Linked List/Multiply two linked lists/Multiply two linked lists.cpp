long long  multiplyTwoLists (Node* first, Node* second)
{ 
    int N=1e9+7;
    long long num1 = 0, num2 = 0; 
    while (first || second) 
    { 
        if (first) 
        { 
            num1 = (num1*10 + first->data)%N; 
            first = first->next; 
        } 
        if (second) 
        { 
            num2 = (num2*10+ second->data)%N; 
            second = second->next; 
        } 
    } 
    return (num1%N*num2%N)%N; 
} 
