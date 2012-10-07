#include <stdint.h>
#include <stdio.h>
#include "util.h"

static struct d_d t[] = {

#include "crlibm/log2.h"
#include "sanity/log2.h"
};

int main(void)
{
	double y;
	float d;
	int e, i, err = 0;
	struct d_d *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;
		setupfenv(p->r);
		y = log2(p->x);
		e = getexcept();
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s log2(%a)==%a except: want %s", rstr(p->r), p->x, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		if (!checkulp(d, p->r)) {
			printf("%s log2(%a) want %a got %a ulperr %.3f = %a + %a\n",
				rstr(p->r), p->x, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
	return !!err;
}
