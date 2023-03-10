MAKEFLAGS += --no-print-directory

TOOLDIRS := $(filter-out tools/agbcc tools/binutils tools/poryscript,$(wildcard tools/*))
TOOLDIRS := tools/aif2pcm tools/bin2c tools/gbafix tools/gbagfx tools/jsonproc tools/mapjson tools/mid2agb tools/preproc tools/ramscrgen tools/rsfont tools/scaninc

.PHONY: all $(TOOLDIRS)

all: $(TOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@
	