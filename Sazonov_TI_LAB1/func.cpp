#include "stdafx.h"
#include "func_atd.h"

	int alph[33];
	ifstream fout("E://уч/3 курс/2й семестр/Теория информации/out.txt");
	ofstream fin("E://уч/3 курс/2й семестр/Теория информации/in.txt");
	
	void search_symbol()
	{
		string xx;
		string text; //buff	
		
		for (int i = 0; i < 33; i++)
		{
			alph[i] = 0;
		}

	getline(fout, text);
	for (int i = 0; i < text.length(); i++)
	{
		xx[0] = text.at(i);
		if (xx[0] == 'а')
		{
			alph[0] = alph[0]++;
		}

		if (xx[0] == 'А')
		{
			alph[0] = alph[0]++;
		}

		if (xx[0] == 'б')
		{
			alph[1] = alph[1]++;
		}

		if (xx[0] == 'Б')
		{
			alph[1] = alph[1]++;
		}

		if (xx[0] == 'в')
		{
			alph[2] = alph[2]++;
		}

		if (xx[0] == 'В')
		{
			alph[2] = alph[2]++;
		}

		if (xx[0] == 'Г')
		{
			alph[3] = alph[3]++;
		}

		if (xx[0] == 'г')
		{
			alph[3] = alph[3]++;
		}

		if (xx[0] == 'Д')
		{
			alph[4] = alph[4]++;
		}

		if (xx[0] == 'д')
		{
			alph[4] = alph[4]++;
		}

		if (xx[0] == 'Е')
		{
			alph[5] = alph[5]++;
		}

		if (xx[0] == 'е')
		{
			alph[5] = alph[5]++;
		}

		if (xx[0] == 'Ё')
		{
			alph[6] = alph[6]++;
		}

		if (xx[0] == 'ё')
		{
			alph[6] = alph[6]++;
		}

		if (xx[0] == 'Ж')
		{
			alph[7] = alph[7]++;
		}

		if (xx[0] == 'ж')
		{
			alph[7] = alph[7]++;
		}

		if (xx[0] == 'З')
		{
			alph[8] = alph[8]++;
		}

		if (xx[0] == 'з')
		{
			alph[8] = alph[8]++;
		}

		if (xx[0] == 'И')
		{
			alph[9] = alph[9]++;
		}


		if (xx[0] == 'и')
		{
			alph[9] = alph[9]++;
		}


		if (xx[0] == 'Й')
		{
			alph[10] = alph[10]++;
		}


		if (xx[0] == 'й')
		{
			alph[10] = alph[10]++;
		}


		if (xx[0] == 'К')
		{
			alph[11] = alph[11]++;
		}


		if (xx[0] == 'к')
		{
			alph[11] = alph[11]++;
		}


		if (xx[0] == 'Л')
		{
			alph[12] = alph[12]++;
		}


		if (xx[0] == 'л')
		{
			alph[12] = alph[12]++;
		}


		if (xx[0] == 'М')
		{
			alph[13] = alph[13]++;
		}


		if (xx[0] == 'м')
		{
			alph[13] = alph[13]++;
		}


		if (xx[0] == 'Н')
		{
			alph[14] = alph[14]++;
		}

		if (xx[0] == 'н')
		{
			alph[14] = alph[14]++;
		}

		if (xx[0] == 'О')
		{
			alph[15] = alph[15]++;
		}

		if (xx[0] == 'о')
		{
			alph[15] = alph[15]++;
		}

		if (xx[0] == 'П')
		{
			alph[16] = alph[16]++;
		}

		if (xx[0] == 'п')
		{
			alph[16] = alph[16]++;
		}

		if (xx[0] == 'Р')
		{
			alph[17] = alph[17]++;
		}

		if (xx[0] == 'р')
		{
			alph[17] = alph[17]++;
		}

		if (xx[0] == 'С')
		{
			alph[18] = alph[18]++;
		}


		if (xx[0] == 'с')
		{
			alph[18] = alph[18]++;
		}


		if (xx[0] == 'Т')
		{
			alph[19] = alph[19]++;
		}


		if (xx[0] == 'т')
		{
			alph[19] = alph[19]++;
		}


		if (xx[0] == 'У')
		{
			alph[20] = alph[20]++;
		}


		if (xx[0] == 'у')
		{
			alph[20] = alph[20]++;
		}


		if (xx[0] == 'Ф')
		{
			alph[21] = alph[21]++;
		}


		if (xx[0] == 'ф')
		{
			alph[21] = alph[21]++;
		}


		if (xx[0] == 'Х')
		{
			alph[22] = alph[22]++;
		}

		if (xx[0] == 'х')
		{
			alph[22] = alph[22]++;
		}

		if (xx[0] == 'Ц')
		{
			alph[23] = alph[23]++;
		}

		if (xx[0] == 'ц')
		{
			alph[23] = alph[23]++;
		}

		if (xx[0] == 'Ч')
		{
			alph[24] = alph[24]++;
		}

		if (xx[0] == 'ч')
		{
			alph[24] = alph[24]++;
		}

		if (xx[0] == 'Ш')
		{
			alph[25] = alph[25]++;
		}

		if (xx[0] == 'ш')
		{
			alph[25] = alph[25]++;
		}

		if (xx[0] == 'Щ')
		{
			alph[26] = alph[26]++;
		}

		if (xx[0] == 'щ')
		{
			alph[26] = alph[26]++;
		}

		if (xx[0] == 'Ъ')
		{
			alph[27] = alph[27]++;
		}

		if (xx[0] == 'ъ')
		{
			alph[27] = alph[27]++;
		}

		if (xx[0] == 'Ы')
		{
			alph[28] = alph[28]++;
		}

		if (xx[0] == 'ы')
		{
			alph[28] = alph[28]++;
		}

		if (xx[0] == 'Ь')
		{
			alph[29] = alph[29]++;
		}

		if (xx[0] == 'ь')
		{
			alph[29] = alph[29]++;
		}

		if (xx[0] == 'Э')
		{
			alph[30] = alph[30]++;
		}

		if (xx[0] == 'э')
		{
			alph[30] = alph[30]++;
		}

		if (xx[0] == 'Ю')
		{
			alph[31] = alph[31]++;
		}

		if (xx[0] == 'ю')
		{
			alph[31] = alph[31]++;
		}

		if (xx[0] == 'Я')
		{
			alph[32] = alph[32]++;
		}

		if (xx[0] == 'я')
		{
			alph[32] = alph[32]++;
		}
	}

}

int N_search_symbol()
{
	int N = 0;
	for (int i = 0; i < 33; i++)
	{
		if (alph[i] != 0)
		{
			N++;
		}
	}
	return N;

}

float* search_probab(int N)
{
	float *p_symbol = new float[N]();
	int k = 0;
	int x = 0;
	
	for (int j = 0; j < 33; j++)
	{
		if (alph[j] != 0)
		{
			x = x + alph[j];
		}
	}
	for (int i = 0; i < 33; i++)
	{
		if (alph[i] != 0)
		{

			p_symbol[k] = (float(alph[i]) / float(x));
			cout << "Вероятность k-го символа:" << p_symbol[k] << "\n" << endl;
			k++;
		}
	}
	return p_symbol;
}

float entropy(int N, float *p_symbol)
{
	float *masH = new float[N]();
	float H = 0; // энтропия
	for (int i = 0; i < N; i++)
	{
		H += (p_symbol[i] * log2(p_symbol[i]));
		masH[i] = log2(p_symbol[i]);
		fin << "Кол-во информации " << i+1 << "-го символа: "  << -masH[i] << endl;
	}
	fin << "Общее кол-во информации сообщения (энтропия):" << -H << endl;
	return (-H);
}