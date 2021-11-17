//洛谷p1553
//int main()
//{
//	string s;
//	int pos = 0;
//	cin >> s;
//	char p ;
//	int i;
//	for (i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= '0'&&s[i] <= '9');
//		else
//		{
//			p = s[i];
//			pos = i;
//			break;
//		}
//	}
//	if (pos == 0)
//	{
//		int x = s.size() - 1;
//		while (s[x] == '0'&&x>0)x--;
//		for (i = x; i >= 0; i--)cout << s[i];
//		cout << endl;
//	}
//	else
//	{
//		if (p == '%')
//		{
//			
//			int pos1 = pos - 1;
//			while (s[pos1] == '0'&&pos1>0)pos1--;
//			for (i = pos1; i >= 0; i--)cout << s[i];
//			cout << p;
//		}
//		else
//		{
//			int pos1 = pos - 1;
//			while (s[pos1] == '0'&&pos1>0)pos1--;
//			for (i = pos1; i >= 0; i--)cout << s[i];
//			cout << p;
//			int x = s.size() - 1;
//			while (s[pos + 1] == '0'&&pos<x-1)pos++;
//			while (s[x] == '0'&&x>pos+1)x--;
//			for (i = x; i > pos; i--)cout << s[i];
//			cout << endl;
//		}
//	}
//	return 0;
//}
 //洛谷p1597
//#include<cstdio>
//using namespace std;
//int a[3]; char s1, s2;
//int main()
//{
//	while (scanf("%c:=%c;", &s1, &s2) == 2)//充分利用c++语言优势
//		a[s1 - 'a'] = s2 >= '0' && s2 <= '9' ? s2 - '0' : a[s2 - 'a']; //赋值语句简洁明了
//	printf("%d %d %d", a[0], a[1], a[2]);
//}
//char s, s1;
//int arr[5];
//int main()
//{
//	while (scanf("%c:=%c;", &s, &s1) == 2)//scanf是有返回值的 正确输入了几个元素就返回几
//	{
//		arr[s - 'a'] = s1 >= '0'&&s1 <= '9' ? s1 - '0' : arr[s1 - 'a'];
//	}
//	cout << arr[0] <<" "<< arr[1] << " "<< arr[2] << endl;
//	return 0;
//}

//洛谷p5461
//int n;
//int arr[1100][1100];
//void pardon(int x1, int x2,int y1,int y2)
//{
//	if (x1 == x2)return;
//	int i, j;
//	for (i = x1; i <= (x1 + x2) / 2; i++)
//	{
//		for (j = y1; j <= (y1 + y2) / 2; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	pardon(x1, (x1 + x2) / 2, y1, (y1 + y2) / 2);
//	pardon(x1, (x1 + x2) / 2, (y1 + y2) / 2+1, y2);
//	pardon((x1 + x2) / 2+1, x2, y1, (y1 + y2) / 2);
//	pardon((x1 + x2) / 2+1, x2, (y1 + y2) / 2+1, y2);
//	return;
//}
//int main()
//{
//	int x1, x2, y1, y2;
//	cin >> n;
//	int i, j, ret =(int) pow(2, n);
//	for (i = 1; i <= ret; i++)
//	{
//		for (j = 1; j <= ret; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	x1 = 1;
//	x2 = ret;
//	y1 = 1;
//	y2 = ret;
//	pardon(x1, x2, y1, y2);
//	for (i = 1; i <= ret; i++)
//	{
//		for (j = 1; j <= ret; j++)cout << arr[i][j] << " ";
//		cout << endl;
//	}
//	return 0;
//}

//int arr[1010][1010];
//int arr1[100000010][2];
//int main()
//{
//	int n;
//	cin >> n;
//	int i, j, k = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			cin >> arr[i][j];
//			if (arr[i][j] == 0)arr1[k][0] = i, arr1[k++][1] = j;
//		}
//	}
//	if (k == 0)
//	{
//		//cout << "Dear comrades,the emperor has passed.We should unite to produce and create together!"<< endl;
//		cout << "Dear comrades, the emperor has passed. We should unite to produce and create together!" << endl;
//		return 0;
//	}
//	long long  max = -1;
//	int x1, y1;
//	for (i = 0; i < k; i++)
//	{
//		long long sum = 0;
//		int x = arr1[i][0];
//		int y = arr1[i][1];
//		for (j = 1; j <= n; j++)
//		{
//			sum += arr[x][j];
//		}
//		for (j = 1; j <= n; j++)
//		{
//			sum += arr[j][y];
//		}
//		if (sum >= max)
//		{
//			max = sum;
//			x1 = x;
//			y1 = y;
//		}
//	}
//	cout << max << endl;
//	cout << x1 << " " << y1 << endl;
//	return 0;
//}


