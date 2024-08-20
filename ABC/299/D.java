
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int l=1,r=a-1;
        while(l<=r){
            int x;
            int mid=(l+r)/2;
            System.out.println("? "+mid);
            x= sc.nextInt();
            if(x==1){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        System.out.print("! "+(l+r)/2);
    }
}