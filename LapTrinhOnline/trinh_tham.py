import queue
Q = queue.PriorityQueue()
n, k = map(int, input().split())
a = map(int, input().split())
for i, x in enumerate(a, 1):
    print("i = ", i, "x = ", x)
    Q.put((-x, i))
    
    
    if i >= k:
        print("i is bigger")
        while i - Q.queue[0][1] >= k:
            print("i = ", i, "Q[0][1] = ", Q.queue[0][1])    
            Q.get()
            print("---")
        print("-Q.queue[0][0] = ", -Q.queue[0][0], end = " ")
        
    print()