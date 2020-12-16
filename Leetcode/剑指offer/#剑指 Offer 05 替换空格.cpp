class Solution {
public:
    string replaceSpace(string s) {
        int pos = s.find(" ");
        while(pos != s.npos){
            s.replace(pos, 1, "%20");
            pos = s.find(" ", pos);
        }
        return s;
    }
};