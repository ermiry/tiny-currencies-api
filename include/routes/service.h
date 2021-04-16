#ifndef _POCKET_ROUTES_SERVICE_H_
#define _POCKET_ROUTES_SERVICE_H_

struct _HttpReceive;
struct _HttpRequest;

// GET /api/currencies
extern void pocket_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET /api/currencies/version
extern void pocket_version_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET *
extern void pocket_catch_all_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

#endif