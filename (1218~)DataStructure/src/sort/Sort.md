# Sort

> 일정한 순서로 정렬하는 알고리즘  

## 내부정렬과 외부정렬

### 내부정렬

> 하나의 배열에서 작업할 수 있는 경우에 사용  

### 외부정렬

> 하나의 배열에서 작업할 수 없는 경우  

## 정렬 알고리즘의 핵심요소

> 교환, 선택, 삽입  

## Bubble Sort

> 이웃한 두 요소의 대소관계를 비교해 교환을 반복일련의 과정들을 (비교, 교환작업) 패스(pass)라고 한다.  
i. 요소 개수가 n인 배열에서 n-1회 비교, 교환을 하고 나면 가장 작은 요소가 맨 처음으로 이동. (1 pass)

ii. n-2회 비교 (2 pass) 정렬할 요소가 하나씩 줄어들기 때문이다.
==> 패스를 k회 수행하면 앞쪽의 요소 k개가 정렬된다.
모든 정렬을 끝내려면 n-1회의 패스가 수행되어야한다.

===> 비교횟수 : n(n-1)/2
교환횟수의 평균 : n(n-1) / 4
이동횟수의 평균 : 3n(n-1) / 4 (swap메서드 안에서 값의 이동이 3회 발생)

```java
package sort;

import java.util.Scanner;

public class BubbleSort {
	static void swap(int[] a, int idx1, int idx2) {
		int t = a[idx1];
		a[idx1] = a[idx2];
		a[idx2] = t;
	}

	static void bubbleSort(int[] a, int n) {
		for (int i = 0; i < n - 1; i++) {

//			패스
			for (int j = n - 1; j > i; j--) {
				if (a[j - 1] > a[j])
					swap(a, j - 1, j);
			}
		}
	}

	static void bubbleSortV2(int[] a, int n) {
		for (int i = 0; i < n - 1; i++) {
			
			int exchg = 0;	//패스의 교환 횟수
			
			for (int j = n - 1; j > i; j--) {
				if (a[j - 1] > a[j]) {
					swap(a, j - 1, j);
					exchg++;
				}
				
			}
			if(exchg==0)break;
		}
	}
	
	
	static void bubbleSortV3(int[]a, int n) {
		int k = 0; //a[k] 보다 앞쪽은 정렬을 마친 상태, 0으로 하는 이유는 첫 번째 패스에서는 모든 요소를 검사해야 하기 때문
		
		
		while(k<n-1) {
			int last = n-1; // 마지막으로 요소를 교환한 위치, 각 패스에서 마지막으로 교환한 두 요소 가운데 오른쪽요소 (a[j])의 인덱스 저장.
			for(int j = n-1; j>k; j--) {
				if(a[j-1]>a[j]) {
					swap(a,j-1,j);
					last=j;
				}
			}
			k = last; //범위 제한
		}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("버블정렬 버전1");
		System.out.println("요솟 수:");
		int n = scn.nextInt();
		int[] x = new int[n];

		for (int i = 0; i < n; i++) {
			System.out.println("x[" + i + "] : ");
			x[i] = scn.nextInt();
		}

		selectionSort(x, n);

		System.out.println(" 오름차순으로 정렬 완료");
		for (int i = 0; i < n; i++) {
			System.out.println("[" + i + "]=" + x[i]);
		}
	}

}

//	출력

//	버블정렬 버전1
//	요솟 수:
//	4
//	x[0] : 
//	3
//	x[1] : 
//	2
//	x[2] : 
//	5
//	x[3] : 
//	6
//	 오름차순으로 정렬 완료
//	[0]=2
//	[1]=3
//	[2]=5
//	[3]=6

```

### 단순 선택 정렬

> 가장 작은 요소부터 선택해 알맞은 위치로 옮겨 순서대로 정렬하는 알고리즘  

#### 교환과정

1. 가장 작은 키의 값 ( a[min] )을 선택한다.
2. a[min] 과 아직 정렬하지 않은 부분의 첫 번째 요소를 교환한다.
3. n-1 회 반복한다.

* 요솟값 비교 횟수 (n^2 -n)/2 회

떨어져 있기 때문에 **안정적이지 않다**. 예를 들어 3이 두개일 경우 순서가 뒤바뀔 수 있다.

```java
	//단순 선택 정렬
	static void selectionSort(int[]a , int n) {
		for (int i = 0;i<n-1; i++) {
			int min = i;
			for(int j= i+1; j<n ; j++) {
				if (a[j]<a[min]) {
					min = j;
				}
			}
			swap(a,i,min);
		}
	}
```

