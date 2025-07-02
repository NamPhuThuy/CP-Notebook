(2024-10-27) OLP tin hoc vong dac biet: https://laptrinhonline.club/contest/fincon24


# C++ 
## Basic Data Structure

### Map
myMap.insert({"apple", 5});
myMap["banana"] = 10;
int val = myMap.at("apple");
if (myMap.find("grape") != myMap.end()) { ... }
myMap.erase("banana");
myMap.size();
myMap.empty();
myMap.clear();

### Vector
- Initializations
std::vector<int> scores;
std::vector<float> positions(10);
std::vector<bool> flags(5, false);

- Use
scores.push_back(95);
scores.pop_back();
size_t count = scores.size();
if (scores.empty()) { /* ... */ }
scores.clear();
int first = scores.at(0); (S? ném ngo?i l? n?u index không h?p l?)
int second = scores[1]; (Có th? gây l?i chuong trình n?u index không h?p l?)
int first = scores.front();
int last = scores.back();
scores.insert(scores.begin() + 1, 98); (Chèn 98 vào v? trí th? 2)
scores.erase(scores.begin()); 
for (auto it = scores.begin(); it != scores.end(); ++it) { /* ... */ }
for (int s : scores) { /* ... */ })

### Set
mySet.insert(10);
mySet.erase(5);
if (mySet.count(10)) { ... }
if (mySet.find(20) != mySet.end()) { ... }
mySet.zize();
mySet.empty();
mySet.clear();

### Queue
myQueue.push(10);
myQueue.pop();
int first = myQueue.front();
int last = myQueue.back();
myQueue.size();
myQueue.empty();

### Stack
myStack.push(5);
myStack.pop();
int topVal = myStack.top();
myStack.size();
myStack.empty();
