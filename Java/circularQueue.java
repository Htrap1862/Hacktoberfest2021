import java.util.*;
class circularQueue
{
    int front,rear,N;
    String queue[];
    circularQueue(int n)
    {
        front=rear=-1;
        N=n;
        queue=new String[n];
    }
    void Enqueue()
    {
        if(next(rear)==front)
        {
            System.out.println("Queue is Full");
            return;
        }
        else if(rear==-1)
        front=rear=0;
        else
        rear=next(rear);
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number to be pushed-");
        String num=sc.nextLine();
        queue[rear]=num;
    }
    void Dequeue()
    {
        if(front==-1)
        System.out.println("Queue is Empty");
        else if(front==rear)
        front=rear=-1;
        else
        front=next(front);
    }
    void disp()
    {
        if(front!=-1)
        for(int i=front;;i=next(i))
        {
            System.out.println(queue[i]);
            if(i==rear)
            break;
        }
        else
        System.out.println("Stack is empty"); 
    }
    int next(int k)
    {
        return (k+1)%N;
    }
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of elements in Queue-");
        int n=0;
        n=sc.nextInt();
        circularQueue obj=new circularQueue(n);
        int ch;
        boolean f=true;
        while(f)
        {
            System.out.println("Enter 1 to Enqueue, 2 to Dequeue, 3 to display or 4 to exit");
            System.out.println("Enter your choice-");
            ch=sc.nextInt();
            switch(ch)
            {
                case 1:
                {
                    obj.Enqueue();
                    break;
                }
                case 2:
                {
                    obj.Dequeue();
                    break;
                }
                case 3:
                {
                   obj.disp();
                   break;
                }
                case 4:
                {
                    f=false;
                    break;
                }
                default:
                System.out.println("Invalid Choice");
            }
        }
    }
}
    