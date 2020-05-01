from collections import defaultdict, deque 

class FirstUnique:

    def __init__(self, nums: List[int]):
        self._mp = defaultdict()
        self._q = []
        
        for num in nums:
            self.add(num)

    def showFirstUnique(self) -> int:
        while self._q and self._mp[_q[0]] > 1:
            self._q.pop(0)
        
        if self._q:
            return self._q[0]
        return -1

    def add(self, value: int) -> None:
        self._q.append(value)
        self._mp[value] += 1
