import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int i=sc.nextInt();
        String a;
        a= sc.next();
        int b1=0,l=0,b2=0;
        for (int j = 0; j <i; j++) {
            char c=a.charAt(j);
            if (c=='o'){
                b1++;
            }
            else{
                if(b1>l)
                {
                    l=b1;
                    b1=0;
                }
                else {
                    b1=0;
                }
            }
        }
        for (int j =i-1; j > 0; j--) {
            char c=a.charAt(j);
            if (c=='o'){
                b2++;
            }
            else{
                if(b2>l)
                {
                    l=b2;
                    b2=0;
                }
                else{
                    b2=0;
                }
            }
        }
        if(l==0)
        {
            System.out.print(-1);
        }
        else {
            System.out.print(l);
        }
    }
}