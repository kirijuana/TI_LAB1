#include "stdafx.h"
#include "func_atd.h"


int main()
{
	float H = 0;
	int N = 0;
	float* p_probab;
	search_symbol();
	N = N_search_symbol();
	p_probab = search_probab(N);
	H = entropy(N, p_probab);
	cout << "Ёнтропи€ = " << H << "\n" << endl;
	system("pause");
	return 0;
}