//洛谷p1042
//int arr1[6000][2];
//int arr2[3000][2];
//int main()
//{
//	char c;
//	int k1 = 0, k2 = 0;
//	int numw = 0, numl = 0, numw1 = 0, numl1 = 0;
//	while (cin >> c)
//	{
//		if (c == 'W')
//		{
//			numw++;
//			numw1++;
//		}
//		if (c == 'L')
//		{
//			numl++;
//			numl1++;
//		}
//		if (numw - numl >= 2 || numl - numw >= 2)
//		{
//			if (numw >= 11 || numl >= 11)
//			{
//				/*
//				WWWWWWWWWWWWWWWWWWWW
//				WWLWE
//				*/
//				arr1[k1][0] = numw;
//				arr1[k1++][1] = numl;
//				numw = 0;
//				numl = 0;
//			}
//		}
//		if (numw1 - numl1 >= 2 || numl1 - numw1 >= 2)
//		{
//			if (numw1 >= 21 || numl1 >= 21)
//			{
//				arr2[k2][0] = numw1;
//				arr2[k2++][1] = numl1;
//				numw1 = 0;
//				numl1 = 0;
//			}
//		}
//		if (c == 'E')
//		{
//			arr1[k1][0] = numw;
//			arr1[k1++][1] = numl;
//			arr2[k2][0] = numw1;
//			arr2[k2++][1] = numl1;
//			break;
//		}
//	}
//	int i;
//	for (i = 0; i < k1; i++)
//	{
//		cout << arr1[i][0] << ":" << arr1[i][1] << endl;
//	}
//	cout << endl;
//	for (i = 0; i < k2; i++)
//	{
//		cout << arr2[i][0] << ":" << arr2[i][1] << endl;
//	}
//	return 0;
//}








//class toy
//{
//public:
//	int dir;
//	string prof;
//};
//toy arr[1000000];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i].dir >> arr[i].prof;
//	}
//	int k = 0;
//	/*
//7 3
//0 singer
//0 reader
//0 mengbier 
//1 thinker
//1 archer
//0 writer
//1 mogician 
//0 3
//1 1
//0 2
//	*/
//	while (m--)
//	{
//		int a, s;
//		cin >> a >> s;
//		if (arr[k].dir == 0)
//		{
//			if (a == 0)k -= s;
//			else k += s;
//		}
//		else
//		{
//			if (a == 0)k += s;
//			else k -= s;
//		}
//		if (k > n - 1)k -= n;
//		if (k < 0)k = n  + k;
//	}
//	cout << arr[k].prof << endl;
//	return 0;
//}

//洛谷p1601
//int arr1[100];//存放a
//int arr2[100];//存放b
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	int i, k = 0;
//	for (i = a.size() - 1; i >= 0; i--)
//	{
//		arr1[k++] = a[i] - '0';
//	}
//	k = 0;
//	for (i = b.size() - 1; i >= 0; i--)
//	{
//		arr2[k++] = b[i] - '0';
//	}
//	k = a.size() > b.size() ? a.size() : b.size();
//	for (i = 0; i < k; i++)
//	{
//		arr1[i] += arr2[i];
//		if (arr1[i] >= 10)
//		{
//			arr1[i + 1] += arr1[i] / 10;
//			arr1[i] %= 10;
//		}
//	}
//	if (arr1[k] == 0)
//	{
//		for (i = k - 1; i >= 0; i--)cout << arr1[i];
//	}
//	else
//	{
//		for (i = k; i >= 0; i--)cout << arr1[i];
//	}
//	cout << endl;
//	return 0;
//}

