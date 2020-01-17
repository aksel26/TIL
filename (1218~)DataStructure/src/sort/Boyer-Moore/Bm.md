## Boyer-Moore

> 오른쪽에서 왼쪽으로 문자열 비교. 하지만 이동은 왼쪽에서 오른쪽.

- KMP 알고리즘과 유사하나 text에서 비교하지 않을 부분을 건너띔

- 간단한 코드

  ```java
  
  package BoyerMoore;
  
  public class BoyerMoore {
  
  	static int bmMatch(String txt, String pat) {
  	
  	int pt ;
  	int pp ;
  	int txtlen = txt.length();
  	int patlen = pat.length();
  	int[] skip = new int[Character.MAX_VALUE+1]; //건너뛰기 표
  
  	
  	//건너뛰기 표 만들기
  	
  	for(pt = 0 ; pt<= Character.MAX_VALUE ; pt ++) {
  		skip[pt] =patlen;
  	}
  	for(pt = 0 ; pt<patlen - 1; pt++) {
  		skip[pat.charAt(pt)]=patlen - pt -1;
  		
  	}
  	
  	//검색
  	
  	while(pt<patlen) {
  		
  		// pat의 끝 문자에 주목
  		pp = patlen -1;
  		
  		
  		
  		while(txt.charAt(pt)==pat.charAt(pp)) {
  			if(pp==0) {
  				return pt;
  			}
  			
  			pp--;
  			pt--;
  		}
  		
  		pt += (skip[txt.charAt(pt)]> patlen-pp) ?skip[txt.charAt(pt)] : patlen- pp;
  		
  	}
  	return -1;
  	
  	}
  	public static void main(String[] args) {
  		
  	}
  
  }
  ```

  

- 2가지 이동방법

  1. 나쁜 문자 이동

     - 순서 

       <img width="861" alt="스크린샷 2020-01-17 오후 5 21 28" src="https://user-images.githubusercontent.com/50945713/72595754-e1b19c80-394d-11ea-9b2f-4101e56f740b.png">

  2. 착한 접미부 이동