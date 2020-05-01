from collections import OrderedDict

class LRUCache:

    def __init__(self, capacity: int):
        self.__size = capacity
        self.__cache = OrderedDict()
        
    def get(self, key: int) -> int:
        if key not in self.__cache:
            return -1
        else:
            self.__cache.move_to_end(key) #most recent
            return self.__cache[key] # return value
        
    def put(self, key: int, value: int) -> None:
        if key not in self.__cache:
            if len(self.__cache) >= self.__size: 
                self.__cache.popitem(last=False)
        else:
            self.__cache.move_to_end(key)        
        
        self.__cache[key] = value