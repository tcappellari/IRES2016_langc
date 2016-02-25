int mult(int a, int b)
{
	int m = 0;
	for (int i = 0; i < a; ++i)
		m += b;

	return m;
}