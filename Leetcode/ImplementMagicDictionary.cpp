class MagicDictionary {
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for(int i=0;i<dict.size();i++)
            words.insert(dict[i]);
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
         
        for(int i=0;i<word.length();i++){
            string temp=word;
            for(int j=0;j<26;j++){
                temp[i]='a'+ j;
                if(words.find(temp)!=words.end() && temp!=word){
                  return true;
                }
            }
        }
        return false;
    }
    
    private :
        unordered_set<string>words;
};



/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */