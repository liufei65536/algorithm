#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int first, k, n, temp;
	cin >> first >> n >> k; //�׵�ַ���ڵ��������ת��
	int *data = new int[100005];
	int	*next = new int[100005]; //����������new,��Ȼ���г���ջ�����
	int list[100005]; //����list������˳���ŵ�ַ
	//address data next
	for (int i = 0; i < n; i++) {
		cin >> temp;
		cin >> data[temp] >> next[temp];
	}
	int sum = 0;
	//������ַ����list��
	while (first != -1) {
		list[sum++] = first;
		first = next[first];
	}
	//��ת
	for (int i = 0; i < (sum - sum % k); i += k) {
		reverse(begin(list) + i, begin(list) + i + k);
	}
	for (int i = 0; i < sum - 1; i++)
		printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
	printf("%05d %d -1", list[sum - 1], data[list[sum-1]]);
	delete[] data;
	delete[] next;
	return 0;
}
