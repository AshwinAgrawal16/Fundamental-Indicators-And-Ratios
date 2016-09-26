//LIQUIDITY RATIO Profit before depreciation and amortisation to current liabilities(PDACL)
vector<double> PDCAL(vector<double> currassets,vector<double> EBIDTA)  // all quaterly
{
	vector<double> A; 
	int i;
	for(i=0;i<currassets.size()-1;i++)
	{
		A[i]=EBIDTA[i]/currassets[i];
	}
	return A;
}
