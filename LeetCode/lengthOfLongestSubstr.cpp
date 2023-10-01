#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string substr="";
        int x,max_substrLength=0;
        for(int i=0;i<s.length();i++)
        {
            substr="";
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]==s[j])
                    substr=substr+s[i];
                x=substr.length();
                if(x>max_substrLength){
                    max_substrLength=x;
                }
            }
            
        }
        return max_substrLength;    
    }

    int main(){
        cout<<"Maximum substring length without repeated characters is: "<<lengthOfLongestSubstring("abcabccda");
        return 0;
    }
};