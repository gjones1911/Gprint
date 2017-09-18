#include "Gprint.cpp"


int main(void)
{
	vector<int> v;

	vector< vector<int> > vv;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vv.push_back(v);
	vv.push_back(v);
	vv.push_back(v);
	

	PrintVec2d(vv);

	return 0;
}
