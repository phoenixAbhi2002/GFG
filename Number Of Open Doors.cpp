  public:
    int no_factor(long long n){
        int count =0;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                if(n/i==i)
                    count+=1;
                else
                    count+=2;
            }
        }
        return count;
    }
    int noOfOpenDoors(long long N) {
        
        long long ans=0;
        for(int i=1; i<=N; i++){
            if(no_factor(i)%2!=0)
                ans++;
        }
        return ans;
    }
};
