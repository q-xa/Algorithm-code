package lianxi;

import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        String b;
        b=sc.next();
        int c1=0,c2=0;
        for(int i=0;i<a;i++){
            char d=b.charAt(i);
            if(d=='o'){
                c1++;
            }
            if(d=='x'){
                c2++;
            }
        }
        if(c1!=0&&c2==0){
            System.out.print("Yes");
        }
        else{
            System.out.print("No");
        }
    }
}