int find(int number)
{
int res=0;

for(int i=2;i<=number;i++)
{
	while(number%i==0)
	{
		res+=i;
		number=number/i;
	}

	return res;
}
