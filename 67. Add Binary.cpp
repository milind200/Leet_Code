class Solution {
public:
    string addBinary(string a, string b) {
        int alen= a.length()-1;
        int blen= b.length()-1;
        int carry=0;
        string result="";
        while(alen>=0|| blen>=0|| carry){
            int sum=carry;

            if(alen>=0){
                sum+= a[alen]-'0';
                alen--;
            }

            if(blen>=0){
                sum+=b[blen]-'0';
                blen--;
            }

            result+= to_string(sum%2);
            carry = sum/2;

        }
      reverse(result.begin(),result.end());

         return result;
    }
};