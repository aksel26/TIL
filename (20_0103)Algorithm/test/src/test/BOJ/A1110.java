package test.BOJ;

import java.util.Scanner;
public class A1110 {
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
        int fn=sc.nextInt();
        int cnt=0; int x=fn;
        
        while(true) {
            if(x<10) {
                x=10*x+x;
                cnt++;
            }else {
                x=((x%10+x/10)%10)+10*(x%10);
                cnt++;
            }
            if(x==fn)break;
        }
        System.out.println(cnt);
    }
}