R2_CMD=reduze-jammy
R2P_CMD=mpirun -np 8 reduze-jammy

all: dirs secmap shifts reduce extract

prep: dirs secmap shifts

	
dirs:
	$(shell if ! [ -d "my_logs" ]; then  mkdir my_logs; fi)
	$(shell if ! [ -d "my_tmp" ]; then  mkdir my_tmp; fi)
	$(shell if ! [ -d "my_results" ]; then  mkdir my_results; fi)
	
secmap:
	${R2_CMD} jobs_1_sectormappings.yaml > my_logs/mappings.log
	
shifts:
	${R2_CMD} jobs_2_shifts.yaml > my_logs/shifts.log

reduce:
	${R2P_CMD} jobs_3_reduce.yaml > my_logs/reduce.log

extract:
	${R2_CMD} jobs_4_extract.yaml > my_logs/extract.log
	
clean:
	rm -rf log/ graphs/ reductions/ sectormappings/ tmp/ my_logs/ my_tmp/ my_results/

open:
	kate Makefile config/* jobs_* masters.curr.m masters.sub.m List &
