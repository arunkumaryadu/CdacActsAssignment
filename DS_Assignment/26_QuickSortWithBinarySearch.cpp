#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 7
class AllSort {
private:	
	int arr4[size];
public:
	AllSort() {
		for (int i = 0; i<size; i++) {
			arr4[0] = 0;
		}
	}
	void InputData() {
		int val;
		cout << "Enter Array Element ...." << endl;
		for (int i = 0; i<size; i++) {
			cin >> val;			
			arr4[i] = val;			
		}
		cout << "=============================================" << endl;
		cout << "Your Array is :" << endl;
		showData(arr4);
		cout << "=============================================" << endl;
	}
		
	void QuickSort(int arr4[], int start, int last) {
		int first = start;
		int q;
		while (first<last) {
			q = partitionQuick(arr4, start, last);
			QuickSort(arr4, start, q - 1);
			QuickSort(arr4, q + 1, last);
			first++;
		}
	}
	int partitionQuick(int arr[], int start, int end) {
		int pivot = arr[end];
		int i = start - 2;
		for (int j = start - 1; j <= end - 1; j++) {
			if (arr[j]<pivot) {
				i++;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		int temp = arr[i + 1];
		arr[i + 1] = arr[end];
		arr[end] = temp;
		return i + 1;
	}
	int BinarySearch(int arr[], int start, int end,int val) {
		int n = -1; int mid;
		if (end >= start) {
			 mid = (start + end) / 2;
			if (arr[mid] == val) {
				n= mid;
			}
			if (arr[mid] > val) {
				return BinarySearch(arr, 0, mid - 1, val);
			}
			if (arr[mid] < val) {
				return BinarySearch(arr, mid + 1,end, val);
			}
		}
		return n;
	}
	void showData(int arr[]) {
		for (int i = 0; i<size; i++) {
			cout << arr[i] << "\t";
		}
		cout << endl;
	}

	void menu() {
		int choice;
		cout << "1->Input Data\n2-> Quick Sort\n3->Binary Search\n4->Show List\n5->Exit" << endl;
		cout << "Enter Your Choice ...." << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			InputData();
			break;
		case 2:
			QuickSort(arr4, 0, size-1);
			break;
		case 3:
			int val,n;
			cout << "Enter Value To be search in Array.." << endl;
			cin >> val;
			n=BinarySearch(arr4, 0, size - 1, val);
			if (n == -1)
				cout << val << " is not In list" << endl;
			else
				cout << val << " is in Position "<<n+1 << endl;
			break;
		case 4:
			showData(arr4);
			break;
		case 5:
			exit(0);
		default:
			cout << "Please Enter Valid choice ...." << endl;
			break;
		}
		while (choice != 5)
			menu();		
	}

};
int main() {

	AllSort al;
	al.menu();
	return 0;
}