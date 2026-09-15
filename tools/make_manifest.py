#!/usr/bin/env python3
from pathlib import Path
import hashlib,json,sys
root=Path(sys.argv[1]); out=Path(sys.argv[2])
files=[]
for p in sorted(x for x in root.rglob('*') if x.is_file()):
    data=p.read_bytes(); files.append({'name':p.relative_to(root).as_posix(),'size':len(data),'sha256':hashlib.sha256(data).hexdigest()})
out.write_text(json.dumps({'count':len(files),'files':files},indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print(out)
