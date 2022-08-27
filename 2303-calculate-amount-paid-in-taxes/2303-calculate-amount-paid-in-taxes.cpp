class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
           double tax = 0, diff = 0;
        for(int i=0;i <brackets.size(); i++) {
            if(i==0) {
                if(income<=brackets[0][0]) {
                    diff = income;
                    income = 0;
                }
                else {
                    income-=brackets[0][0];
                    diff = brackets[0][0];
                }
                tax+=(brackets[0][1]*diff/100);
            }
            else {
                if(income<=(brackets[i][0]-brackets[i-1][0])) {
                    diff = income;
                    income = 0;
                }
                else {
                    income-=((brackets[i][0]-brackets[i-1][0]));
                    diff = (brackets[i][0]-brackets[i-1][0]);
                }
                tax+=(brackets[i][1]*diff/100);
            }
        }
        return tax;
    }
};