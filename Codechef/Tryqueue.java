import java.io.*;
public class Tryqueue{
	public int ar[] = new int[10];
	public int front, rear;
	public Tryqueue(){
		front=-1;
		rear=-1;
	}
	public Tryqueue(int n){
		int ar[] = new int[n];
		front=-1;
		rear=-1;
		//System.out.println("Hello");
	}

	public void enqueue(int data){
		//System.out.println("Hello");
		if((front==-1)&&(rear==-1)){
			front=0;
			rear=0;
		}
		else
			rear++;

		ar[rear]=data;
		//System.out.println("The rear value:"+rear);
		//System.out.println("The front value:"+front);
	}

	public void dequeue(){
		//front++;
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else if(front==-1)
		  System.out.println("Empty");
		else
			front++;
	}

	public int getFront(){
		if(front==-1)
			return 0;
		return ar[front];
	}

	public void display(){
		//System.out.println("The front and the rear values are:"+front+" "+rear);
		if(front<0)
			System.out.println("Array out of bounds");
		for(int i=front;i<=rear;i++){
			System.out.print(ar[i]);
		//	System.out.println("Front in Display():"+front);
		}
	}

	public boolean empty(){
		if((front<0)||(front>rear))
			return true;
		else
			return false;
	}
	/*public static void main(String [] args){
		Tryqueue tqq = new Tryqueue(5);
		tqq.enqueue(1);
		tqq.enqueue(2);
		tqq.enqueue(1);
		tqq.enqueue(2);
		tqq.display();
		tqq.dequeue();
		tqq.dequeue();
		tqq.display();
		//System.out.println(tqq.getFront());
	}*/
}