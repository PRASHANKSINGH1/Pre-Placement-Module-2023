class Solution {
    public void reorderList(ListNode head) {
        List<ListNode> nodes = new ArrayList<>();
        
        
        ListNode root = head;
        
        while(root!=null){
            nodes.add(root);
            root = root.next;
        }
        
        
        int i=1;
        int j = nodes.size();
        boolean bool = false;
        
        while(i!=j){
            if(bool){
                //System.out.println("i "+nodes.get(i).val);
                head.next = nodes.get(i);
                head = head.next;
                i++;
                bool = false;
            }
            else{
                //System.out.println("j "+nodes.get(j).val);
                head.next = nodes.get(j-1);
                head = head.next;
                j--;
                bool = true;
            }
        }
        
        head.next = null;
        
    }
}