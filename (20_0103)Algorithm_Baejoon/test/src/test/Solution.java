package test;

import java.util.Scanner;

public class Solution {
    
    
    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        
//        int a = sc.nextInt();
//        int b = sc.nextInt();
//
//        for(int i= 0 ; i< b ; i++){
//        	
//            for(int j = 0 ; j< a ; j++){
//            	System.out.print("*");
//            }
//            System.out.println();
//        }
//
//        
//        
        
        int[][] multiArray= {
        		{1,2,3,4},
        		{5,6,7,8},
        		{9,10,11,12}
        };
        
//        System.out.println(multiArray[0]);
        
//    	int [][] multiArray = new int[3][4];
//        for(int i = 0 ; i<multiArray[0].length ; i ++) {
//        	multiArray[0][i] = 1 +i;
//        	System.out.print(multiArray[0][i]);
//        }
        
        for(int i = 0 ; i<multiArray.length ;i++) {
        	for(int j = 0 ; j<multiArray[i].length ; j++) {
        		System.out.print(multiArray[i][j] + " ");
        	}
        	System.out.println();
        }
        
//        System.out.println(multiArray);
//        int[][] multiArray2  = new int[3][4];
        
    }
}