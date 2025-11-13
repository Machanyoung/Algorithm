#include <iostream>
#include <unordered_map>

using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	unordered_map<string,string> hmap;
	hmap.insert(make_pair("a","as"));
	hmap.insert(make_pair("i","ios"));
	hmap.insert(make_pair("y","ios"));
	hmap.insert(make_pair("l","les"));
	hmap.insert(make_pair("n","anes"));
	hmap.insert(make_pair("ne","anes"));
	hmap.insert(make_pair("o","os"));
	hmap.insert(make_pair("r","res"));
	hmap.insert(make_pair("t","tas"));
	hmap.insert(make_pair("u","us"));
	hmap.insert(make_pair("v","ves"));
	hmap.insert(make_pair("w","was"));

	for (int i=0;i<n;i++){
		string str;
		cin >> str;
		string s;
		if(str[str.length()-1]=='e' && str[str.length()-2]=='n'){
			str.pop_back();
			str.pop_back();
			str+="anes";

		}else{
			s=str[str.length()-1];
			if(hmap.find(s)!=hmap.end()){
				str.pop_back();
				str+=hmap.find(s)->second;
			}else{
				str+="us";
			}

		}
		cout << str << endl;

	}
}