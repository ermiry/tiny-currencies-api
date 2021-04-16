# Tiny Pocket Currencies API Service

### Development

```
sudo docker run \
  -it \
  --name currencies --rm \
  -p 5000:5000 --net ermiry \
  -v /home/ermiry/Documents/ermiry/Projects/tiny-pocket-currencies-api:/home/pocket \
  -e RUNTIME=development \
  -e PORT=5000 \
  -e CERVER_RECEIVE_BUFFER_SIZE=4096 -e CERVER_TH_THREADS=4 \
  -e CERVER_CONNECTION_QUEUE=4 \
  ermiry/tiny-pocket-currencies-api:development /bin/bash
```

### Test

```
sudo docker run \
  -it \
  --name currencies --rm \
  -p 5000:5000 --net ermiry \
  -e RUNTIME=test \
  -e PORT=5000 \
  -e CERVER_RECEIVE_BUFFER_SIZE=4096 -e CERVER_TH_THREADS=4 \
  -e CERVER_CONNECTION_QUEUE=4 \
  ermiry/tiny-pocket-currencies-api:test /bin/bash
```

### Production

```
sudo docker run \
  -d \
  --name currencies --rm \
  -p 5000:5000 --net ermiry \
  -e RUNTIME=production \
  -e PORT=5000 \
  -e CERVER_RECEIVE_BUFFER_SIZE=4096 -e CERVER_TH_THREADS=4 \
  -e CERVER_CONNECTION_QUEUE=4 \
  ermiry/tiny-pocket-currencies-api:production
```

### Main

#### GET /api/currencies
**Access:** Public \
**Description:** Currencies service top level route \
**Returns:**
  - 200 on success

#### GET api/currencies/version
**Access:** Public \
**Description:** Returns currencies service current version \
**Returns:**
  - 200 and version's json on success
