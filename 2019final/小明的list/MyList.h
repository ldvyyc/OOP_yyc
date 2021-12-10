#pragma once
#include <list>
#include <memory>
#include <iostream>

class MyList
{
private:
	std::shared_ptr<std::list<int>> pt; // a pointer to the real container
	std::list<int>::iterator left, right; // the position of slice is [left, right). 'left' is included, 'right' is excluded.

	std::list<int>::iterator forward(int pos) const{
		// count from 'left', find the element at position 'pos'.
		auto now = left;
		while(pos--) now++;
		return now;
	}//前进到了那个迭代器

public:
	MyList(): pt(new std::list<int>()){
		left = pt->begin();
		right = pt->end();
		// Actually, left = right = pt->end(), because there is no element in the list.
	}

	MyList(std::shared_ptr<std::list<int> >& _pt, const std::list<int>::iterator& _left, const std::list<int>::iterator& _right):pt(_pt), left(_left), right(_right) {};
	
	MyList operator()(int lef, int rig){
		return MyList(pt, forward(lef), forward(rig));
	}
	
	void append(int i){
		if (left == right) --left;
		pt->insert(right, i);
	}

	int &operator[](int pos) const{
		auto tem = left;
		for (int i=0; i<pos; i++){
			tem++;
		}
		return *tem; // access the element at the 'pos'
	}

	void output(){
		std::cout << "[";
		if (left != right){
			auto now = left;
			std::cout << *now;
			now ++;
			for(; now != right; now++){
				std::cout << "," << *now;
			}
		}
		std::cout << "]";
	}

	friend std::ostream &operator<<(std::ostream &out, MyList &A);
};

std::ostream &operator<<(std::ostream &out, MyList &A){
	A.output();
	return out;
}