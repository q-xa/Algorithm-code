package lianxi;

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a=8, c=8;
//        a = sc.nextInt();
        String[] b=new String[10];
        String d="abcdefgh";
        for (int i = 0; i < 8; i++) {
            b[i]=sc.next();
        }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < c; j++) {
                if(b[i].charAt(j)=='*'){
                    System.out.print(d.charAt(j));
                    System.out.print(8-i);
                }
            }
        }
    }
}
