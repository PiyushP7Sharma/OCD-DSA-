//DAY 2 
//Q1: IF THE STRING IS GOOD OR BAD

class Solution {
  public:
    int isGoodorBad(string S){
    int vowel=0, consonant=0;
    unordered_set<char> vowels ={'a','e','i','o','u'};
    for(int i=0; i<S.size(); i++){
        if(vowels.count(S[i])){
            vowel++;
            consonant=0;
        }
        else if(S[i]=='?'){
            vowel++;
            consonant++;
        }
        else{
            consonant++;
            vowel=0;
        }
        if(vowel>5 || consonant>3){
            return 0;
        }
        
    }
    return 1;
    }
};

//APPROACH:  chehcing the string for each index . If the string char is vowel then increase the vowel count by 1 and reset the consonat count to 0. If the string char is consonat then increase the consonant count by 1 and resent the vowel count. If the wildcard char comes then increase both vowel count and consonat count. meanwhile check the conditions for bad string 

//TIME COMPLEXITY : O(N)
//SPAXE COMPLEXITY : O(1)