### 단순 삽입 정렬 (셔틀 정렬)

> 선택한 요소를 그보다 더 앞쪽의 알맞은 위치에 삽입하는 작업을 반복하여 정렬  

* 2번째 요소부터 선택해 진행한다.
* n-1회 반복한다.
* 알맞은 위치 ? 이동하면서 비교하여 선택 값 이하의 값을 만나면 삽입할 값을 대입한다.
	* tmp =a[i]
	* 반복제어용 변수 j = i -1
	* 정렬된 열의 왼쪽 끝에 도달한다.( j가 0보다 크다. )
	* tmp보다 작거나 같은 key를 갖는 항복 a[j]를 발견한다. ( a[j-1] 값이 tmp보다 크다. )
	* 요소의 비교횟수 및 교환횟수 = n^2/2 회

```java
package sort;

import java.util.Scanner;

public class InsertionSort {
	static void insertionSort(int [] a, int n) {
		for(int i =0  ;i <n ; i++) {
			int j ;
			int tmp= a[i];
			for(j=i; j>0 && a[j-1]> tmp; j--) {
				a[j]  = a[j-1];
			}
			a[j] = tmp;
		}
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in)	;
		System.out.println("단순 삽입 정렬");
		System.out.println("요솟 수 : ");
		int nx = scn.nextInt()	;
		int[] x = new int[nx];
		
		for(int i = 0 ; i< nx; i++)	{
			System.out.println("x[" + i+"]:");
			x[i] =scn.nextInt()	;
		}
		
		
		insertionSort(x, nx);
		
		System.out.println(" 배열 완료");
		for(int i = 0; i<nx; i++) {
			System.out.println("x[" + i + "] =" + x[i]);
		}
	}
}
```

### 셸 정렬

> 단순 삽입 정렬의 장점 + 단점 -  

#### 특징

1. 단순 삽입 정렬의 경우
	* 정렬을 마쳤거나 거의 마치게 되면 정렬속도가 매우 빨라짐 (장점)
	* 삽입할 위치가 멀면 이동(대입)해야 하는 횟수가 많아진다. (단점)

#### 증분값(h)의 선택

* 초깃값은 너무 크면 효과가 없기 때문에 배열의 요솟수 **n을 9로 나눈 값을 넘지 않도록** 설정한다.
* h  = ... , 121, 40, 13, 4 ,1
	* 3배 한 것의 + 1을 한 수열

### 퀵정렬

> 일반적으로 사용되는 아주 빠른 정렬 알고리즘 ( Pivot 사용 )  

#### 배열을 두 그릅으로 나누기

1. 그룹을 나누기 위해 피벗을 기준으로

피벗 이하의 요소들은 피벗 왼쪽, 이상은 오른쪽으로 옮겨야 한다.

-> a[pl] >= x가 성립하는 요소를 찾을 때까지 pl 을 오른쪽으로 스캔
a[pl] <= x가 성립하는 요소를 찾을 때까지 pl 을 왼쪽으로 스캔

2. 그룹을 나누는 과정이 끝나면

