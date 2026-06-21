vector<int> rearrangeArray(vector<int>& arr) {
    vector<int> pos, neg;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    int posIdx = 0, negIdx = 0;
    int i = 0;
    while (posIdx < pos.size() && negIdx < neg.size()) {
        if (i % 2 == 0)
            arr[i++] = pos[posIdx++];
        else 
            arr[i++] = neg[negIdx++];
    }
    while (posIdx < pos.size())
        arr[i++] = pos[posIdx++];
  
    while (negIdx < neg.size())
        arr[i++] = neg[negIdx++];
}
