#!/usr/bin/env python3
import copy

def permutations(n, start=None, free=None):
    free = set(range(n)) if free is None else free
    start = [] if start is None else start

    if not free:
        yield start.copy()
        return

    for i in copy.copy(free):
        free.remove(i)
        start.append(i)
        for g in permutations(n, start, free):
            yield g
        start.pop()
        free.add(i)

for p in permutations(4):
    print(p)
