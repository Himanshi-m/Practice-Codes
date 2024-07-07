class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def print_list(self):
        current = self.head
        while current is not None:
            print(current.data, end=" ")
            current = current.next
        print()
        
    def insatbeg(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
        
    def insatend(self, data):
        if self.head is None:
            self.head = Node(data)
        ins = Node(data)
        current = self.head
        while current.next is not None:
            current = current.next
        current.next = ins
        
    def print_list_rev(self,head):
        if head is None:
            return
        self.print_list_rev(head.next)
        print(head.data, end=" ")
    def print_list_reverse(self):
        self.print_list_rev(self.head)
        print()
    
    def insatpos(self, data, pos):
        if pos == 0:
            self.insatbeg(data)
        else:
            new_node = Node(data)
            current = self.head
            for i in range(pos-1):
                if current is None:
                    print("Index out of range, inserting at end")
                    self.insatend(data)
                    return
                current = current.next
            new_node.next = current.next
            current.next = new_node

#main
ll = LinkedList()
ll.insatbeg(10)
ll.print_list()
ll.insatbeg(20)
ll.print_list()
ll.insatend(30)
ll.print_list()
ll.insatpos(40,2)
ll.print_list()
ll.insatpos(50,10)
ll.print_list()