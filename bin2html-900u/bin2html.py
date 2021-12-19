#!/usr/bin/python3

import os
import sys
import binascii
try:filename = sys.argv[1]
except:sys.exit(".bin file required\n\nExample: bin2html.py payload.bin")
try:jsreq =sys.argv[2]
except:jsreq = ''
payloadjs = "var payload=["
filesize = os.stat(filename).st_size
with open(filename, 'rb') as f:
    chnk = f.read(4)
    while chnk:
        output = binascii.hexlify(chnk[::-1])
        payloadjs = payloadjs + "0X%s," % output.decode('utf-8')
        chnk = f.read(4)
payloadjs = payloadjs + "0];"
f.close()
template= ""
templatefile = "template.dat"
if len(jsreq) > 0:templatefile = "jsreq-template.dat"
with open (templatefile, "r", encoding="utf-8") as f:
    template=f.read()
f.close()
template = template.replace('##PAYLOAD##', payloadjs) 
indextmp = template.replace('##BUF##', str(filesize)) 
f = open(filename.replace('.bin','.html'), 'w+', encoding="utf-8") 
f.write(indextmp)
f.close()
