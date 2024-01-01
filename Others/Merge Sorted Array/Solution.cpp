vector < int > sortedArray(vector < int > a, vector < int > b) {

    // unique ele in sorted order
    int n;
    if (a.size() > b.size()) n = a.size();
    else n = b.size();

    int li=0, ri=0;
    vector<int> nums;

    while (li < n && ri < n) {

        if (a[li] < b[ri]) {
            if (nums.size()==0 || a[li] != nums.back()) {
                nums.push_back(a[li]);
            }
            li++;

        } else {
            if (nums.size()==0 || b[ri] != nums.back()) {
                nums.push_back(b[ri]);
            }
            ri++;
        }
    }

    if (li < n) {
        for(int li; li<n; li++) {
            nums.push_back(a[li]);
        }
    } else if (ri < n) {
        for(int ri; ri<n; ri++) {
            nums.push_back(b[ri]);
        }
    }

    return nums;

}
