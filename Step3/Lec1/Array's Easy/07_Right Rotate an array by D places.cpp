void rotate(vector<int> arr, int d)
{
	if(d>size)
	d = d % size;

    reverse(arr.begin(),arr.end());
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.begin()+d);
}
