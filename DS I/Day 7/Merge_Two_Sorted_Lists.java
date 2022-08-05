class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        if(list1==null) return list2;
        if(list2==null) return list1;
        if(list1==null && list2==null) return null;
        
        ListNode ans=new ListNode(-1);
        ListNode c1=list1 , c2=list2 , cur=ans;
        
        while(c1!=null && c2!=null){
            if(c1.val<c2.val){
                cur.next=c1;
                c1=c1.next;
            }
            else{
                cur.next=c2;
                c2=c2.next;
            }
            cur=cur.next;
        }
        if(c1!=null) cur.next=c1;
        else cur.next=c2;
        
        return ans.next;
    }
}