#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;

int a[2010],sum[2010],dp[2010][2010];
int n;

int main()
{
//    freopen("xoinc.in","r",stdin);
//    freopen("xoinc.ou","w",stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[n - i + 1]);
    memset(sum,0,sizeof(sum));
    for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + a[i];

    memset(dp,0,sizeof(dp));
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
      {
          dp[i][j] = dp[i][j - 1];
          if (i >= 2 * j - 1) dp[i][j] = max(dp[i][j],sum[i] - dp[i - (2 * j - 1)][2 * j - 1]);
          if (i >= 2 * j) dp[i][j] = max(dp[i][j],sum[i] - dp[i - 2 * j][2 * j]);
      };
    for(int i = 0; i <= n; ++i)
    {
    	for(int j = 0; j <= n; ++j)
    	{
    		cout << dp[i][j] << " ";
		}
		cout <<'\n';
	}
    printf("%d\n", dp[n][1]);
};