피벗 이하의 그룹 : a[0], ... , a[pl -1
피벗 이상의 그룹 : a[pr +1] , ... , a[n-1]

pl > pr+1 인 경우에는
피벗과 일치하는 값을 가지는 그룹
a[pr +1] , ... , a[pl-1]

#### 퀵정렬

* 피벗을 기준으로 나누기만 했다면, 퀵정렬에서는 나눈 부분에서 각각 정렬한다.

1. pr이 a[0]보다 오른쪽에 있다면 (left < pr) 왼쪽 그룹을 나눈다.

2. pl이 a[8]보다 왼쪽에 있다면 (right>pl) 오른쪽 그룹을 나눈다.

그룹의 개수가 1인 경우에는 성립하지 않음

#### 비재귀적 퀵정렬

- 두 스택의 용량은 left+right -1 (나눌 배열의 요솟수)

```java
lstack.push(left); //lstack에 left, 
rstack.push(right); //rstack에 right를 푸시

		
		while(lstack.isEmpty()!=true) {
			int pl = left = lstack.pop(); //lstack에서 팝한 값을 left에 넣고 다시 pl에 대입. —> left, pl=0
			int pr = right = rstack.pop();



	if(left<pr) {
				lstack.push(left);
				rstack.push(right);
				}
			if(pl<right) {
				lstack.push(pl);
				rstack.push(right);
				}
```

- 스택의 용량
	- 배열의 요솟수로 초기환
	1. 요소의 개수가 많은 그룹을 먼저 푸시할 경우
	2. 요소의 개수가 적은 그룹을 먼저 푸시할 경우
	- 일반적으로 요소의 개수가 적은 배열일수록 적은 횟수로 분할을 종료할 수 있다.
	- 배열의 요소 개수가 n이라면 스택에 쌓이는 데이터의 최대 갯수는 log(n)보다 적다.
	- 즉, 요소의 개수가 백만개여도 20개의 최대용량이면 충분하다.
	
- 피벗 선택하기

  - 퀵정렬 실행 효율에 큰 영향

  - 가운데 피벗을 선택하면 좋은데 데이터가 많아지면 가운데 값을 구하기 위한 연산이 더 많아져 더 비효율적일 수도 있다.

    - 방법1.
      : 나눌 배열의 요소 개수가 3 이상이면 임의로 요소 3을 선택하고 그중 중앙값인 요소를 피벗으로 선택한다.
    - 방법2.
      : 나눌 배열의 처음, 가운데 , 끝 요소를 정렬한 다음 가운데 요소와 끝에서 두번째 요소를 교환한다. 피벗으로 끝에서 두번째 요소의 값 (a[right-1])을 선택해 나눌 대상의 범위를 a[left+1]~a[right-2]로 좁힌다.

    <img width="600" alt="1" src="https://user-images.githubusercontent.com/50945713/72050639-f74b1480-3304-11ea-96a5-017f330bf903.png">

- 시간 복잡도
: O(n log n)
	
	- 최악의 시간 복잡도 : O(n^2)



### 병합정렬

> 앞부분과 뒷부분으로 나누어 각각 정렬한 후 병합하는 작업을 반복하여 정렬을 수행하는 알고리즘

#### 정렬을 마친 배열의 병합

```java
package sort;

import java.util.Scanner;

public class MergeArray {
	static void merge(int[]a, int na, int []b, int nb, int[]c) {
		int pa = 0;
		int pb = 0;
		int pc = 0;
//		작은 값을 저장한다.
		while(pa< na && pb<nb) {
			c[pc++]	= (a[pa] <= b[pb])? a[pa++] : b[pb++];
		}
//    a에 남아있는 요소를 복사한다.
		while(pa<na)
			c[pc++] = a[pa++];
    
//		b에 남아있는 요소를 복사한다.
		while(pb<nb)
			c[pc++] = b[pb++];
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		int a[] = {2,4,6,8,11,13};
		int b[]= {1,2,3,4,9,16,21};
		int c[] = new int [13];
		
		System.out.println("두 배열의 병합");
    // 배열a와  b를 병합
			merge(a, a.length, b, b.length, c);
			
			System.out.println("배열 a와 배열 b를 병합하여 c에 저장하였다.");
			System.out.println("배열 a:");
			for(int i = 0; i< a.length ; i++) {
				System.out.println("a["+i+"]="+a[i]);
				
			}
			System.out.println("배열b:");
			for(int i = 0; i< b.length; i++) {
				System.out.println("b[" + i + "[=" + b[i]);
				
			}
			System.out.println("배열 c: ");
			for(int i = 0; i<c.length ; i++) {
				System.out.println("c[" + i + "]=" +c[i]);
			}
		
		
	}

}
```



#### 병합정렬

1. 앞부분과 뒷부분을 나눈다.
2. 앞부분과 뒷부분을 각각 정렬하고
3. 정렬된 배열들을 다시 병합정렬로 정렬한다.

```java
package sort;

import java.util.Scanner;

public class MergeSort {

	static int[] buff; // 작업용 배열

	// a[left] ~ a[right]를 재귀적으로 병합 정렬
	static void __mergeSort(int[] a, int left, int right) {
		if (left < right) {
			int i;
			int center = (left + right) / 2;
			int p = 0;
			int j = 0;
			int k = left;

			__mergeSort(a, left, center);// 배열의 앞부분을 병합 정렬
			__mergeSort(a, center + 1, right);// 배열의 뒷부분을 병 정렬

			for (i = left; i <= center; i++) {
				buff[p++] = a[i];

			}
			while (i <= right && j < p) {
				a[k++] = (buff[j] <= a[i]) ? buff[j++] : a[i++];
			}
			while (j < p) {
				a[k++] = buff[j++];

			}

		}

	}

//	병합정렬
	static void mergeSort(int[] a, int n) {
		buff = new int[n];

		__mergeSort(a, 0, n - 1); // 배열 전체를 병합정렬

		buff = null; // 작업용 배열을 해제
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("병합정렬");
		System.out.print("요솟수 : ");
		int num = scn.nextInt();

		int[] x = new int[num];

		for (int i = 0; i < num; i++) {
			System.out.print("x[" + i + "] :");
			x[i] = scn.nextInt();
		}

		mergeSort(x, num);

		System.out.println("오름차순으로 정렬하였습니다.");
		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "] = " + x[i]);
		}

	}

}

//	출력

//	병합정렬
//	요솟수 : 6
//	x[0] :4
//	x[1] :5
//	x[2] :6
//	x[3] :3
//	x[4] :4
//	x[5] :3
//	오름차순으로 정렬하였습니다.
//	x[0] = 3
//	x[1] = 3
//	x[2] = 4
//	x[3] = 4
//	x[4] = 5
//	x[5] = 6

```



#### arrays.sort로 병합정렬 & 퀵소트 하기

> java.util.Arrays 클래스의 클래스 메서드로 제공.

**기본 자료형 배열의 정렬**

- sort메서드가 정렬하는 알고리즘은 안정적이지 않음.
  - 배열에 같은 값이 존재하는 경우 같은 값 사이에 순서가 뒤바뀔 수 있다.

**클래스 객체 배열의 정렬 (병합 정렬)**

<img width="243" alt="스크린샷 2020-01-10 오후 2 48 31" src="https://user-images.githubusercontent.com/50945713/72129084-62095800-33b8-11ea-9ca5-35a7cf4c7d78.png">

- 안정적인 결과 보장

1. 자연정렬이 필요한 배열

   ```java
   static void sort(Object a[])
   static void sort(Object a[], int fromIndex, int toIndex)
   ```

   ```java
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
   ```

   

2. 자연정렬이 필요하지 않은 배열

   요소의 대소관계 비교 시 comparator. c를 사용하여 정렬

   ```java
   static <T> void sort(T [] a, Compararator<? super T> c)
   static <T> void sort(T [] a, int fromIndex, int toIndex, Compararator<? super T> c)
   ```

   

   - 키를 기준으로 오름차순 정렬

   ```java
   package sort;
   
   import java.util.Arrays;
   import java.util.Comparator;
   import java.util.Scanner;
   
   public class PhyscExamSort {
   
   	static class PhyscData {
   		String name;
   		int height;
   		double vision;
   
       
       //생성자
   		PhyscData(String name, int height, double vision) {
   
   			this.name = name;
   			this.height = height;
   			this.vision = vision;
   		}
   
   		public String toString() {
   			return name + " " + height + " " + vision;
   		}
   
       
       //키 오름차순용 comparator
   		static final Comparator<PhyscData> HEIGHT_ORDER = new HeightOrderComparator();
   
   		private static class HeightOrderComparator implements Comparator<PhyscData> {
   			public int compare(PhyscData d1, PhyscData d2) {
   				return (d1.height > d2.height) ? 1 : (d1.height < d2.height) ? -1 : 0;
   			}
   		}
   
   	}
   
   	public static void main(String[] args) {
   		Scanner scn = new Scanner(System.in);
   
   		PhyscData[] x = { new PhyscData("이나령", 162, 0.3), new PhyscData("전서현", 173, 0.7),
   				new PhyscData("이수민", 175, 2.0), new PhyscData("홍준기", 171, 1.5), new PhyscData("유지훈", 168, 0.4),
   				new PhyscData("이호연", 174, 1.2), new PhyscData("김한결", 169, 0.8), };
   
   		Arrays.sort(x, // 배열x
   
   				PhyscData.HEIGHT_ORDER); // HEIGHT_ORDE을 사용하여 정렬
   
   		System.out.println("###### 신체검사 리스트 ######");
   		System.out.println("이름        키   시력");
   		System.out.println("------------------------");
   		for (int i = 0; i < x.length; i++) {
   			System.out.printf("%-8s%3d%5.1f\n", x[i].name, x[i].height, x[i].vision);
   		}
   		int num = scn.nextInt();
   
   	}
   
   }
   
   
   
   //		출력
   
   
   //		###### 신체검사 리스트 ######
   //		이름        키   시력
   //		------------------------
   //		이나령     162  0.3
   //		유지훈     168  0.4
   //		김한결     169  0.8
   //		홍준기     171  1.5
   //		전서현     173  0.7
   //		이호연     174  1.2
   //		이수민     175  2.0
   
   ```




### 힙정렬

- 부모는 a[(i-1)/2]
- 왼쪽 자식은 a[ ßi * 2 + 1]
- 오른쪽 자식은 a[ i * 2 + 2 ]

#### 힙정렬의 시간 복잡도

- 단순 선택 정렬에서 가장 큰 요소를 선택할 때의 시간 복잡도 O (n)의 값을 한번에 선택할 수 있어 O (1)
  - 힙 정렬에서 다시 힙으로 만드는 작업의 시간 복잡도 : O(log n)
- O(n log n)

```java
package sort;
import java.util.Scanner;
// 힙 정렬

class HeapSort {
	// 배열 요소 a[idx1]과 a[idx2]의 값을 바꿉니다. 
	static void swap(int[] a, int idx1, int idx2) {
		int t = a[idx1];  
		a[idx1] = a[idx2];  
		a[idx2] = t;
	}

	// a[left] ~ a[right]를 힙으로 만듭니다. 
	static void downHeap(int[] a, int left, int right) {
		int temp = a[left];				// 루트
		int child;						// 큰 값을 가진 노드
		int parent;						// 부모

		for (parent = left; parent < (right + 1) / 2; parent = child) {
			int cl = parent * 2 + 1;							// 왼쪽 자식
			int cr = cl + 1;									// 오른쪽 자식
			child = (cr <= right && a[cr] > a[cl]) ? cr : cl;	// 큰 값을 가진 노드를 자식에 대입 
			if (temp >= a[child])
				break;
			a[parent] = a[child];
		}
		a[parent] = temp;
	}

	// 힙 정렬
	static void heapSort(int[] a, int n) {
		for (int i = (n - 1) / 2; i >= 0; i--)	// a[i] ~ a[n-1]를 힙으로 만들기
			downHeap(a, i, n - 1);

		for (int i = n - 1; i > 0; i--) {
			swap(a, 0, i);				// 가장 큰 요소와 아직 정렬되지 않은 부분의 마지막 요소를 교환
			downHeap(a, 0, i - 1);		// a[0] ~ a[i-1]을 힙으로 만듭니다.
		}
	}

	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);

		System.out.println("힙 정렬");
		System.out.print("요솟수：");
		int nx = stdIn.nextInt();
		int[] x = new int[nx];

		for (int i = 0; i < nx; i++) {
			System.out.print("x[" + i + "]：");
			x[i] = stdIn.nextInt();
		}

		heapSort(x, nx);	// 배열 x를 힙 정렬합니다.

		System.out.println("오름차순으로 정렬했습니다.");
		for (int i = 0; i < nx; i++)
			System.out.println("x[" + i + "]＝" + x[i]);
	}
}


//	출력


//	힙 정렬
//	요솟수：6
//	x[0]：9
//	x[1]：85
//	x[2]：3
//	x[3]：5
//	x[4]：3
//	x[5]：5
//	오름차순으로 정렬했습니다.
//	x[0]＝3
//	x[1]＝3
//	x[2]＝5
//	x[3]＝5
//	x[4]＝9
//	x[5]＝85

```



### 도수 정렬

> 요소의 대소관계를 판단하지 않고 빠르게 정렬 가능한 알고리즘

1. 도수분포표 작성

   도수분포표를 위한 배열에서 모든 요소의 값들을 0으로 초기화한다.

   ```java
   for(int i = 0; i< n ; i++){
      f[a[i]]++;
      }
   ```

2. 누적도수분포표 작성

   ```java
   for(int i = 1 ; i<= max ;i ++){
     f[i] = f[i -1];
   }
   ```

3. 목적 배열 만들기

   ```java
   for (int i = n - 1; i >= 0; i--)
   			b[--f[a[i]]] = a[i];
   ```

4. 배열 복사

   ```java
   for(int i = 0 ; i< n ; i++){
     a[i] = b[i];
   }
   ```

   

- 4번의 for문
- 데이터의 비교 & 교환작업이 없어 매우 빠름.
- <u>도수분포표가 필요하기 때문에 데이터의 최솟값, 최댓값을 미리 알고 있을 때만 사용 가능</u>
- 안정적임



