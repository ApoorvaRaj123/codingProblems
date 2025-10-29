Node* insertEnd(Node* root, int item) {
    Node* temp = new Node(item);
    if (root == NULL)
        return temp;

    Node* last = root;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = temp;
    return root;
}

Node* arrayToList(vector<int>& arr, int n) {
    Node* root = NULL;
    for (int i = 0; i < n; i++) {
        root = insertEnd(root, arr[i]);
    }
    return root;
}
