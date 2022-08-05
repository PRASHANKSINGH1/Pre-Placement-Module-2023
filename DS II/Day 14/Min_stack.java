class MinStack {

    StackNode head;
    
    public MinStack() {
        head = null;
    }
    
    public void push(int val) {
        if(head == null){
            head = new StackNode(val, val);        
        }else{
            StackNode node = new StackNode(val, Math.min(head.minTillNode, val));
            node.nextNode = head;
            head = node;
        }
    }
    
    public void pop() {
        head = head.nextNode;
        
    }
    
    public int top() {
        return head.val;
        
    }
    
    public int getMin() {
        return head.minTillNode;
    }
}
class StackNode{
    int val;
    StackNode nextNode;
    int minTillNode;
    
    StackNode(int val, int minTillNode){
        this.val = val;
        this.minTillNode = minTillNode;
    }
}