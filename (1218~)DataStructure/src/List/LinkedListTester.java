package List;

import java.util.Comparator;
import java.util.Scanner;

public class LinkedListTester {
	static Scanner scn = new Scanner(System.in);

	static class Data {
		static final int NO = 1;
		static final int NAME = 2;

		private Integer no;
		private String name;

		@Override
		public String toString() {
			return "no=" + no + ", name=" + name;
		}

		void ScanData(String guide, int sw) {
			System.out.println(guide + " 할데이터를 입력하세요");

			if ((sw & NO) == NO) {
				System.out.println("번호 : ");
				no = scn.nextInt();
			}

			if ((sw & NAME) == NAME) {
				System.out.println("이름 : ");
				name = scn.next();
			}

		}

		public static final Comparator<Data> NO_ORDER = new NoOrderComparator();

		private static class NoOrderComparator implements Comparator<Data> {
			public int compare(Data d1, Data d2) {
				return (d1.no > d2.no) ? 1 : (d1.no < d2.no) ? -1 : 0;
			}
		}

		public static final Comparator<Data> NAME_ORDER = new NameOrderComparator();

		private static class NameOrderComparator implements Comparator<Data> {
			public int compare(Data d1, Data d2) {
				return d1.name.compareTo(d2.name);
			}
		}

	}

	enum Menu {
		ADD_FIRST("머리에 노드를 삽입"), ADD_LAST("꼬리에 노드를 삽입"), RMV_FIRST("머리 노드를 삭제"), RMV_LAST("꼬리 노드를 삭제"),
		RMV_CRNT("선택 노드를 삭제"), CLEAR("모든 노드를 삭제"), SEARCH_NO("번호로 검색"), SEARCH_NAME("이름으로 검색"), NEXT("선택 노드로 이동"),
		PRINT_CRNT("선택 노드를 출력"), DUMP("모든 노드를 출력"), TERMINATE("종료");

		private final String message; // 출력할 문자열

		Menu(String string) {
			message = string;
		}

		static Menu MenuAt(int idx) {
			for (Menu i : Menu.values())
				if (i.ordinal() == idx)
					return i;
			return null;
		}

		String getMessage() {
			return message;
		}

	}

	static Menu SelectMenu() {
		int key;
		do {
			for (Menu m : Menu.values()) {
				System.out.printf("(%d) %s ", m.ordinal(), m.getMessage());
				if ((m.ordinal() % 3) == 2 && m.ordinal() != Menu.TERMINATE.ordinal())
					System.out.println();

			}
			System.out.print(" : ");
			key = scn.nextInt();
		} while (key < Menu.ADD_FIRST.ordinal() || key > Menu.TERMINATE.ordinal());
		return Menu.MenuAt(key);
	}

	public static void main(String[] args) {
		Menu menu;
		Data data;
		Data ptr;
		Data temp = new Data();

		LinkedList<Data> list = new LinkedList<Data>(); // 리스트를 생성

		do {
			switch (menu = SelectMenu()) {
			case ADD_FIRST:
				data = new Data();
				data.ScanData("머리에 노드를 삽입", Data.NO | Data.NAME);
				list.addFirst(data);
				break;

			case ADD_LAST:
				data = new Data();
				data.ScanData("꼬리에 삽입", Data.NO | Data.NAME);
				list.addLast(data);
				break;

			case RMV_FIRST:
				list.removeFirst();

				break;

			case RMV_LAST:
				list.removeLast();
				break;

			case RMV_CRNT:
				list.removeCurrentNode();
				break;

			case SEARCH_NO:
				temp.ScanData("검색", Data.NO);
				ptr = list.search(temp, Data.NO_ORDER);
				if (ptr == null) {
					System.out.println("해당 번호의 데이터가 없다");
				} else {
					System.out.println("검색 성공 : " + ptr);
				}

				break;

			case SEARCH_NAME:
				temp.ScanData("검색", Data.NAME);
				ptr = list.search(temp, Data.NAME_ORDER);
				if (ptr == null) {
					System.out.println("해당이름의 데이터가 없다.");

				} else {
					System.out.println("검색 성공 : " + ptr);
				}
				break;

			case NEXT:
				list.next();
				break;

			case PRINT_CRNT:
				list.printCurrentNode();
				break;

			case DUMP:
				list.dump();
				break;

			case CLEAR:
				list.clear();
				break;
			default:
				break;
			}

		} while (menu != Menu.TERMINATE);

	}

}


// 출력


//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 
//	0
//	머리에 노드를 삽입 할데이터를 입력하세요
//	번호 : 
//	1
//	이름 : 
//	모모
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 1
//	꼬리에 삽입 할데이터를 입력하세요
//	번호 : 
//	5
//	이름 : 
//	나연
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 0
//	머리에 노드를 삽입 할데이터를 입력하세요
//	번호 : 
//	10
//	이름 : 
//	정연
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 1
//	꼬리에 삽입 할데이터를 입력하세요
//	번호 : 
//	12
//	이름 : 
//	사나
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 0
//	머리에 노드를 삽입 할데이터를 입력하세요
//	번호 : 
//	14
//	이름 : 
//	지효
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 3
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 7
//	검색 할데이터를 입력하세요
//	이름 : 
//	사나
//	검색 성공 : data [no=12, name=사나]
//			
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 6
//	검색 할데이터를 입력하세요
//	번호 : 
//	10
//	검색 성공 : data [no=10, name=정연]
//			
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 9
//	선택 노드는 : data [no=10, name=정연]
//			
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 10
//	data [no=10, name=정연]
//	data [no=1, name=모모]
//	data [no=5, name=나연]
//	data [no=12, name=사나]
//			
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 6
//	검색 할데이터를 입력하세요
//	번호 : 
//	1
//	검색 성공 : data [no=1, name=모모]
//			
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 4
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 2
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 0
//	머리에 노드를 삽입 할데이터를 입력하세요
//	번호 : 
//	0
//	이름 : 
//	쯔위
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 10
//	data [no=0, name=쯔위]
//	data [no=1, name=모모]
//	data [no=5, name=나연]
//	data [no=12, name=사나]
//			
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 4
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 2
//	
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 10
//	data [no=5, name=나연]
//	data [no=12, name=사나]
//			
//	(0) 머리에 노드를 삽입 (1) 꼬리에 노드를 삽입 (2) 머리 노드를 삭제 
//	(3) 꼬리 노드를 삭제 (4) 선택 노드를 삭제 (5) 모든 노드를 삭제 
//	(6) 번호로 검색 (7) 이름으로 검색 (8) 선택 노드로 이동 
//	(9) 선택 노드를 출력 (10) 모든 노드를 출력 (11) 종료  : 11