import queue
import copy

Q = queue.PriorityQueue()
Q.put((-2, 3))
Q.put((-7, 2))
Q.put((-4, 1))
Q.put((-5, 4))

"""
(-7, 2)
(-4, 1)
(-2, 3)

"""

while Q.qsize() > 0:
    print(Q.get())
