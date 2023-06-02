    Node* reverse(Node* head, int k) {
        Node *curr = head, *prev = nullptr, *next = nullptr;
        int cnt = 0;
        while (curr != nullptr && cnt < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }

        if (next != nullptr)
            head->next = reverse(next, k);

        return prev;
    }

    void reverseInGroups(int k) {
        head = reverse(head, k);
    }
