#include <iostream>


void bubble_sort(int arr[], int n){
	for(int times=1; times <= n-1; times++){
		for(int j = 0; j <= n - times - 1; j++) {
			if(arr[j] > arr[j+1])
				std::swap(arr[j], arr[j+1]);
		}
	}
}


int main(){
	int fun[4] = {1,2,3,4};
	
	bubble_sort(fun, (sizeof(fun)/sizeof(int)));
	

	for(int i=0; i<(sizeof(fun)/sizeof(int)); i++)
			std::cout << fun[i] << std::endl;

	std::cout << "Hi, hello" << std::endl;
	return 0;
}

