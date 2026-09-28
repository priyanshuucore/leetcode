class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum1=0;
        for(int i=0;i<firstWord.size();i++){
            sum1=sum1*10+(firstWord[i]-'a');
        }
        int sum2=0;
       for(int i=0;i<secondWord.size();i++){
        sum2=sum2*10+(secondWord[i]-'a');

       }
       int sum3=0;
       for(int i=0;i<targetWord.size();i++){
        sum3=sum3*10+(targetWord[i]-'a');
       }
       if(sum1+sum2==sum3){
        return true;
       }
        return false;
        
    }
};