#define P              printf
#define S              scanf
#define D              double
#define ll             long long
#define ULL            unsigned long long
 
#define S1(a)          S("%d",&a)
#define S2(a,b)        S("%d%d",&a,&b)
#define S3(a,b,c)      S("%d%d%d",&a,&b,&c)
#define SL1(a)         S("%lld",&a)
#define SL2(a,b)       S("%lld%lld",&a,&b)
#define SL3(a,b,c)     S("%lld%lld%lld",&a,&b,&c)
 
#define DI(X)          int X;     S("%d", &X)
#define DII(X,Y)       int X,Y;   S("%d%d", &X, &Y)
#define DIII(X,Y,Z)    int X,Y,Z; S("%d%d%d", &X, &Y, &Z)
#define DLI(X)         ll X;      S("%lld", &X)
#define DLII(X,Y)      ll X,Y;    S("%lld%lld", &X, &Y)
#define DLIII(X,Y,Z)   ll X,Y,Z;  S("%lld%lld%lld", &X, &Y, &Z)
 
#define FL(i,a,b)      for(int i=a; i<b; i++)
#define RFL(i,a,b)     for(int i=a; i>=b; i--)
#define FLI(i,a,b,inc) for(int i=a; i<b; i+=inc)
#define FLD(i,a,b,dec) for(int i=a; i>=b; i-=dec)
#define FS(x)          for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define PR(x)          for(typeof (x.begin()) it = x.begin(); it != x.end (); it++) cout << *it << " "; cout << endl;
 
#define PC(a)          printf("Case %d: ",a)
#define PCN(a)         printf("Case %d:\n",a)
#define PCH(a)         printf("Case #%d: ",a)
 
#define xx             first
#define yy             second
#define MP             make_pair
 
#define MEM(a,val)     memset(a,val,sizeof a)
#define SET(a)         memset(a,-1,sizeof a)
#define CLR(a)         memset(a,0,sizeof a)
 
#define lb             lower_bound
#define ub             upper_bound
#define LB(a,x)        lower_bound(ALL(a),x)-a.begin()
#define UB(a,x)        upper_bound(ALL(a),x)-a.begin()
 
#define PI(x)          P("%d\n", x)
#define PL(x)          P("%lld\n", x)
#define pi             2.0*acos(0.0)
#define EPS            1e-11
#define SQR(n)         n*n
#define ALL(a)         a.begin(),a.end()
#define nl             P("\n")
#define CHECK          P("here\n")
#define GCH()          getchar()
#define pb             push_back
#define pp             pop_back
#define PF(x)          push_front(x)
#define PPF(x)         pop_front()
#define ps(x)          push(x)
#define SZ(w)          w.size()
#define SUM(a,n)       accumulate(a,a+n,0)
#define countbit(x)    __builtin_popcount(x)
#define DBUG(n)        P("Done %d\n",n);
#define READ(f)        freopen(f, "r", stdin)
#define WRITE(f)       freopen(f, "w", stdout)
#define __cin_cout     ios_base::sync_with_stdio(false);cin.tie(NULL)
 
#define _max(a,b,c)    max(a,max(b,c))
#define _min(a,b,c)    min(a,min(b,c))
#define mxe(a,n)       *max_element(a,a+n)
#define mne(a,n)       *min_element(a,a+n)
#define mxev(a)        *max_element(ALL(a))
#define mnev(a)        *min_element(ALL(a))