
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b= sc.nextInt();
        int[] c=new int[a+2];
        for (int i = 0; i < a; i++) {
            c[i]=sc.nextInt();
        }
        int d=0;
        for (int i = 1; i < a; i++) {
            if(c[i]-c[i-1]<=b&&d==0){
                System.out.print(c[i]);
                d=1;
            }
        }
        if(d!=1) System.out.print(-1);
    }
}