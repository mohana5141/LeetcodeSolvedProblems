class Solution {
public:
    int mirrorFrequency(string s) {
        map<char, int> freq;

        for (char ch : s)
            freq[ch]++;

        int res = 0;

        // Letters
        for (char ch = 'a'; ch <= 'm'; ch++) {
            char opp = 'z' - (ch - 'a');
            res += abs(freq[ch] - freq[opp]);
        }

        // Digits
        for (char ch = '0'; ch <= '4'; ch++) {
            char opp = '9' - (ch - '0');
            res += abs(freq[ch] - freq[opp]);
        }

        return res;
    }
};