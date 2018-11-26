#include<iostream>
using std::cin;
using std::cout;
void move(int arr[], int n_arr);
int main()
{
	int n_array;
	cin >> n_array;
	int move_times;
	cin >> move_times;
	int * original_array = new int[n_array];
	for (int i = 0; i < n_array; i++) {
		cin >> original_array[i];
	}
	for (int j = 0; j < move_times; j++) {
		move(original_array,n_array);
	}
	for (int i = 0; i < n_array-1; i++) {
		cout<< original_array[i]<<" ";
	}
	cout << original_array[n_array - 1];
	return 0;
}
void move(int arr[], int n_arr) {
	int temp = arr[n_arr - 1];
	for (int i = n_arr - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}