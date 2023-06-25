class Solution {
     public int gcd(int a, int b) {
        int i;
        if (a < b)
            i = a;
        else
            i = b;

        for (i = i; i > 1; i--) {
            if (a % i == 0 && b % i == 0)
                return i;
        }

        return 1;
    }
    public int countBeautifulPairs(int[] nums) {
         int res = 0;
        int n = nums.length;

        for (int i = 0; i < n - 1; i++) {
            String str = nums[i]+"";
            int start = str.charAt(0) - 48;

            for (int j = i + 1; j < n; j++) {
                String end = nums[j]+"";
                int last = end.charAt(end.length() - 1) - 48;
                int gcdValue = gcd(start, last);

                if (gcdValue == 1)
                    res++;
            }
        }

        return res;
    }
}