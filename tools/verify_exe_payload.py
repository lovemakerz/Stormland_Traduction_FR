#!/usr/bin/env python3
from pathlib import Path
import hashlib,json,struct,sys
exe=Path(sys.argv[1]); manifest=Path(sys.argv[2]); d=exe.read_bytes(); m=json.loads(manifest.read_text(encoding='utf-8'))
assert d[-16:-8]==b'SLFEND11','footer missing'
start=struct.unpack('<Q',d[-8:])[0]; assert d[start:start+8]==b'SLFPAY11','payload magic missing'
pos=start+8; count=struct.unpack_from('<I',d,pos)[0]; pos+=4; seen={}
for _ in range(count):
    nl=struct.unpack_from('<H',d,pos)[0]; pos+=2; sz=struct.unpack_from('<Q',d,pos)[0]; pos+=8
    name=d[pos:pos+nl].decode('utf-8'); pos+=nl; body=d[pos:pos+sz]; pos+=sz
    seen[name]=(sz,hashlib.sha256(body).hexdigest())
problems=[]
for f in m['files']:
    if seen.get(f['name'])!=(f['size'],f['sha256']): problems.append(f['name'])
extra=sorted(set(seen)-{f['name'] for f in m['files']})
print('payload count:',count,'expected:',m['count'],'problems:',len(problems),'extra:',len(extra),'overlay:',hex(start))
if problems: print('bad:',*problems,sep='\n - ')
if extra: print('extra:',*extra,sep='\n - ')
raise SystemExit(1 if problems or extra or count!=m['count'] else 0)
