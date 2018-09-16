#include<iostream>
#include<list>
using namespace std;
class MergeSortedList {
	list<int> l1, l2, l3;
	int pos, choice, val;
public:
	void menu() {
		cout
				<< "\n==================================================================="
				<< endl;
		cout << "Please Enter Your choice" << endl;
		cout << "1->Push at front of first list\n2->Push At back of first list"
				<< endl;
		cout
				<< "3->Push at front of Second list\n4->Push At back of Second list"
				<< endl;

		cout
				<< "5->Pop From front of first list\n6->Pop From back of first list"
				<< endl;
		cout
				<< "7->Pop From front of Second list\n8->Pop From back of Second list"
				<< endl;

		cout
				<< "9->Reverse First List\n10->Show first List\n11->Show total nodes in first list\n"
				<< endl;
		cout
				<< "12->Reverse Second List\n13->Show second List\n14->Show  total nodes in second\n"
				<< endl;
		cout
				<< "15->->Show Merged List\n16->Show total nodes in Merged List\n17->Exit"
				<< endl;

		cin >> choice;
		cout
				<< "\n==================================================================="
				<< endl;

		switch (choice) {
		case 1:
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			l1.push_front(val);
			//cout<<val<<" is pushed At First"<<endl;
			break;

		case 2:
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			l1.push_back(val);
			//cout<<val<<" is pushed At last"<<endl;
			break;
		case 3:
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			l2.push_front(val);
			break;
		case 4:
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			l2.push_back(val);
			break;
		case 5:
			l1.pop_front();
			break;
		case 6:
			l1.pop_back();
			break;
		case 7:
			l2.pop_front();
			break;
		case 8:
			l2.pop_back();
			break;
		case 9:
			l1.reverse();
			break;
		case 10:
			showlist(l1);
			break;
		case 11:
			l1.size();
			break;
		case 12:
			l2.reverse();
			break;
		case 13:
			showlist(l2);
			break;
		case 14:
			l2.size();
			break;
		case 15:
			l3 = MergeList(l1, l2);
			showlist(l3);
			break;
		case 16:
			l3 = MergeList(l1, l2);
			l3.size();
			break;
		case 17:
			break;
		default:
			cout << "\nPlease Enter Valid Choice" << endl;
			break;
		}
		while (choice != 17) {
			menu();
		}

	}

	void showlist(list<int> l) {
		list<int>::iterator it;
		for (it = l.begin(); it != l.end(); ++it)
			cout << '\t' << *it;
		cout << '\n';
	}
	list<int> MergeList(list<int> l1, list<int> l2) {
		list<int> l3;
		for(int i=0;i<(l1.size()+l2.size());i++){
			if (l1.front() <= l2.front()) {
						l3.push_back(l1.front());
						l1.pop_front();
					} else {
						l3.push_back(l2.front());
						l2.pop_front();
					}
		}
		return l3;
	}

};
int main() {
	MergeSortedList obj;
	obj.menu();
	return 0;
}

/*
 front() – Returns the value of the first element in the list
 back() – Returns the value of the last element in the list
 push_front(g) – Adds a new element ‘g’ at the beginning of the list
 push_back(g) – Adds a new element ‘g’ at the end of the list
 pop_front() – Removes the first element of the list, and reduces size of the list by 1
 pop_back() – Removes the last element of the list, and reduces size of the list by 1
 begin() – Returns an iterator pointing to the first element of the list
 end() – Returns an iterator pointing to the theoretical last element which follows the last element
 empty() – Returns whether the list is empty(1) or not(0)
 insert() – Inserts new elements in the list before the element at a specified position
 erase() – Removes a single element or a range of elements from the list
 assign() – Assigns new elements to list by replacing current elements and resizes the list
 remove() – Removes all the elements from the list, which are equal to given element
 reverse() – Reverses the list
 size() – Returns the number of elements in the list
 sort() – Sorts the list in increasing order
 */
