#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int first, k, n, temp;
	cin >> first >> n >> k; //首地址，节点个数，反转数
	int *data = new int[100005];
	int	*next = new int[100005]; //这两个用了new,不然运行出现栈溢出。
	int list[100005]; //数组list用来按顺序存放地址
	//address data next
	for (int i = 0; i < n; i++) {
		cin >> temp;
		cin >> data[temp] >> next[temp];
	}
	int sum = 0;
	//建立地址数组list。
	while (first != -1) {
		list[sum++] = first;
		first = next[first];
	}
	//反转
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
