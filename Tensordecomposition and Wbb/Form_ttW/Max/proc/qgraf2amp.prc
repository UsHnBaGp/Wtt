#procedure qgraf2amp(outvar,diagfile,diagid,xiPhoton)
* Load diagram and translate it from QGRAF notation to amplitude.
* Arguments:
* - outvar: Name of the local variable to which to add the result
* - diagfile: Path to the file containing the diagrams
* - diagid: Diagram number of the diagram to process
*

* Start a new module and hide everything
.sort
PushHide;
.sort

* Load diagram
L q2sdiag =
    diagid(`diagid')*
    #include- `diagfile' # d`diagid'
    ;


* Apply Feynman rules
#call feynmanRules(`xiPhoton')
.sort

* Return result
Unhide `outvar';
.sort
PopHide;
L `outvar' = `outvar'+q2sdiag;
.sort

Hide q2sdiag;
.sort

#endprocedure
