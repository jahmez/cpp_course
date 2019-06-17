#include <algorithm>
class Solution {
	public:
		vector<int> deckRevealedIncreasing(vector<int>& deck) {
			vector<int> resultDeck;
			vector<int>::iterator it;
			sort(deck.begin(),deck.end());
			reverse(deck.begin(),deck.end());
			for(it=deck.begin();it!=deck.end();++it){
				if(it!=deck.begin()){
					resultDeck.insert(resultDeck.begin(),resultDeck.back());
					resultDeck.pop_back();
				}
				resultDeck.insert(resultDeck.begin(),*it);
			}
			return resultDeck;
		}
};
