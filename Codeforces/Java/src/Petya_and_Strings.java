import java.util.Scanner;

public class Petya_and_Strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        char[] c = a.toCharArray();
        char[] d = b.toCharArray();
        int p = 0;
        for(int i=0; i<c.length; i++){
            c[i] = Character.toLowerCase(c[i]);
            d[i] = Character.toLowerCase(d[i]);
            if(c[i]== d[i]){
                p = 0;
            }
            else if(c[i]<d[i]){
                p=-1;
                break;
            }else if(c[i]>d[i]){
                p=1;
                break;
            }
        }
        System.out.println(p);
    }
}
