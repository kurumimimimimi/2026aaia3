//week05-2.cpp 學習計畫 built function第二題
//leet code 709. to lower case

class Solution {
public:
    string toLowerCase(string s) {
        //s[0]='h';//
        for(int i=0; i<s.length();i++){
            //以前if([i]>='A' &&s[i]<='Z') s[i]=s[i]-'A'+'a';
            //以前if(isupper(s[i])s[i]=s[i]-'A'+'a';
            s[i]=tolower(s[i]);
        }
        return s;
    }
};
