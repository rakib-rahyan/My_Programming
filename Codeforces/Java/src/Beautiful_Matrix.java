import java.util.Scanner;

public class Beautiful_Matrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p=0,q=0,x=0,y=0;
        int [][] matrix = new int[5][5];
        for (int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                matrix[i][j]= sc.nextInt();
                if(matrix[i][j]==1){
                    p=i;
                    q=j;
                }
            }
        }
        if(p<2){
            p = 2-p;
        }
        else{
            p = p-2;
        }
        if(q<2){
            q = 2-q;
        }
        else{
            q = q-2;
        }
        System.out.println(p+q);
    }
}
