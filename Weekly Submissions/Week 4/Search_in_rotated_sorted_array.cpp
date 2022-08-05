class Solution {
    public int search(int[]a, int t) {
            int l=0;
    int h=a.length-1;
    int m=0;
   while(l<=h){
        m=(l+h)/2;
        if(a[m]==t) return m;
        if(a[l]<=a[m]){
            if(t<=a[m]&&t>=a[l]){
            h=m-1;
            }else{
                l=m+1;
            }
        }else{
             if(t<=a[h]&&t>=a[m]){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        
    }
    return -1;
}
}