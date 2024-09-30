#include<bits/stdc++.h>
using namespace std;

void demoPair() {
	cout << "1. Pair Demo\n";
	pair<int, int> p1 = { 1, 2 };
	pair<int, pair<int, char>> p2 = make_pair(3, make_pair(4, 'S'));
	cout << p1.first << " " << p2.second.second << endl;
}

void demoVector() {
	cout << "\n2. Vector Demo\n";
	vector<int> v = { 1 };
	v.push_back(2);
	v.emplace_back(4);

	// [1, 2, 4]
	cout << v[1] << " " << v.at(2) << endl;

	vector<int> v2(5); // Vector with size 5
	cout << v2[0] << endl; // 0
	vector<int> v3(v.begin(), v.end() - 1);


	//iterator
	// [1, 2, 4]
	vector<int>::iterator beginItr = v.begin();
	auto endItr = v.end();
	for (auto i = beginItr; i < endItr; i++)
		cout << *i << " ";
	cout << endl;

	// for-each
	// [1, 2, 4]
	for (auto x : v)
		cout << x << " ";
	cout << endl;

	// reverse iterator
	// [1, 2 , 4]
	for (auto i = v.rbegin(); i < v.rend(); i++)
		cout << *i << " ";
	cout << endl;

	// pop_back(), size() 
	// [0, 0, 0, 0, 0]
	v2.pop_back();
	cout << "Size: " << v2.size() << endl;

	// front(), back()
	// [1, 2, 4]
	cout << v.front() << " " << v.back() << endl;

	// insert()
	// [1, 2, 4]
	v.insert(v.begin() + 2, 2, 3);
	for (auto x : v)
		cout << x << " ";
	cout << endl;

	// erase()
	// [1, 2, 3, 3, 4]
	v.erase(v.begin() + 2, v.end() - 1);
	for (auto x : v)
		cout << x << " ";
	cout << endl;

	// swap() 
	// v = {1, 2, 4},  v2 = {0, 0, 0, 0}
	swap(v, v2);
	for (auto x : v)
		cout << x << " ";
	cout << endl;

	// clear(), empty()
	// [0, 0, 0, 0]
	v.clear();
	for (auto x : v)
		cout << x << "-";
	cout << v.empty() << endl;
}

void demoList() {
	cout << "\n3. List Demo\n";
	list<int> l = { 2, 3 };
	l.emplace_front(1);
	l.push_front(0);
	l.push_back(4);

	// [0, 1, 2, 3, 4]
	for (auto x : l)
		cout << x << " ";
	cout << endl;
}

void demoStack() {
	cout << "\n4. Stack Demo\n";
	stack<int> s;
	vector<int> v = { 1, 2, 3, 4 };

	for (auto x : v) {
		s.push(x);
	}
	s.emplace(5);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	cout << "\nSize: " << s.size() << endl;
}

void demoQueue() {
	cout << "\n5. Queue Demo\n";
	queue<int> q;
	vector<int> v = { 1, 2, 3, 4 };

	for (auto x : v) {
		q.push(x);
	}
	q.emplace(5);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	cout << "\nSize: " << q.size() << endl;
}

void demoPriorityQueue() {
	cout << "\n6. Priority Queue Demo\n";
	priority_queue <int> pq;
	pq.push(5);
	pq.push(5);
	pq.push(10);
	pq.emplace(8);

	cout << "Size: " << pq.size() << endl;

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}

void demoSet() {
	cout << "\n7. Set Demo\n";
	set <int> s;
	s.insert(4);
	s.insert(4);
	s.insert(3);
	s.insert(4);
	s.insert(1);
	s.insert(5);

	for (auto i : s)
		cout << i << " ";

	auto it = s.find(3);
	if (it != s.end())
		cout << endl << *it;

	cout << "\nCount of 4: " << s.count(4) << endl;

	// [1, 3, 4, 5]
	s.erase(3);
	for (auto i : s)
		cout << i << " ";
	cout << endl;

	// [1, 4, 5]
	cout << "Lower Bound of 3: " << *s.lower_bound(3) << endl;
	cout << "Upper Bound of 4: " << *s.upper_bound(4) << endl;


	// [1, 4, 5]
	auto i_begin = s.begin();
	i_begin++;
	auto i_end = s.end();
	s.erase(i_begin, i_end); // removes 2nd to last elements

	for (auto i : s)
		cout << i << " ";
	cout << endl;
}

void demoMultiSet() {
	cout << "\n8. Multi-Set Demo\n";
	multiset <int> ms;
	ms.insert(4);
	ms.insert(4);
	ms.insert(3);
	ms.insert(4);
	ms.insert(1);
	ms.insert(5);

	for (auto i : ms)
		cout << i << " ";

	auto it = ms.find(3);
	if (it != ms.end())
		cout << endl << *it;

	cout << "\nCount of 4: " << ms.count(4) << endl;

	// [1, 3, 4, 5]
	ms.erase(3);
	for (auto i : ms)
		cout << i << " ";
	cout << endl;

	// [1, 4, 5]
	cout << "Lower Bound of 3: " << *ms.lower_bound(3) << endl;
	cout << "Upper Bound of 4: " << *ms.upper_bound(4) << endl;


	// [1, 4, 5]
	auto i_begin = ms.begin();
	i_begin++;
	auto i_end = ms.end();
	ms.erase(i_begin, i_end); // removes 2nd to last elements

	for (auto i : ms)
		cout << i << " ";
	cout << endl;
}

