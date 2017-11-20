import java.util.Scanner;
public class dfs{
	public static int n;
	public int matrix[][];
	public StackInt tt;
	public boolean visited[];

	public dfs(int n){
		matrix = new int[n][n];
		tt = new StackInt(n);;
		visited = new boolean[n];
	}
	public void addEdge(int v1,int v2){
		matrix[v1-1][v2-1]=1;
		matrix[v2-1][v1-1]=1;
	}

	public void performSearch(int s){
        tt.push(s);
        visited[s-1]=true;
        while(!tt.empty()){
        	int temp = tt.peek();
        	tt.pop();
            System.out.print(temp+" ");
            for(int i=0;i<n;i++){
                if(matrix[temp-1][i]==1){
            	if(visited[i]==false){
            		tt.push(i+1);
            		visited[i]=true;	
            	}
            }
        }
	}
}
    public void printMatrix(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
    
	public static void main(String [] args){
		
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the number of vertices:");
        n = s.nextInt();
        dfs dd = new dfs(n);
        System.out.println("Enter the source vertex:");
        int source = s.nextInt();
        System.out.println("Enter the edges:");
        for(int i=0;i<n-1;i++){
        	int v1 = s.nextInt();
        	int v2 = s.nextInt();
        	dd.addEdge(v1,v2);
        }
        //dd.printMatrix();
       dd.performSearch(source);
	}
}