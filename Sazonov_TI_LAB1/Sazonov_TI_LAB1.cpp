#include "stdafx.h"
#include "func_atd.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "rus");
	float H = 0;
	int N = 0;
	float* p_probab;
	search_symbol();
	N = N_search_symbol();
	p_probab = search_probab(N);
	H = entropy(N, p_probab);
	cout << "Ёнтропи€ = " << H << "\n" << endl;
	check_n_symbol();
	
	return 0;
}

