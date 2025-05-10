import java.util.Scanner;

public class Domino_piling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();

        if(1<=M && M<=N && N<=16){
            int x = M*N;
            System.out.println(x/2);
        }
        return;
    }
}
