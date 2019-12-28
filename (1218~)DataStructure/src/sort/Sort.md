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

> 이웃한 두 요소의 대소관계를 비교해 교환을 반복
>
> 일련의 과정들을 (비교, 교환작업) 패스(pass)라고 한다.

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

- 요솟값 비교 횟수 (n^2 -n)/2 회

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

- 2번째 요소부터 선택해 진행한다. 
- n-1회 반복한다.
- 알맞은 위치 ? 이동하면서 비교하여 선택 값 이하의 값을 만나면 삽입할 값을 대입한다.
  - tmp =a[i]	
  - 반복제어용 변수 j = i -1
  - 정렬된 열의 왼쪽 끝에 도달한다.( j가 0보다 크다. )
  - tmp보다 작거나 같은 key를 갖는 항복 a[j]를 발견한다. ( a[j-1] 값이 tmp보다 크다. )
  - 요소의 비교횟수 및 교환횟수 = n^2/2 회

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
   - 정렬을 마쳤거나 거의 마치게 되면 정렬속도가 매우 빨라짐 (장점)
   - 삽입할 위치가 멀면 이동(대입)해야 하는 횟수가 많아진다. (단점)