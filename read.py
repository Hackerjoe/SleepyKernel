import sys,os

sfile = os.open("/dev/sleepy9",os.O_RDWR);
#print(sfile.read())

os.write(sfile,b"1")
os.close(sfile)
