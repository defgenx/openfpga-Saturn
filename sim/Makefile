# Per-block simulation entry points.
.PHONY: vdp1 vdp1-ppm vdp1-clean
vdp1 vdp1-ppm vdp1-clean:
	$(MAKE) -C vdp1 $(if $(filter vdp1-ppm,$@),ppm,$(if $(filter vdp1-clean,$@),clean,all))
