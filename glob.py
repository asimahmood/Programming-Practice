import glob
import os

os.getcwd()

os.chdir("os-test")

print(os.getcwd())

os.listdir()

glob.glob("*.*")

for old_name in glob.glob("0*.*"):
	new_name = "tempfile-" + old_name
	print("Renaming: ", old_name, " to ", new_name)
	os.rename(old_name, new_name)
 


file_sizes = []

for dir_path, dirs, files in os.walk("."):
	print("Running in: ", dir_path)

	for f in files:
		file_full_path = os.path.join(dir_path, f)
		file_size = os.path.getsize(file_full_path)

		file_sizes.append((file_full_path, file_size))

		print("")

import pprint
pprint.pprint(file_sizes)

file_sizes.sort(key = lambda x: x[1], reverse = True)

filtered = filter(lambda x: x[1] > 1024*1024, file_sizes)
for f in filtered:
	print(f)