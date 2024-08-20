package lianxi;

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, c=0;
        a = sc.nextInt();
        String b=sc.next();
        for(int i=0;i<a-1;i++){
            if(b.charAt(i)==b.charAt(i+1)){
                c=1;
            }
        }
        if(c==0){
            System.out.print("Yes");
        }
        else{
            System.out.print("No");
        }
    }
}
