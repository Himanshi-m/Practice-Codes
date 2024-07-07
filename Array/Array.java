public class Array {
    int capacity=7;
    int size = 0;
    public static void main(String[] args) {
        int[] arr = new int[7];
        Array obj = new Array();
        obj.Insertatbeg(arr,4);
        obj.Insertatbeg(arr,5);
        obj.Display(arr);
        obj.Deletionatend(arr);
        obj.Display(arr);
        obj.Deletionatindex(arr,1);
        obj.Display(arr);
    }
    void Insertatbeg(int[] arr, int x){
        if(size==0){
            arr[0]=x;
            size++;
            return;
        }
        for(int i=size-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        size++;
    }
    void Insertatend(int[] arr, int x){
        if(size>=capacity){
            System.out.println("array is full");
            return;
        }
        arr[size++]=x;
        size++;
    }
    void Insertatindex(int[] arr, int x, int index){
        if(index==0){
            Insertatbeg(arr,x);
            return;
        }
        if(index==size-1){
            Insertatend(arr,x);
            return;
        }
        for(int i=size-1; i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=x;
        size++;
    }
    void Deletionatend(int[] arr){
        if(size==0){
            System.out.println("underflowwwwww");
            return;
        }
        size--;
    }
    void Deletionatbeg(int[] arr){
        if(size==0){
            System.out.println("underflowwwwww");
            return;
        }
        for(int i=0;i<=size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    void Deletionatindex(int[] arr,int index){
        if(size==0){
            System.out.println("underflowwwwww");
            return;
        }
        if(index>=size-1){
            Deletionatend(arr);
            return;
        }
        for(int i=index; i<=size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    void Display(int[] arr){
        System.out.println();
        for(int i = 0; i<size; i++) {
            System.out.print(arr[i]);
        }
        System.out.println();
    }
}