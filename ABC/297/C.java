

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, c, d = -1, e = 0;
        a = sc.nextInt();
        c = sc.nextInt();
        String[] b = new String[a];
        for (int i = 0; i < a; i++) {
            b[i] = sc.next();
        }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < c - 1; j++) {
                char f1 = b[i].charAt(j);
                char f2 = b[i].charAt(j + 1);
                if ( f1 == 'T'&&f2== 'T' ) {
                    StringBuffer s = new StringBuffer(b[i]);
                    s.setCharAt(j, 'P');
                    s.setCharAt(j + 1, 'C');
                    b[i] = s.toString();
                }
            }
        }
        for (int i = 0; i < a; i++) {
            System.out.println(b[i]);
        }
    }
}