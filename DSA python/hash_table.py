class HashTable:
    def __init__(self):
        self.MAX = 10
        self.arr = [None for i in range(self.MAX)]

    def get_hash(self,key):
        h = 0
        for char in key:
            h += ord(char)
        return h % self.MAX

    def __setitem__(self,key,value):
        h = self.get_hash(key)
        self.arr[h] = value

    def __getitem__(self,key):
        h = self.get_hash(key)
        return self.arr[h]

    def __delitem__(self,key):
        h = self.get_hash(key)
        self.arr[h] = None

t = HashTable()
# print(t.get_hash('march'))
t['march 6'] = 111
print(t['march 6'])
# t.__setitem__(march 4, 88)
# t.__getitem__(march 4)