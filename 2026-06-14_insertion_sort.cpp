#include <iostream>
#include <vector>
using namespace std;


void insertionSort(vector<char>& arr) {
	int arrSize = arr.size();
	for (int i = 1; i < arrSize; i++) {
		int key = arr[i]; // element to be inserted
		int j = i - 1;

		// shift elements greater than than key one position right
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;	
		}	

		arr[j + 1] = key;
	}	
}

int main() {
	cout << "Insertion Sort \n";
	vector<char> arrChars = {'i','n', 's', 'e', 'r', 't', 'i', 'o', 'n', 's', 'o', 'r', 't'};
	insertionSort(arrChars);
	int arrIndex = 0;
	while (arrIndex < arrChars.size()) {
		cout << arrChars[arrIndex];
		arrIndex++;
	}
	cout << "\n";
	return 0;
}

