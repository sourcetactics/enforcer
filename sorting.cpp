#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	// пузырьковая сортировка
	const int size = 5;
	
	int sort[size] = { 12, 5 ,48 ,1 ,4 };

	for(int step = 0; step < size; step++){
		
		for(int i = 0; i < size - 1; i++){

			if(sort[i] > sort[i + 1]){
				int a = sort[i];
				int b = sort[i + 1];
				sort[i] = b;
				sort[i + 1] = a;
				
				// переписать на указатели (сверху) или swap
			}
		}
		
	}
	int i = 0;
	
	while(i < size){
		cout << "Digit: 	" << sort[i] << endl;
		i++;
	}	
	
	
	// сортировка выбором
	
	int sort_2[size] = { 12, 5 ,48 ,1 ,4 };
	
	int min_digit = 0;
	int deviation = 0;
	
	for(int step = 0; step < size; step++){
		
		bool min = true;
		
		for(int i = 0; i < size; i++){

			if(sort_2[step] > sort_2[i]){
				min = false;
				break;
			}
		}
	
		if(min == true){
			min_digit = sort_2[step];
			int swap_digit = sort_2[deviation];
			sort_2[deviation] = min_digit;
			sort_2[step] = swap_digit;
			// переписать на указатели или swap
		}	
		
	}
	
	cout << sort_2[1];
	return 0;
}


