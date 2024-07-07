class Node {
    public int data;
    Node next;
}

public class LinkedList {
   static Node start = null;
    public static void main(String[] args) {
        insertatbeg(10);
        insertatbeg(20);
        insertatbeg(30);
        insertatbeg(40);
        show();
        insertatend(11);
        insertatend(12);
        show();
        insertatindex(99,3);
        show();
        insertatindex(88,12);
        show();
    }
    static void insertatbeg(int x){
        Node temp = new Node();
        temp.data=x;
        temp.next=start;
        start=temp ;
    }
    static void insertatend(int x){
        if(start==null){
            insertatbeg(x);
            return ;
        }
        Node temp = start;
        Node ins = new Node() ;
        while(temp.next!=null){
            temp=temp.next;
        }
            ins.data=x;
            ins.next=temp.next;
            temp.next=ins;
    }
    static void insertatindex(int x, int index){
        if(index==0){
            insertatbeg(x);
        }
        Node temp = start;
        Node ind = new Node();
        for(int i = 0 ; i<index-1 ; i++){
            if(temp.next==null){
                insertatend(x);
                System.out.println("Inserted the data at end because the index was more than the last node index");
                return;
            }
            temp=temp.next;
        }
        ind.data=x;
        ind.next=temp.next;
        temp.next=ind;
    }
    static void show(){
        Node temp = start;
        while(temp!=null){
            System.out.print(temp.data +" ");
            temp=temp.next ;
        }
        System.out.println();
    }
}
