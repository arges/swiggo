#ifndef EVENT_H
#define EVENT_H

#include <stdint.h>
#include <string>

struct Event{
   uint32_t        id;
   uint32_t        type;
   int64_t         timestamp;
   std::string     info;
   std::string     description;
   uint32_t        size;
};

struct Event Example = {
	.id = 1234,
	.type = 1234,
	.timestamp = 123456,
	.info = "this is a string",
	.description = "more stuff",
	.size = 111,
};

#endif // EVENT_H
