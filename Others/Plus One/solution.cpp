vector<int> plusOne(vector<int>& digits) {
    
    int carry = 1;
    for(int i=digits.size()-1; i>=0; i--) {

        int digit = digits[i] + carry;
        carry = digit/10;
        digits[i] = digit%10;
    }
    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }
    return digits;
}
