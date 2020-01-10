package sort;

import java.util.Arrays;
import java.util.GregorianCalendar;
import static java.util.GregorianCalendar.*;
public class SortCalender {

	public static void main(String[] args) {
		
		GregorianCalendar[] x = {
				new GregorianCalendar(2017, NOVEMBER, 1),
				new GregorianCalendar(1963, OCTOBER, 18),
				new GregorianCalendar(1985, APRIL, 5),
				
		};
		
		Arrays.sort(x);
		
		for(int i = 0 ; i<x.length ; i++) {
			System.out.printf("%04d년 %02d월 %02d일\n", 
			
			x[i].get(YEAR),
			x[i].get(MONTH)+1,
			x[i].get(DATE)
			);
		}
		
		
		
		
	}

}



//	출력
//	
//	1963년 10월 18일
//	1985년 04월 05일
//	2017년 11월 01일