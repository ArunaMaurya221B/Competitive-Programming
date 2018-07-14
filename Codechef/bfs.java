import java.util.Scanner;
import java.io.*;	
public class bfs{
    public int matrix[][] = new int[10][10];
    public boolean visited[] = new boolean[10];
    public Tryqueue qq = new Tryqueue();
	public bfs(int v){
		int matrix[][] = new int[v][v];
		boolean visited[] = new boolean[v];
		Tryqueue qq = new Tryqueue(v);
	}

	public void addEdge(int v1, int v2){
		matrix[v1-1][v2-1]=1;
		matrix[v2-1][v1-1]=1;
	}

	public void breadthFirstSearch(int source, int v ){
		visited[source-1]=true;
		qq.enqueue(source);
		//qq.display();
		System.out.println();
		while(!qq.empty()){
			int temp = qq.getFront();
			qq.dequeue();
			System.out.print(temp+" ");
			//qq.display();
			//System.out.println(qq.empty());
			for(int i=0;i<v;i++){
				if(matrix[temp-1][i]==1){
					if(visited[i]==false){
					visited[i]=true;
					qq.enqueue(i+1);
				}
			}
		}

	}
}
 public void printMatrix(int v){
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			System.out.print(matrix[i][j]+" ");
		}
		System.out.println();
	}
}


	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the number of vertices:");
		int v = s.nextInt();
		bfs b = new bfs(v);
		System.out.println("Enter the source vertex");
		int source = s.nextInt();
		//bfs b = new bfs(v);
        System.out.println("Enter the edges from and to");
        for(int i=0;i<v-1;i++){
        	int v1=s.nextInt();
        	int v2=s.nextInt();
        	b.addEdge(v1,v2);
        }
      // b.printMatrix(v);
        b.breadthFirstSearch(source, v);


	}
}
