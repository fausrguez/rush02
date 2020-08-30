int get_amount_of_digits(int n)
{
	int count;
	count = 0;
	
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return count;
}
