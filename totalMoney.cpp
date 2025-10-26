class Solution {
public:
    int totalMoney(int n) {
        //1 principle 
        // 1,2,3,4,5,6,7 = 28
        // 2,3,4,5,6 = 35 = 7 // 1    n/7 
        
                                      //(n/7+1)                                            
        // 28*(x) + 7*(1+2+3+4..x-1) + 2 + 3 + ... n%7
        int x = n/7;
        int total = 28*x;
        //remainder
        for(int i = (n/7)+1 , j=1 ; j <= n%7 ; i++ , j++)
        {
            
            total += i;
            cout << i << endl;
        }

        for(int i = 1 ; i <= (x-1) ; i++)
        {
            total += (7*i);
        }

        return total;
        

    }
};
