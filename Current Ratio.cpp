// QUATERLY CURRENT RATIO
vector<double> CR(vector<double> currassets,vector<double> currliabilities)
{
	int i;
	vcetor<double> cr;
	for(i=0;i<currassets.size()-1;i++)
	{
		cr[i]=currassets[i]/currliabilities[i];
	}
	return cr;
}
