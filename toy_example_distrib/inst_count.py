import subprocess
import os 

bug_id = []
input_name = []
ins_count = []
ubbl_count = []
branch_count = []

with open('map.txt') as f:
    for line in f:
        temp = line.split()
        if temp[2] == 'succeeded':
            bug_id.append(temp[0])
            input_name.append(temp[1])

for i in range(len(bug_id)):
    wdr = '/home/yh570/toy/toy_example_distrib/buggy/' + str(bug_id[i]) + '/toy'
    os.chdir(wdr)
    subprocess.run(["gcc", "toy.c", "-o", "toy"])


    input_file = '/home/yh570/toy/toy_example_distrib/inputs/' + str(input_name[i])
    pin_command = ["/home/yh570/pin-3.5/pin-3.5-97503-gac534ca30-gcc-linux/pin", "-t", "/home/yh570/pin-3.5/pin-3.5-97503-gac534ca30-gcc-linux/source/tools/ManualExamples/obj-intel64/inscount0.so", "--", "./toy", input_file]
    subprocess.run(pin_command)

    with open('inscount.out') as f:
          c = int(f.readlines()[0].split()[1])
          ins_count.append(c)



    cmd = ['/home/yh570/pin-3.5/pin-3.5-97503-gac534ca30-gcc-linux/pin', '-t', '/home/yh570/pin-3.5/pin-3.5-97503-gac534ca30-gcc-linux/source/tools/CrashCollector/obj-intel64/CrashCollector.so', '-o', 'ubblcount.out', '--', './toy', input_file]
    subprocess.call(cmd)    

    with open('ubblcount.out') as pin_file:
        for line in pin_file:
            if 'N_UBbl' in line:
                num_bbl = line.split(' ')[1]
                ubbl_count.append(int(num_bbl.split('\n')[0]))



    branch_command = ["/home/yh570/pin-3.5/pin-3.5-97503-gac534ca30-gcc-linux/pin", "-t", "/home/yh570/pin-3.5/pin-3.5-97503-gac534ca30-gcc-linux/source/tools/BC/obj-intel64/branchcount.so", "--", "./toy", input_file]
    subprocess.run(branch_command)

    with open('branchcount.out') as f:
          c = int(f.readlines()[0].split()[2])
          branch_count.append(c)



os.chdir('/home/yh570/toy/toy_example_distrib/')
f = open('inst_count.out', 'w')
for i in range(len(bug_id)):
    line = str(bug_id[i]) + ' ' + str(input_name[i]) + ' ' + str(ins_count[i]) + ' ' + str(ubbl_count[i]) + ' ' + str(branch_count[i]) + '\n'
    f.write(line)
    if bug_id[i] in ['39', '42', '251', '286', '403']:
        print(line)


minimal = min(ins_count)
maximal = max(ins_count)
mean = sum(ins_count) / len(ins_count)
print("Average instruction executed: " + str(mean))
print("maximal instruction executed: " + str(maximal))
print("minimal instruction executed: " + str(minimal))



minimal = min(ubbl_count)
maximal = max(ubbl_count)
mean = sum(ubbl_count) / len(ubbl_count)
print("Average ubbl executed: " + str(mean))
print("maximal ubbl executed: " + str(maximal))
print("minimal ubbl executed: " + str(minimal))


minimal = min(branch_count)
maximal = max(branch_count)
mean = sum(branch_count) / len(branch_count)
print("Average branch executed: " + str(mean))
print("maximal branch executed: " + str(maximal))
print("minimal branch executed: " + str(minimal))
