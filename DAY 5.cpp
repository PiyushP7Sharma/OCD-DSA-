//Q1 : Distribute Money to Maximum Children
//TC:O(children) 
//SC:O(1)
class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children){ return -1; }
        money -= children;
        int count = 0;
        while (money >= 7 && children > 0) {
            money -= 7;
            count++;
            children--;
        }
        if (children == 1 && money == 3) { count--; }
        if (children == 0 && money > 0) {  return count - 1;}
        return count;
    }
};
