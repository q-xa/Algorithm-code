
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=8,c=0,d=-1,e=0;
        String b=sc.next();
        for(int i=0;i<a;i++){
            char f=b.charAt(i);
            if(f=='R'){
                c++;
            }
            if(f=='K'&&c!=1){
                e=1;
            }
            if(f=='B'&&d==-1){
                d=i;
            }
            else if(f=='B'&&d!=-1){
                if(i%2==d%2){
                    e=1;
                }
            }
        }
        if(e==0) System.out.print("Yes");
        else System.out.print("No");
    }
}