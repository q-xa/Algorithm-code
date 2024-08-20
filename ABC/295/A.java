

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, c=0;
        a = sc.nextInt();
        String b;
        for (int i = 0; i < a; i++) {
            b=sc.next();
            if(b.compareTo("and")==0){
                c=1;
            }
            else if(b.compareTo("not")==0){
                c=1;
            }
            else if(b.compareTo("that")==0){
                c=1;
            }
            else if(b.compareTo("the")==0){
                c=1;
            }
            else if(b.compareTo("you")==0){
                c=1;
            }
        }
        if(c==1){
            System.out.print("Yes");
        }
        else{
            System.out.print("No");
        }
    }
}
