/* devScaler.h */
/* ----------------Device Support Entry Table for devSCALER----------------- */

#define MAX_SCALER_CHANNELS 32

typedef struct {
	long		number;
	DEVSUPFUN	report;
	DEVSUPFUN	init;
	DEVSUPFUN	init_record;
	DEVSUPFUN	get_ioint_info;
	DEVSUPFUN	reset;
	DEVSUPFUN	read;
	DEVSUPFUN	write_preset;
	DEVSUPFUN	arm;
	DEVSUPFUN	done;
} SCALERDSET;

/*** callback stuff ***/
struct callback {
	CALLBACK	callback;
	struct dbCommon *precord;
	WDOG_ID wd_id;
};