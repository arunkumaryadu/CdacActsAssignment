//#include<iostream>
//using namespace std;
//#define size 7
//class AllSort {
//private:
//	int arr1[size];
//	int arr2[size];
//	int arr3[size];
//	int arr4[size];
//	int arr5[size];
//
//public:
//	AllSort() {
//		for (int i = 0; i<size; i++) {
//			arr1[i] = 0;
//			arr2[i] = 0;
//		}
//	}
//	void InputData() {
//		int val;
//		cout << "Enter Array Element ...." << endl;
//		for (int i = 0; i<size; i++) {
//			cin >> val;
//			arr1[i] = val;
//			arr2[i] = val;
//			arr3[i] = val;
//			arr4[i] = val;
//			arr5[i] = val;
//		}
//		cout << "=============================================" << endl;
//		cout << "Your Array is :" << endl;
//		showData(arr1);
//		cout << "=============================================" << endl;
//	}
//	void InsertionSort() {
//		int key;
//		for (int i = 1; i<size; i++) {
//			key = arr1[i];
//			int j = i - 1;
//			while (j >= 0 && arr1[j]>key) {
//				arr1[j + 1] = arr1[j];
//				j = j - 1;
//				arr1[j + 1] = key;
//			}
//		}
//		cout << "=============================================" << endl;
//		cout << "After Insertion Sort Your Array is :" << endl;
//		showData(arr1);
//		cout << "=============================================" << endl;
//
//	}
//	void BubbleSort() {
//		for (int i = 0; i<size - 1; i++) {
//			for (int j = 0; j<size - 1 - i; j++) {
//				if (arr2[j]>arr2[j + 1]) {
//					int temp = arr2[j];
//					arr2[j] = arr2[j + 1];
//					arr2[j + 1] = temp;
//				}
//			}
//		}
//		cout << "=============================================" << endl;
//		cout << "After Bubble Sort Your Array is :" << endl;
//		showData(arr2);
//		cout << "=============================================" << endl;
//
//	}
//	void SelectionSort() {
//		// One by one move on unsorted subarray
//		// Find the minimum element in unsorted array
//		// Swap the found minimum element with the first element
//		for (int i = 0; i<size - 1; i++) {
//			for (int j = i + 1; j<size; j++) {
//				if (arr3[i]>arr3[j]) {
//					int temp = arr3[i];
//					arr3[i] = arr3[j];
//					arr3[j] = temp;
//				}
//			}
//		}
//		cout << "=============================================" << endl;
//		cout << "After Selection Sort Your Array is :" << endl;
//		showData(arr3);
//		cout << "=============================================" << endl;
//
//	}
//	void QuickSortCall() {
//		QuickSort(arr4, 1, size);
//		cout << "=============================================" << endl;
//		cout << "After Quick Sort Your Array is :" << endl;
//		showData(arr4);
//		cout << "=============================================" << endl;
//
//	}
//	void QuickSort(int arr4[], int start, int last) {
//		int first = start;
//		int q;
//		while (first<last) {
//			q = partitionQuick(arr4, start, last);
//			QuickSort(arr4, start, q - 1);
//			QuickSort(arr4, q + 1, last);
//			first++;
//		}
//
//	}
//
//	int partitionQuick(int arr[], int start, int end) {
//		int pivot = arr[end];
//		int i = start - 2;
//		for (int j = start - 1; j <= end - 1; j++) {
//			if (arr[j]<pivot) {
//				i++;
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//		int temp = arr[i + 1];
//		arr[i + 1] = arr[end];
//		arr[end] = temp;
//		return i + 1;
//	}
//	void showData(int arr[]) {
//		for (int i = 0; i<size; i++) {
//			cout << arr[i] << "\t";
//		}
//		cout << endl;
//	}
//
//};
//int main() {
//
//	// Merge sort sir se puchhna hai...
//
//	AllSort al;
//	al.InputData();
//	al.InsertionSort();
//	al.BubbleSort();
//	al.SelectionSort();
//	al.QuickSortCall();
//	//al.showData();
//	return 0;
//}