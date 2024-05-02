class Solution {
public:
        int lengthOfLastWord(const string& s) {
        stringstream ss (s);
        string word;
        string lastWord;

        while(ss >> word){
            lastWord = word;
        }

        return lastWord.length();
        
    }
};