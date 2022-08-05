class Solution {
    public String multiply(String num1, String num2) {
        int l = num1.length();
        int m = num2.length();
        int[] sums = new int[l+m];
        for(int i =l-1;i>=0;i--){
            for(int j =m-1;j>=0;j--){
                int mul = (num1.charAt(i) - '0') * (num2.charAt(j) - '0');
                int sum = sums [i+j+1] +mul;
                sums[i+j]+=sum/10;
                sums[i+j+1]=sum%10;
            }
        }
        StringBuilder sb = new StringBuilder();
        for(int num :sums){
            if(sb.length()!=0 ||num!=0){
                sb.append(num);
            }
        }
        return sb.length() == 0 ? "0" : sb.toString();
    }
}