#pragma once

enum {
	FUZZY_MIN_RATE = 3,
	FUZZY_MAX_RATE = 10000000,
};

struct xt_fuzzy_mtinfo {
	uint32_t minimum_rate, maximum_rate;
	uint32_t packets_total, bytes_total;
	uint32_t previous_time, present_time;
	uint32_t mean_rate;
	uint8_t acceptance_rate;
};
