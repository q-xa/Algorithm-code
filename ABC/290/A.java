import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a1,a2;
        a1=sc.nextInt();
        a2=sc.nextInt();
        int[] b1=new int[a1+3];
        int[] b2=new int[a2+5];
        for (int i = 1; i <= a1; i++) {
            b1[i]=sc.nextInt();
        }
        for (int i = 0; i < a2; i++) {
            b2[i]=sc.nextInt();
        }
        long he=0;
        for (int i = 0; i < a2; i++) {
            he+=b1[b2[i]];
        }
        System.out.print(he);
    }
}