//洛谷p1303
//int arr1[2100];//存放a
//int arr2[2100];//存放b
//int arr3[10000];//存放乘积
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	int i, j, k = 0;
//	for (i = a.size() - 1; i >= 0; i--)
//	{
//		arr1[k++] = a[i] - '0';
//	}
//	k = 0;
//	for (i = b.size() - 1; i >= 0; i--)
//	{
//		arr2[k++] = b[i] - '0';
//	}
//	for (i = 0; i < a.size(); i++)
//	{
//		for (j = 0; j < b.size(); j++)
//		{
//			arr3[i + j] += arr1[i] * arr2[j];
//			if (arr3[i + j] > 9)
//			{
//				arr3[i + j + 1] += arr3[i + j] / 10;
//				arr3[i + j] %= 10;
//			}
//		}
//	}
//	k = i + j - 1;
//	if (arr3[k] == 0)
//	{
//		if (arr3[k - 1] == 0)
//		{
//			cout << 0 << endl;
//			return 0;
//		}
//		for (i = k - 1; i >= 0; i--)cout << arr3[i];
//	}
//	else
//	{
//		for (i = k; i >= 0; i--)cout << arr3[i];
//	}
//	cout << endl;
//	return 0;
//}

//洛谷P4924
////int g[510][510], tot, f[510][510];//f数组充当临时数组 
////int main() {
////	int n, m;
////	scanf("%d %d", &n, &m);
////	for (int i = 1; i <= n; i++)
////		for (int j = 1; j <= n; j++)
////			g[i][j] = ++tot;
////	for (int i = 1; i <= m; i++) {
////		int a, b, r, opt;
////		scanf("%d %d %d %d", &a, &b, &r, &opt);//下面的分析都是针对那一块矩阵而言的 
////		if (opt == 0) {//第i行第j个 变成倒数第i列第j个 顺时针 
////			for (int i = a - r; i <= a + r; i++)
////				for (int j = b - r; j <= b + r; j++)
////					f[a - b + j][a + b - i] = g[i][j];
////			for (int i = a - r; i <= a + r; i++)
////				for (int j = b - r; j <= b + r; j++)
////					g[i][j] = f[i][j];
////		}
////		else { //第i行第j个 变成第i列倒数第j个 逆时针 
////			for (int i = a - r; i <= a + r; i++)
////				for (int j = b - r; j <= b + r; j++)
////					f[a + b - j][b - a + i] = g[i][j];
////			for (int i = a - r; i <= a + r; i++)
////				for (int j = b - r; j <= b + r; j++)
////					g[i][j] = f[i][j];
////		}
////	}
////	for (int i = 1; i <= n; i++) {//输出结果咯 
////		for (int j = 1; j <= n; j++)
////			printf("%d ", g[i][j]);
////		printf("\n");
////	}
////	return 0;
////}
//int arr1[510][510];
//int arr2[510][510];
//int main()
//{
//	int k = 1, i, j;
//	int n, m;
//	cin >> n >> m;
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			arr1[i][j] = k++;
//		}
//	}
//	while (m--)
//	{
//		int x, y, r, z;
//		cin >> x >> y >> r >> z;
//		if (z == 0)
//		{
//			for (i = x - r; i <= x + r; i++)
//			{
//				for (j = y - r; j <= y + r; j++)
//				{
//					arr2[x - y + j][x + y - i] = arr1[i][j];
//				}
//			}
//			for (i = x - r; i <= x + r; i++)
//			{
//				for (j = y - r; j <= y + r; j++)
//				{
//					arr1[i][j] = arr2[i][j];
//				}
//			}
//		}
//		else
//		{
//			for (i = x - r; i <= x + r; i++)
//			{
//				for (j = y - r; j <= y + r; j++)
//				{
//					arr2[x + y - j][y - x + i] = arr1[i][j];
//				}
//			}
//			for (i = x - r; i <= x + r; i++)
//			{
//				for (j = y - r; j <= y + r; j++)
//				{
//					arr1[i][j] = arr2[i][j];
//				}
//			}
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			cout << arr1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//洛谷p1328
//#include <bits/stdc++.h>
//using namespace std;
//const int MAXN = 200 + 10;
//int n, na, nb, a[MAXN], b[MAXN], cnta, cntb;
//int vs[5][5] = { { 0,0,1,1,0 },{ 1,0,0,1,0 },{ 0,1,0,0,1 },{ 0,0,1,0,1 },{ 1,1,0,0,0 } }; //得分表的处理 
//int main()
//{
//	cin >> n >> na >> nb;
//	for (int i = 0; i < na; i++) cin >> a[i];
//	for (int i = 0; i < nb; i++) cin >> b[i];
//	for (int i = 0; i < n; i++)
//	{
//		cnta += vs[a[i % na]][b[i % nb]]; //周期循环 
//		cntb += vs[b[i % nb]][a[i % na]];//可以的
//	}
//	cout << cnta << " " << cntb << endl;
//	return 0;
//}