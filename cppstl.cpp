// STL 
#include<bits/stdc++.h>
using namespace std;

void practicePair(){
// Pair
    pair<int , int> p = {5,8};
    cout << p.first << " " << p.second << endl;

    pair<char,char> p1 = {'A','S'};
    cout << p1.first << " " << p1.second << endl;

    pair<char,int> p2 = {'A',21};
    cout << p2.first << " " << p2.second << endl;

    pair<pair<int,int>, int > p3 = {{5,7},2};
    cout << p3.first.second << " " << p3.second << endl;

    pair<string , pair<string,int>> p4 = {"Aman",{"Sharma",21}};
    cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;

    pair<string , pair<int,char> > arr[] = {{"Aman",{21,'K'}},{"Sharma",{18,'M'}},{"Pachauri",{15,'P'}}};
    cout << arr[1].first << " " << arr[2].second.first << " " << arr[0].second.second << endl;

}
void practiceVector(){
// Initialization & Declaration
    vector<int> v;
    v.push_back(5);
    v.emplace_back(20);
    // cout << v[0] << " " << v[1] << endl;

    vector< pair<int,char> > pv;
    pv.push_back({7,'K'});
    pv.emplace_back(22,'M');
    // cout << pv[0].first << " " << pv[1].second << endl;

    vector<char> ch(5,'A');
    // cout << ch.at(0) << " " << ch.at(1) << endl;

    vector<string> st(2,"Krish");
    // cout << st.at(0) << " " << st[1] << endl;

// Copying vector
    vector<int> v1(5,20);
    vector<int> v2(v1);
    // cout << v2[2] << " " << v2[4] << endl;


// Iterators
    vector<int> vec = {50,20,7,8,12,21};
    cout << vec.back() << " " << vec.at(2) << endl;

    vector<int>::iterator it = vec.begin();
    vector<int>::iterator i = vec.end();
    it += 3;
    cout << *(it) << endl;

    for(vector<int>::iterator i = vec.begin(); i != vec.end(); i++){
        cout << *i << " " ;
    }
    cout << endl;
    for(auto it = vec.begin(); it < vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto i : vec){
        cout << i << " ";
    }

    cout << endl << endl << endl;

    vector<int> v4 = {10,20,40,50,60,30};
//Deletion
    v4.erase(v4.begin()+2);
    v4.erase(v4.begin()+1,v4.end()-2);
    v4.erase(v4.end()-2);
    v4.pop_back();

//Insertion
    v4.insert(v4.begin(),18);
    v4.insert(v4.end(),54);
    v4.insert(v4.begin()+2,180);
    v4.insert(v4.begin()+1,2,9);
    
    vector<int> v5(2,21);
    v4.insert(v4.end()-3,v5.begin(),v5.end());

    for(auto i : v4){
        cout << i << " ";
    }
    cout << endl;

// Size
    cout<< vec.size() << " " << v4.size() << endl;

// Swap
    vec.swap(v4);
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;

// Clear complete vector
    v4.clear();
    for(auto i : v4){
        cout << i << " ";
    }
    cout << endl;

// Empty or Not
    bool e = v4.empty();
    cout << e << " ";
    bool em = vec.empty();
    cout << em << " ";
}
void practiceList(){
    list<int> ls = {2,5};
    ls.push_back(50);   
    ls.emplace_back(20);
    ls.push_front(10);
    ls.emplace_front(21);
    
    ls.pop_front();
    ls.pop_back();

    for(auto i : ls){
        cout << i << " ";
    }
    cout << endl;
   
    cout << ls.size() << endl;
    cout << ls.front() << endl;
    cout << ls.back() << endl;
    
    // All function are same as vector

}
void practiceDeque(){
    deque<int> dq;
    dq.push_front(7);
    dq.emplace_front(29);
    dq.emplace_back(49);

    for(auto i : dq){
        cout << i << " ";
    }
}
void practiceStack(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.emplace(30);
    st.emplace(50);

    st.pop();
    
    bool b = st.empty();
    cout << b << endl;

    cout << st.top() << endl;
    cout << st.size() << endl;

// Swap
    stack<int> st1;
    st1.push(1);
    st1.push(2);

    st.swap(st1);
    cout << st.top() << endl;
    cout << st1.top() << endl;

}
void practiceQueue(){
    queue<int> q;
    q.push(7);
    q.push(9);
    q.emplace(8);
    q.emplace(10);

    q.pop();
    q.front() += 6;

    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;

}
void practicePrority_Queue(){
// Max Heap - maximum prority queue
    priority_queue<char> pq;
    pq.push('a');
    pq.emplace('D');
    pq.emplace('z');
    pq.push('r');

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << endl;

    // datatype as String
    priority_queue<string> pq1;
    pq1.push("AMAN");
    pq1.emplace("sharma");
    pq1.emplace("krishanmohan");
    pq1.push("pachauri");

    cout << pq1.top() << endl;
    pq1.pop();
    cout << pq1.top() << endl;

    cout << endl;

// Min Heap - minimum prority queue
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(18);
    minPQ.push(8);
    minPQ.emplace(10);
    minPQ.emplace(190);

    cout << minPQ.top() << endl;
    minPQ.pop();
    cout << minPQ.top() << endl;

}
void practiceSet(){
    set<int> st1 = {1,2,2,4,5,6};
    set<int> st;
    st.emplace(2);
    st.insert(17);
    st.insert(9);
    st.emplace(10);
    st.insert(17);
    st.emplace(11);
    st.insert(14);

    for(auto it:st){
        cout << it << " ";
    }

    cout << "Size : " <<st.size() << endl;
    int cnt = st.count(170);
    cout << "Count : " << cnt << endl;

    // cout << "Lower Bound : " << *st.lower_bound(2) << endl;
    // cout << "Upper Bound : " << *st.upper_bound(14) << endl;

    auto it = st.find(11);
    st.erase(st.begin(),st.find(10)); 
    st.erase(st.begin(),it);    
    st.erase(17);

    for(auto it:st){
        cout << it << " ";
    }
}
void practiceMultiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    ms.insert(4);
    ms.emplace(2);
    ms.emplace(4);
    ms.emplace(1);
    ms.emplace(2);

    ms.erase(3);
    ms.erase(ms.find(2));

    cout <<  "Count : " << ms.count(2) << endl;

    for(auto it:ms){
        cout << it << " ";
    }

}
void practiceUnorderedSet(){
    unordered_set<int> ust;
    ust.insert(10);
    ust.emplace(200);
    ust.insert(3);
    ust.emplace(40);
    ust.insert(17);
    ust.emplace(1);
    ust.insert(3);
    ust.emplace(10);

// Rest all function are exactly same as set except lower_bound & upper_bound function.

    for(auto i:ust){
        cout << i << " ";
    }
}
void practiceMap(){
    map<int, pair<int,int> > mpp1;
    map< pair<int,int> , int> mpp2;
    map<int,int> mpp;

    mpp1[2] = {7,8};
    mpp1[3] = {18,29};
    mpp1.erase(3);
    // cout << mpp1[2].first << " " << mpp1[3].second << endl;
    

    mpp2[{2,3}] = 45;    // Stores only Unique Values
    mpp2[{2,3}] = 18;
    mpp2.insert({{2,5},63});
    mpp2.erase({2,3});  
    // cout << mpp2.at({2,5}) << " " << mpp2.at({2,3}) << endl;


    mpp.insert({1,10});
    mpp.emplace(2,30);
    mpp.insert({3,20});
    mpp.emplace(4,20);
    mpp.insert({5,90});
    mpp.emplace(2,30);
    mpp.insert({1,20});
    mpp.emplace(3,30);
    
    mpp.erase(mpp.begin(),mpp.find(2));

    for(auto i:mpp){
        cout << "Key : " << i.first << " Value : " << i.second << endl;
    }


/* 
Multimap & Unordered Map follows same pattern as Multiset & Unordered Set. 
These Follows all function that map follows.

MultiMap -: Sorted Manner But same as Unique
unorderedMap -: Unique but not in Sorted manner
*/

}
void practiceExtra(){
//Algorithms
    int arr[] = {10,52,78,96,45,78,12,14};
    auto n = sizeof(arr)/sizeof(arr[0]);

//Sorting    
    sort(arr,arr+n);
    sort(arr,arr+n, greater<int>());
    
    for(auto i:arr){
        cout << i  << " ";
    }
    cout << endl;

// Max Element
    int max = *max_element(arr,arr+n);
    cout << "Maximum Element : " << max << endl;
// Min Element
    cout << "Minimum Element : " << *min_element(arr,arr+n) << endl;

// Permutation
    string s = "321";

    sort(s.begin(),s.end());
    cout << "Permutation : ";
    do{
        cout << s << " ";
    }while(next_permutation(s.begin(),s.end()));
    cout << endl;


// Set Bits Count 
    int num = 17;
    cout << __builtin_popcount(num) << endl;
    long long num1 = 1e15;
    cout << __builtin_popcountll(num1) << endl;



}

int main(){
    // practicePair();
    // practiceVector();
    // practiceList();
    // practiceDeque();
    // practiceStack();
    // practiceQueue();
    // practicePrority_Queue();
    // practiceSet();
    // practiceMultiSet();
    // practiceUnorderedSet();
    // practiceMap();
    // practiceExtra();
}