#include <iostream>

void insertion_sort(int arr[], int n){
	for (int times = 1; times < n ; times ++){
		int current = arr[times];
		int prev = times - 1;

		while(prev>=0 and arr[prev] > current){
			arr[prev + 1] = arr[prev];
			prev -= 1;
		}
		arr[prev+1] = current;
	}
}




int main(){
	int arr[5] = {2, 3, 1, 5, 4};
	
	insertion_sort(arr, (sizeof(arr)/sizeof(int)));

	for(auto x: arr)
		std::cout << x << ", ";
	std::cout << std ::endl;
	return 0;
}
