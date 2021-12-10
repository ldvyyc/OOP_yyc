#include <iostream>
#include "School.h"
#include "Student.h"

using namespace std;
int main(){
	int n;
	cin >> n;
	School tsinghua(n);
	for (int i = 0; i < n; ++ i){
		Student s;
		cin >> s;
		tsinghua.add_member(s);
	}
	//cout << endl << tsinghua.nameee[1] << endl << tsinghua.nameee[2] << endl;
	//cout << tsinghua.timeee[0] << endl << tsinghua.timeee[1] << endl << tsinghua.timeee[2] << endl;
	//cout << tsinghua.iddd[0] << endl << tsinghua.iddd[1] << endl << tsinghua.iddd[2] << endl;
	int m;
	cin >> m;
	for (int i = 0; i < m; ++ i){
		int type;
		cin >> type;
		if (type == 0){
			int sid;
			cin >> sid;
			cout << tsinghua[sid];
		}
		else if (type == 1) {
			string name;
			cin >> name;
			cout << tsinghua[name];
		}
		else if (type == 2){
			char province;
			cin >> province;
			cout << tsinghua[province];
		}
	}
	return 0;
}