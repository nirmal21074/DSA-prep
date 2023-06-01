class Solution {
public:
    int romanToInt(string s) {
        int ans = convertToInt(s[0]);
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i - 1] == 'I' && (s[i] == 'V' || s[i] == 'X')){
                ans -= 2*convertToInt('I');
            } else if(s[i - 1] == 'X' && (s[i] == 'L' || s[i] == 'C')){
                ans -= 2*convertToInt('X');
            } else if(s[i - 1] == 'C' && (s[i] == 'D' || s[i] == 'M')){
                ans -= 2*convertToInt('C');
            }
            ans += convertToInt(s[i]);
        }
        return ans;
    }
    int convertToInt(char c){
        if(c == 'I')return 1;
        if(c == 'V')return 5;
        if(c == 'X')return 10;
        if(c == 'L')return 50;
        if(c == 'C')return 100;
        if(c == 'D')return 500;
        return 1000;
    }
};