import queue
n = int (input())
D = {6%n : 6, 8%n :8}
Q = queue.Queue()
Q.put(6%n)
Q.put(8%n)
while Q.qsize() and 0 not in D.keys():
    u = Q.get()
    print("u = ", u)
    for x in 6, 8:
        v = (u * 10 + x) % n
        print("v = ", v, "x = ", x)
        
        if v not in D.keys():
            print("put v: ", v)
            Q.put(v)
            
            print("d[v] = ", D[u] * 10 + x)
            D[v] = D[u]*10 + x
        print()

for key, value in D.items():
    print(f"Key: {key}, Value: {value}")
print (D.get(0))