class Twitter {
private:
    vector<pair<int,int>> tweets;
    unordered_map<int,set<int>> followers;
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweets.push_back({userId, tweetId});
        followers[userId].insert(userId);
    }
    
    vector<int> getNewsFeed(int userId)
    {
          vector<int> ans;
          int cnt{};
          set<int> follows = followers[userId];
          for(int i = tweets.size()-1; i>=0 ; i--){
               for(auto I:follows){
                    if(tweets[i].first == I){
                         ans.push_back(tweets[i].second);
                         cnt++;
                    }
               }
               if(cnt == 10) break;
               
               
          }
          return ans;
        
    }
    
    void follow(int followerId, int followeeId) {
          followers[followerId].insert(followeeId);    
    }
    
    void unfollow(int followerId, int followeeId) {
          if(followerId!=followeeId)
               followers[followerId].erase(followeeId);
    }
};
