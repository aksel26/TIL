package arrays;

//1000������ �Ҽ� ���� (���� 3)
public class PrimeNumber3 {

	public static void main(String[] args) {
		int counter = 0;
		int ptr = 0;
		int[] prime = new int[500];

		prime[ptr++] = 2; // 2�� �Ҽ���
		prime[ptr++] = 3; // 3�� �Ҽ���

		for (int n = 5; n <= 1000; n += 2) { // �ٱ��� for���� Ȧ����
			
			boolean flag = false;


			for (int i = 1; prime[i] * prime[i] <= n; i++) { // �簢���� �������δ�Ī�� �̷�� �ְ� �������� ���� �Ǵ�.
//																n�� ������ ������ � �Ҽ��ε� ������ �������� �ʴ´�.
//																�����ٺ��� ������ ���ϴ� ���� �� ������ ������ prime[i] * prime[i]���ش�.
				
				counter += 2; //prime[i] * prime[i], n % prime[i[ ������ ���� Ƚ���� �˱� ��
				if (n % prime[i] == 0) {
					flag = true;
				break;
			}
			}

			if (!flag) { // ���������� ������ �������� ��
				prime[ptr++] = n; // �Ҽ���� �迭�� ��
				counter++;
			}

		}
		for (int i = 0; i < ptr; i++) {
			System.out.println(prime[i]);
		}
		System.out.println("�������� ������Ƚ�� : " + counter);
	}

}

//���
//
//2
//3
//5
//...
//991
//997
//�������� ������Ƚ�� : 3774
