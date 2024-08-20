
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int[][] b1=new int[a+4][a+3];
        int[][] b2=new int[a+4][a+4];
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                b1[i][j]=sc.nextInt();
            }
        }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                b2[i][j]=sc.nextInt();
            }
        }
        int c1=0,c2=0,c3=0,c4=0;
        for (int i = 0; i < a; i++) {//90
            for (int j = 0; j < a; j++) {
                if(b1[i][j]==1){
                    if(b1[i][j]!=b2[j][a-1-i]){
                        c1=1;
                    }
                }
            }
        }
        for (int i = 0; i < a; i++) {//180
            for (int j = 0; j < a; j++) {
                if(b1[i][j]==1){
                    if(b1[i][j]!=b2[a-1-i][a-1-j]){
                        c2=1;
                    }
                }
            }
        }
        for (int i = 0; i < a; i++) {//270
            for (int j = 0; j < a; j++) {
                if(b1[i][j]==1){
                    if(b1[i][j]!=b2[a-j-1][i]){
                        c3=1;
                    }
                }
            }
        }
        for (int i = 0; i < a; i++) {//0
            for (int j = 0; j < a; j++) {
                if(b1[i][j]==1){
                    if(b1[i][j]!=b2[i][j]){
                        c4=1;
                    }
                }
            }
        }
        if(c1==0||c2==0||c3==0||c4==0){
            System.out.print("Yes");
        }
        else{
            System.out.print("No");
        }
    }
}