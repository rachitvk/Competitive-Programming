class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
         int n=words.size();
        
        for(int i=0;i<n;i++){
            string a=arr[words[i][0]-'a'];
            for(int j=1;j<words[i].length();j++){
                a.append(arr[words[i][j]-'a']);
            }
             s.insert(a);
        }
        return s.size();
    }
};