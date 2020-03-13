class HashMap:
	def __init__(self):
		self.size = 10
		self.map = [None] * self.size

	def _get_hash(self, key):
		return key % self.size

	def add(self, key, value):
		key_hash = self._get_hash(key)
		key_value = [key, value]


		self.map[key_hash] = [ key_value ]
		return True

	def get(self, key):
		key_hash = self._get_hash(key)
		if self.map[key_hash] is not None:
			for pair in self.map[key_hash]:
				if pair[0] == key:
					return pair[1]

		raise KeyError(str(key))


	def __str__(self):
		ret = " "

		for i, item in enumerate(self.map):
			if item is not None:
				ret += str(i) + ": " + str(item) + "\n"

		return ret
		