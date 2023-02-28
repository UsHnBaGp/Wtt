# shifts template

* Put all integral topologies in **config/integralfamilies.yaml**, each with 5 (independent) propagators
* Kinematics is already defined in **config/kinematics.yaml** (with s34 and without mw)
* path to the qgraf file in **jobs_2_shifts.yaml** has to be adjusted

* **Makefile**
    * *make clean* cleans directory
    * *make prep* generates required folders and runs reduze to find sectormappings and diagram shifts. the id statements end up in **my_results/shifts.inc**