void demoMap() {
	cout << "\n9. Map Demo\n";
	map<int, string> mp;
	mp[1] = "abc";
	mp[2] = "bcd";
	mp[3] = "cde";
	mp.insert({ 3, "def" });

	for (auto i : mp) {
		cout << i.first << "->" << i.second << endl;
	}

	auto it = mp.find(3);
	cout << (*it).first << ":" << (*it).second << endl;

	cout << "Size: " << mp.size() << endl;

	auto lb = *(mp.lower_bound(3));
	auto ub = *(mp.upper_bound(2));
	cout << "Lower Bound of 3: " << lb.first << "->" << lb.second << endl;
	cout << "Upper Bound of 3: " << ub.first << "->" << ub.second << endl;
}

void demoMultiMap() {
	cout << "\n10. Multi-map Demo\n";
	multimap<int, char> mmp;
	mmp.insert({ 3, 'b' });
	mmp.insert({ 1, 'a' });
	mmp.insert({ 1, 'b' });
	mmp.insert({ 1, 'a' });
	mmp.insert({ 2, 'a' });
	mmp.insert({ 2, 'a' });
	mmp.insert({ 2, 'b' });

	auto it = mmp.equal_range(2);
	for (auto i = it.first; i != it.second; i++)
		cout << (*i).first << ":" << (*i).second << endl;
}

void demoSort() {
	cout << "\n11. Sort Demo\n";
	int arr[5] = { 6, 2, 1, 7, 0 };

	sort(arr, arr + 5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;

	vector<int> v = { 6, 2, 1, 7, 0 };
	sort(v.begin() + 1, v.end() - 1);
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

void demoAccumulate() {
	cout << "\n12. Accumulate Demo\n";
	int arr[5] = { 6, 2, 1, 7, 0 };

	cout << accumulate(arr, arr + 5, 0) << endl;

	vector<int> v = { 6, 2, 1, 7, 0 };
	cout << accumulate(v.begin() + 1, v.end() - 1, 5) << endl;
}

void demoCount() {
	cout << "\n13. Count Demo\n";
	int arr[5] = { 1, 1, 7, 1, 0 };
	int num = 1;
	cout << count(arr, arr + 4, num) << endl;

	vector<int> v = { 1, 1, 7, 1, 0 };
	cout << count(v.begin(), v.end(), num) << endl;
}

void demoFind() {
	cout << "\n14. Find Demo\n";
	int arr[5] = { 1, 1, 7, 1, 0 };
	int num = 7;
	cout << *find(arr, arr + 4, num) << endl;
}

void demoNextPermutation() {
	cout << "\n15. Next-Permutation Demo\n";
	string s = "abc";
	cout << s << endl;

	next_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	next_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	next_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	next_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	next_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	next_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	next_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	s = "abc";
	do {
		cout << s << " ";
	} while (next_permutation(s.begin(), s.end()));
	cout << endl;
}

void demoPrevPermutation() {
	cout << "\n16. Prev-Permutation Demo\n";
	string s = "bca";
	cout << s << endl;

	prev_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	prev_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	prev_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;

	prev_permutation(s.begin(), s.begin() + 3);
	cout << s << endl;
}

void demoMaxElement() {
	cout << "\n17. Max-Element Demo\n";
	char ch[5] = { 'b', 'a', 'd', 'c', 'Z' };
	auto maxc = *(max_element(ch, ch + 5));
	cout << maxc << endl;
}

void demoMinElement() {
	cout << "\n18. Min-Element Demo\n";
	char ch[5] = { 'b', 'a', 'd', 'c', 'Z' };
	auto minc = *(min_element(ch, ch + 5));
	cout << minc << endl;
}

void demoReverse() {
	cout << "\n19. Reverse Demo\n";
	int arr[5] = { 1, 2, 7, 3, 0 };
	reverse(arr + 1, arr + 4);
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}

void demoPow() {
	cout << "\n20. Pow Demo\n";
	cout << pow(3, 8) << endl;
	cout << pow('a', 8) << endl;
}

bool internalComparator(pair<int, int> e1, pair<int, int> e2) {
	if (e1.second > e2.second) return true;
	if (e1.second < e2.second) return false;
	if (e1.first < e2.first) return true;
	return false;
}

void demoComparator() {
	cout << "\n21. Comparator Demo\n";
	pair<int, int> arr[] = { {1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9} };

	cout << "First Ascending, Second Ascending\n";
	sort(arr, arr + 5);
	for (auto i : arr)
		cout << "{" << i.first << ", " << i.second << "}" << endl;

	cout << "\nSecond Descending, First Ascending\n";
	sort(arr, arr + 5, internalComparator);
	for (auto i : arr)
		cout << "{" << i.first << ", " << i.second << "}" << endl;
}

int main(int argc, const char** argv) {
	demoPair();
	demoVector();
	demoList();
	demoStack();
	demoQueue();
	demoPriorityQueue();
	demoSet();
	demoMultiSet();
	demoMap();
	demoMultiMap();
	demoSort();
	demoAccumulate();
	demoCount();
	demoFind();
	demoNextPermutation();
	demoPrevPermutation();
	demoMaxElement();
	demoMinElement();
	demoReverse();
	demoPow();
	demoComparator();
	return 0;
}