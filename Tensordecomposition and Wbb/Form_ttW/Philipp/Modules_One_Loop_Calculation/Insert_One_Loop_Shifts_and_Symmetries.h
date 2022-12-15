id INT(PentaboxGGtoTTHTopologyA,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,15,4,0,[],1,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,15,4,0,[],1,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,15,4,0,[],1,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,15,4,0,[],1,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,5,31,5,0,[],1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,5,31,5,0,[],1,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,5,31,5,0,[],1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,5,31,5,0,[],1,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyCx12,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyCx12x34,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyCx34,0,0,0,0,[],0,0,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyC,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,0,[],1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,0,[],1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,0,[],1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,0,[],1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,4,23,4,0,[],1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,4,23,4,0,[],1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,29,4,0,[],1,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,29,4,0,[],1,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,1,1,1,0,[],1,0,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,5,2,0,[],1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,9,2,0,[],1,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,10,2,0,[],0,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,17,2,0,[],1,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,18,2,0,[],0,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,20,2,0,[],0,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,7,3,0,[],1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,7,3,0,[],1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,7,3,0,[],1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,7,3,0,[],1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,11,3,0,[],1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,19,3,0,[],1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,21,3,0,[],1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,25,3,0,[],1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,26,3,0,[],0,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,15,4,0,[],1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,15,4,0,[],1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,15,4,0,[],1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,15,4,0,[],1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,23,4,0,[],1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,23,4,0,[],1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,23,4,0,[],1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,23,4,0,[],1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,27,4,0,[],1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,29,4,0,[],1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,0,[],1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,30,4,0,[],0,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,0,[],0,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,5,31,5,0,[],1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,5,31,5,0,[],1,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,5,31,5,0,[],1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyDx12,5,31,5,0,[],1,1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,1,2,1,0,[],0,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,2,1,1,[],-1,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,2,1,1,[],0,1,-1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,2,1,1,[],0,1,0,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,2,1,1,[],0,1,0,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,2,1,0,[],0,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,2,1,1,[],-1,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,2,1,1,[],0,1,-1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,2,1,1,[],0,1,0,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,2,1,1,[],0,1,0,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,2,1,0,[],0,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,2,1,1,[],-1,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,2,1,1,[],0,1,-1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,2,1,1,[],0,1,0,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,2,1,1,[],0,1,0,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,2,1,0,[],0,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,2,1,1,[],-1,1,0,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,2,1,1,[],0,1,-1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,2,1,1,[],0,1,0,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,2,1,1,[],0,1,0,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,4,1,1,[],-1,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,4,1,1,[],0,-1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,4,1,1,[],0,0,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,4,1,1,[],0,0,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,4,1,1,[],-1,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,4,1,1,[],0,-1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,4,1,1,[],0,0,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,4,1,1,[],0,0,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,4,1,1,[],-1,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,4,1,1,[],0,-1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,4,1,1,[],0,0,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,4,1,1,[],0,0,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,4,1,1,[],-1,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,4,1,1,[],0,-1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,4,1,1,[],0,0,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,4,1,1,[],0,0,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,8,1,1,[],-1,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,8,1,1,[],0,-1,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,8,1,1,[],0,0,-1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,8,1,1,[],0,0,0,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,8,1,1,[],-1,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,8,1,1,[],0,-1,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,8,1,1,[],0,0,-1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,1,8,1,1,[],0,0,0,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,8,1,1,[],-1,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,8,1,1,[],0,-1,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,8,1,1,[],0,0,-1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,1,8,1,1,[],0,0,0,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,8,1,1,[],-1,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,8,1,1,[],0,-1,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,8,1,1,[],0,0,-1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,1,8,1,1,[],0,0,0,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,6,2,0,[],0,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,1,[],-1,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,1,[],0,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,1,[],0,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,2,[],-2,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,2,[],-1,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,2,[],-1,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,2,[],0,1,1,-2,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,2,[],0,1,1,-1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,6,2,2,[],0,1,1,0,-2) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,0,[],0,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,1,[],-1,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,1,[],0,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,1,[],0,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,2,[],-2,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,2,[],-1,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,2,[],-1,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,2,[],0,1,1,-2,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,2,[],0,1,1,-1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,6,2,2,[],0,1,1,0,-2) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,0,[],0,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,1,[],-1,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,1,[],0,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,1,[],0,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,2,[],-2,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,2,[],-1,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,2,[],-1,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,2,[],0,1,1,-2,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,2,[],0,1,1,-1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,6,2,2,[],0,1,1,0,-2) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,0,[],0,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,1,[],-1,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,1,[],0,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,1,[],0,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,2,[],-2,1,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,2,[],-1,1,1,-1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,2,[],-1,1,1,0,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,2,[],0,1,1,-2,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,2,[],0,1,1,-1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,6,2,2,[],0,1,1,0,-2) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],-1,1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (-mt^2+s35-s12);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,0,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (s45-mt^2-s12);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,2,[],-2,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-2,1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],-1,1,0,1,0)
    * (2*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (-2*mt^2*s35+s12^2+s35^2+2*mt^2*s12-2*s35*s12+mt^4);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,2,[],-1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,-1,1,0)
    * (-mt^2+s35-s12);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,2,[],-1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-1,1,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,0,1,-1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],-1,1,0,1,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (-s45*mt^2-mt^2*s35+s12^2+2*mt^2*s12-s35*s12+mt^4+s45*s35-s45*s12);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,2,[],0,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,-2,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,2,[],0,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,-1,1,0)
    * (s45-mt^2-s12);

id INT(PentaboxGGtoTTHTopologyAx12,2,10,2,2,[],0,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,0,1,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,0,1,-1)
    * (-2*s45+2*mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (-2*s45*mt^2+s45^2+s12^2+2*mt^2*s12+mt^4-2*s45*s12);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],-1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,2,[],-2,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,2,[],-1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,-1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,2,[],-1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,2,[],0,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,-2,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,2,[],0,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-1,1,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,10,2,2,[],0,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-2,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (-s12);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],-1,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,2,[],-2,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,2,[],-1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,0,1,-1)
    * (-s12);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,2,[],-1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,2,[],0,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],0,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],0,1,-1,1,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,0,[],0,1,0,1,0)
    * (s12^2);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,2,[],0,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,1,[],-1,1,0,1,0)
    * (-s12);

id INT(PentaboxGGtoTTHTopologyAx34,2,10,2,2,[],0,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,2,10,2,2,[],-2,1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,2,[],-2,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,2,[],-1,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,2,[],-1,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,2,[],0,-2,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,2,[],0,-1,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,12,2,2,[],0,0,1,1,-2) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,2,[],-2,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,2,[],-1,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,2,[],-1,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,2,[],0,-2,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,2,[],0,-1,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12,2,12,2,2,[],0,0,1,1,-2) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,2,[],-2,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,2,[],-1,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,2,[],-1,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,2,[],0,-2,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,2,[],0,-1,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx12x34,2,12,2,2,[],0,0,1,1,-2) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,2,[],-2,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,2,[],-1,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,2,[],-1,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,2,[],0,-2,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,2,[],0,-1,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyAx34,2,12,2,2,[],0,0,1,1,-2) = 0;

id INT(PentaboxGGtoTTHTopologyA,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,0,[],1,1,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,-1,1,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,0,[],1,1,0,1,0)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyAx12,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,0,1,-1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,0,[],1,1,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,-1,1,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,0,[],1,1,0,1,0)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyAx34,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,0,1,-1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-mt^2+s35-s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (s45-mt^2-s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-2,1,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (2*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-2*mt^2*s35+s12^2+s35^2+2*mt^2*s12-2*s35*s12+mt^4);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-1,1,1,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s45*mt^2-mt^2*s35+s12^2+2*mt^2*s12-s35*s12+mt^4+s45*s35-s45*s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],0,1,1,1,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (-2*s45+2*mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-2*s45*mt^2+s45^2+s12^2+2*mt^2*s12+mt^4-2*s45*s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,3,[],-3,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-3,1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-2,1,1,1,0)
    * (-3*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (6*mt^2*s35-3*s12^2-3*s35^2-6*mt^2*s12+6*s35*s12-3*mt^4)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3-3*mt^2*s12^2+3*s35*s12^2-mt^6+s35^3-3*mt^2*s35^2-3*s35^2*s12+3*mt^4*s35+6*mt^2*s35*s12-3*mt^4*s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,3,[],-2,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-2,1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-1,1,1,1,-1)
    * (-2*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-2,1,1,1,0)
    * (s45-mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (2*mt^2*s35-s12^2-s35^2-2*mt^2*s12+2*s35*s12-mt^4)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (2*s45*mt^2+2*mt^2*s35-2*s12^2-4*mt^2*s12+2*s35*s12-2*mt^4-2*s45*s35+2*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3-3*mt^2*s12^2+2*s35*s12^2-mt^6-mt^2*s35^2-s35^2*s12+2*mt^4*s35+s45*s12^2-2*s45*mt^2*s35+s45*mt^4+4*mt^2*s35*s12-3*mt^4*s12+2*s45*mt^2*s12+s45*s35^2-2*s45*s35*s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,3,[],-1,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-1,1,1,1,-2)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],0,1,1,1,-2)
    * (-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-1,1,1,1,-1)
    * (2*s45-2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (2*s45*mt^2+2*mt^2*s35-2*s12^2-4*mt^2*s12+2*s35*s12-2*mt^4-2*s45*s35+2*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (2*s45*mt^2-s45^2-s12^2-2*mt^2*s12-mt^4+2*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3-s45^2*s12-3*mt^2*s12^2+s35*s12^2-mt^6+s45^2*s35+mt^4*s35+2*s45*s12^2-2*s45*mt^2*s35+2*s45*mt^4+2*mt^2*s35*s12-3*mt^4*s12-s45^2*mt^2+4*s45*mt^2*s12-2*s45*s35*s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,14,3,3,[],0,1,1,1,-3) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],0,1,1,1,-3)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],0,1,1,1,-2)
    * (3*s45-3*mt^2-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (6*s45*mt^2-3*s45^2-3*s12^2-6*mt^2*s12-3*mt^4+6*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3+s45^3-3*s45^2*s12-3*mt^2*s12^2-mt^6+3*s45*s12^2+3*s45*mt^4-3*mt^4*s12-3*s45^2*mt^2+6*s45*mt^2*s12);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],0,1,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-1,1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-2,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,3,[],-3,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],0,1,1,1,-3)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,3,[],-2,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-1,1,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,3,[],-1,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-2,1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,14,3,3,[],0,1,1,1,-3) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-3,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (s45-mt^2-s12);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-mt^2+s35-s12);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],0,1,1,1,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (-2*s45+2*mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-2*s45*mt^2+s45^2+s12^2+2*mt^2*s12+mt^4-2*s45*s12);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-1,1,1,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s45*mt^2-mt^2*s35+s12^2+2*mt^2*s12-s35*s12+mt^4+s45*s35-s45*s12);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-2,1,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (2*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-2*mt^2*s35+s12^2+s35^2+2*mt^2*s12-2*s35*s12+mt^4);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,3,[],-3,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],0,1,1,1,-3)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],0,1,1,1,-2)
    * (3*s45-3*mt^2-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (6*s45*mt^2-3*s45^2-3*s12^2-6*mt^2*s12-3*mt^4+6*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3+s45^3-3*s45^2*s12-3*mt^2*s12^2-mt^6+3*s45*s12^2+3*s45*mt^4-3*mt^4*s12-3*s45^2*mt^2+6*s45*mt^2*s12);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,3,[],-2,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-1,1,1,1,-2)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],0,1,1,1,-2)
    * (-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-1,1,1,1,-1)
    * (2*s45-2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (2*s45*mt^2+2*mt^2*s35-2*s12^2-4*mt^2*s12+2*s35*s12-2*mt^4-2*s45*s35+2*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (2*s45*mt^2-s45^2-s12^2-2*mt^2*s12-mt^4+2*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3-s45^2*s12-3*mt^2*s12^2+s35*s12^2-mt^6+s45^2*s35+mt^4*s35+2*s45*s12^2-2*s45*mt^2*s35+2*s45*mt^4+2*mt^2*s35*s12-3*mt^4*s12-s45^2*mt^2+4*s45*mt^2*s12-2*s45*s35*s12);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,3,[],-1,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-2,1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-1,1,1,1,-1)
    * (-2*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-2,1,1,1,0)
    * (s45-mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],0,1,1,1,-1)
    * (2*mt^2*s35-s12^2-s35^2-2*mt^2*s12+2*s35*s12-mt^4)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (2*s45*mt^2+2*mt^2*s35-2*s12^2-4*mt^2*s12+2*s35*s12-2*mt^4-2*s45*s35+2*s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3-3*mt^2*s12^2+2*s35*s12^2-mt^6-mt^2*s35^2-s35^2*s12+2*mt^4*s35+s45*s12^2-2*s45*mt^2*s35+s45*mt^4+4*mt^2*s35*s12-3*mt^4*s12+2*s45*mt^2*s12+s45*s35^2-2*s45*s35*s12);

id INT(PentaboxGGtoTTHTopologyAx34,3,14,3,3,[],0,1,1,1,-3) = 
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,3,[],-3,1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,2,[],-2,1,1,1,0)
    * (-3*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,1,[],-1,1,1,1,0)
    * (6*mt^2*s35-3*s12^2-3*s35^2-6*mt^2*s12+6*s35*s12-3*mt^4)
  + INT(PentaboxGGtoTTHTopologyA,3,14,3,0,[],0,1,1,1,0)
    * (-s12^3-3*mt^2*s12^2+3*s35*s12^2-mt^6+s35^3-3*mt^2*s35^2-3*s35^2*s12+3*mt^4*s35+6*mt^2*s35*s12-3*mt^4*s12);

id INT(PentaboxGGtoTTHTopologyAx12,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,-1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,-1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,1,[],1,-1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,22,3,2,[],-2,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,22,3,2,[],-1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,2,[],1,-1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,22,3,2,[],0,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,2,[],1,-2,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,1,[],1,-1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,22,3,2,[],-2,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,22,3,2,[],-1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,2,[],1,-1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,22,3,2,[],0,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,2,[],1,-2,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,1,[],1,-1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,22,3,2,[],-2,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,22,3,2,[],-1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,2,[],1,-1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,22,3,2,[],0,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,2,[],1,-2,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,22,3,0,[],0,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,1,[],1,-1,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,22,3,2,[],-2,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,22,3,2,[],-1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,2,[],1,-1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,22,3,2,[],0,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,2,[],1,-2,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,-1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,-2,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,0,[],1,1,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,0,1,-1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,1,[],1,1,-1,1,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,11,3,0,[],1,1,0,1,0)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,-1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,-2,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,0,[],1,1,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,0,1,-1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,1,[],1,1,-1,1,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,11,3,0,[],1,1,0,1,0)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyA,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,-1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,-1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,-2,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,-1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,-2,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,-1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,-2,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,0,[],1,1,0,1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,1,[],1,1,-1,1,1)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,0,[],1,1,0,1,1)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (2);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,1,[],1,1,-1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,2,[],1,1,-2,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,0,[],1,1,0,1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,1,[],1,1,-1,1,1)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,4,27,4,0,[],1,1,0,1,1)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (2);

id INT(PentaboxGGtoTTHTopologyA,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,1,[],1,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,2,[],1,1,1,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,1,[],1,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,2,[],1,1,1,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,1,[],1,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,2,[],1,1,1,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,1,[],1,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,2,[],1,1,1,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,15,4,1,[],1,1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,15,4,2,[],1,1,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyA,4,30,4,3,[],-3,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,15,4,3,[],1,1,1,1,-3)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,15,4,1,[],1,1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,15,4,2,[],1,1,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12,4,30,4,3,[],-3,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,15,4,3,[],1,1,1,1,-3)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,15,4,1,[],1,1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,15,4,2,[],1,1,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx12x34,4,30,4,3,[],-3,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,15,4,3,[],1,1,1,1,-3)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,15,4,1,[],1,1,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,15,4,2,[],1,1,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyAx34,4,30,4,3,[],-3,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,15,4,3,[],1,1,1,1,-3)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12x34,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx34,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyB,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12x34,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx34,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyB,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (mh2+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+mh2-s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx34,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mh2+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mh2+s45+s14-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyB,2,5,2,1,[],1,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,5,2,1,[],1,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,5,2,1,[],1,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,5,2,1,[],1,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,5,2,1,[],1,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,5,2,1,[],1,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,5,2,1,[],1,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,5,2,1,[],1,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,5,2,1,[],1,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,5,2,1,[],1,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,5,2,1,[],1,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,5,2,1,[],1,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s14+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyBx12,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s23-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyBx34,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyB,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyB,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s23+s45)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s23-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyB,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyB,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyB,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyBx12,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyBx12x34,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12x34,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12x34,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx12x34,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyBx34,2,12,2,0,[],0,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx34,2,12,2,1,[],-1,0,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx34,2,12,2,1,[],0,-1,1,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyBx34,2,12,2,1,[],0,0,1,1,-1) = 0;

id INT(PentaboxGGtoTTHTopologyB,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23-mh2+s45-s14+4*mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyB,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+3*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx12,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s12);

id INT(PentaboxGGtoTTHTopologyBx12,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23-mh2+s45-s14+4*mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+s45+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx34,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mh2+s14+2*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx34,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+s45+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyBx34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,1,[],1,-1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,0,[],1,0,1,1,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,13,3,2,[],1,-2,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,2,[],1,-2,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,1,[],1,-1,1,1,0)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,0,[],1,0,1,1,0)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (2*s14-2*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyB,3,13,3,2,[],1,-1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,2,[],1,-1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,1,[],1,0,1,1,-1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,13,3,2,[],1,0,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,1,[],1,-1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,0,[],1,0,1,1,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,13,3,2,[],1,-2,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,2,[],1,-2,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,1,[],1,-1,1,1,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,0,[],1,0,1,1,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-2*s14+2*mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,13,3,2,[],1,-1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,2,[],1,-1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,1,[],1,0,1,1,-1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,13,3,2,[],1,0,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,1,[],1,-1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,0,[],1,0,1,1,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,13,3,2,[],1,-2,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,2,[],1,-2,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,1,[],1,-1,1,1,0)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,0,[],1,0,1,1,0)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (2*s23-2*s45+2*s12);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,13,3,2,[],1,-1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,2,[],1,-1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,1,[],1,0,1,1,-1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,13,3,2,[],1,0,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,13,3,0,[],1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,0,[],1,0,1,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,1,[],1,-1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,0,[],1,0,1,1,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,13,3,2,[],1,-2,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,2,[],1,-2,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,1,[],1,-1,1,1,0)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,0,[],1,0,1,1,0)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-2*s23+2*mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,13,3,2,[],1,-1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,2,[],1,-1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,1,[],1,0,1,1,-1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,13,3,2,[],1,0,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (2*s14-2*s35)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s14*s35+s35^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (s23+s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (s23*s14+mt^2*s35-s23*s35-s14*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s23-s14+mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s14+2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (s12^2-2*mt^2*s12+2*s14*s12+mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (2*s14-2*mt^2+2*s12);

id INT(PentaboxGGtoTTHTopologyBx12,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (-s23+s45-s14+mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (s45*mt^2+s23*s14-s45*s14+s12^2-s23*mt^2-mt^2*s12+s14*s12+s23*s12-s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (s23-s45+s14-mt^2+2*s12);

id INT(PentaboxGGtoTTHTopologyBx12,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*s45+2*s12);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (-s23+s45)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (2*s23-2*s45)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (s45^2+s23^2-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*s45-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (-s23+s45)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (s23-s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (s45*mt^2+s23*s14-s45*s14-s23*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s23+s45-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14+2*mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s23-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s23+2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s12^2-2*s23*mt^2-2*mt^2*s12+mt^4+s23^2+2*s23*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*mt^2+2*s12);

id INT(PentaboxGGtoTTHTopologyBx34,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (s23-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-s23-s14+mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s23*s14+mt^2*s35+s12^2-mt^2*s12-s35*s12+s14*s12-s23*s35-s14*mt^2+s23*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s23+s14-mt^2-s35+2*s12);

id INT(PentaboxGGtoTTHTopologyBx34,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (2*s14-2*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23+2*mh2-2*s45-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23-2*mh2+2*s45+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (6*s45*mt^2+s45^2+6*mt^2*s35+s12^2-6*s23*mt^2-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35+s23^2-2*s23*s35+2*s23*mh2+2*s23*s12-2*s45*s12-2*s23*s45-6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-2*s23-2*mh2+2*s45-s14+7*mt^2+2*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (mh2-s45-s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (s23+mh2-s45-3*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-2*mh2+2*s45+s14+5*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (5*s45*mt^2+s45^2-s23*s14+2*mt^2*s35+s45*s14-2*s23*mt^2+s14*s35-2*mh2*s45+mh2*s12-2*mt^2*s12-s14*s12+6*mt^4-mh2*s35+mh2^2+s45*s35+3*s14*mt^2+s23*mh2-s45*s12-s23*s45-5*mh2*mt^2-mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23-2*mh2+2*s45+6*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (2*mh2-2*s45-2*s14-4*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*mh2+2*s45+2*s14+4*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (4*s45*mt^2+s45^2+2*s45*s14-2*mh2*s45+4*mt^4+mh2^2+4*s14*mt^2+s14^2-4*mh2*mt^2-2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-2*mh2+2*s45+s14+5*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyBx34,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+2*mh2-4*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*mh2+4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (4*mt^2*s35+4*s23*mt^2+s35^2+4*mt^4-2*mh2*s35+mh2^2+s23^2+2*s23*s35-2*s23*mh2-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyBx34,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (mh2-s45+s14-3*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-s23+mh2-2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-2*mh2+s45-s14+5*mt^2+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (2*s45*mt^2-s23*s14+5*mt^2*s35+3*s23*mt^2-s14*s35-mh2*s45+mh2*s12+s35^2-2*mt^2*s12-s35*s12+6*mt^4-2*mh2*s35+mh2^2+s45*s35+s23*s35-2*s14*mt^2-s23*mh2-s23*s12+s23*s45-5*mh2*mt^2+mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyBx34,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*mh2-2*s45+2*s14-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*mh2+2*s45-2*s14+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (6*s45*mt^2+s45^2+6*mt^2*s35-2*s45*s14+s12^2-2*s14*s35-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+2*s14*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35-6*s14*mt^2-2*s45*s12+s14^2-6*mh2*mt^2+2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyB,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,-1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,-1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyB,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,0,[],1,1,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyB,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,1,[],1,1,1,-1,1)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,4,23,4,0,[],1,1,1,0,1)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (2*s14-2*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyBx12,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,0,[],1,1,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,1,[],1,1,1,-1,1)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx34,4,23,4,0,[],1,1,1,0,1)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-2*s14+2*mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,0,[],1,1,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,1,[],1,1,1,-1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,4,23,4,0,[],1,1,1,0,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (2*s23-2*s45+2*s12);

id INT(PentaboxGGtoTTHTopologyBx34,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,0,[],1,1,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx34,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,1,[],1,1,1,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12,4,23,4,0,[],1,1,1,0,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23+2*mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyBx12x34,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,30,4,0,[],0,1,1,1,1)
    * (-s23+s45+s14-mt^2);

id INT(PentaboxGGtoTTHTopologyBx12x34,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,30,4,1,[],-1,1,1,1,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,3,7,3,0,[],1,1,1,0,0)
    * (-2*s23+2*s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,7,3,0,[],1,1,1,0,0)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,30,4,0,[],0,1,1,1,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2);

id INT(PentaboxGGtoTTHTopologyBx34,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,4,30,4,0,[],0,1,1,1,1)
    * (s23-s14-mt^2+s35);

id INT(PentaboxGGtoTTHTopologyBx34,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,4,30,4,1,[],-1,1,1,1,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,7,3,0,[],1,1,1,0,0)
    * (2*s23-s14-2*mt^2+s35+s12)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,7,3,0,[],1,1,1,0,0)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,4,30,4,0,[],0,1,1,1,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2);

id INT(PentaboxGGtoTTHTopologyC,1,1,1,1,[],1,-1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+mt^2-s12);

id INT(PentaboxGGtoTTHTopologyC,1,1,1,1,[],1,0,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mt^2-s35+s12);

id INT(PentaboxGGtoTTHTopologyC,1,1,1,1,[],1,0,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,1,1,1,1,[],1,0,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,1,1,1,1,[],1,-1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,1,1,1,[],1,0,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mt^2-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,1,1,1,[],1,0,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,1,1,1,1,[],1,0,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,1,1,1,[],1,-1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,1,1,1,[],1,0,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mt^2-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,1,1,1,[],1,0,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mh2+s45+3*mt^2);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,1,1,1,[],1,0,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,1,1,1,1,[],1,-1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+mt^2-s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,1,1,1,[],1,0,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mt^2-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,1,1,1,[],1,0,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mh2+s45+3*mt^2);

id INT(PentaboxGGtoTTHTopologyCx34,1,1,1,1,[],1,0,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,1,2,1,1,[],-1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyC,1,2,1,1,[],0,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyC,1,2,1,1,[],0,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,1,2,1,1,[],0,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,1,2,1,1,[],-1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+s35-s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,2,1,1,[],0,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+mt^2-s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,2,1,1,[],0,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,2,1,1,[],0,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s23+mt^2-s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,2,1,1,[],-1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+s35-s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,2,1,1,[],0,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+mt^2-s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,2,1,1,[],0,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s23-mh2+s45-s14+4*mt^2+s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,2,1,1,[],0,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s23+mt^2-s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,1,2,1,1,[],-1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,2,1,1,[],0,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,2,1,1,[],0,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s23-mh2+s14+2*mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,2,1,1,[],0,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyC,1,4,1,0,[],0,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,1,4,1,1,[],-1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mt^2+s35+s12);

id INT(PentaboxGGtoTTHTopologyC,1,4,1,1,[],0,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+s35-s12);

id INT(PentaboxGGtoTTHTopologyC,1,4,1,1,[],0,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,1,4,1,1,[],0,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s45+mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,4,1,0,[],0,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,1,4,1,1,[],-1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mt^2+s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,4,1,1,[],0,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx12,1,4,1,1,[],0,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,1,4,1,1,[],0,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s45+mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,4,1,0,[],0,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,4,1,1,[],-1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mt^2+s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,4,1,1,[],0,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,4,1,1,[],0,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mh2+3*mt^2+s35);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,4,1,1,[],0,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s45+mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,4,1,0,[],0,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,1,4,1,1,[],-1,0,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mt^2+s35+s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,4,1,1,[],0,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+s35-s12);

id INT(PentaboxGGtoTTHTopologyCx34,1,4,1,1,[],0,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-mh2+3*mt^2+s35);

id INT(PentaboxGGtoTTHTopologyCx34,1,4,1,1,[],0,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s45+mt^2+s12);

id INT(PentaboxGGtoTTHTopologyC,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyCx12,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyCx12x34,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyCx34,1,8,1,0,[],0,0,0,1,0) = 0;

id INT(PentaboxGGtoTTHTopologyC,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s14+3*mt^2+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,2,[],1,1,-2,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s14-2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s14+2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14*s35+s35^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14-mt^2+2*s35+s12);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,2,[],1,1,-1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s14-3*mt^2-3*s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-s14+3*mt^2+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (3*mt^2*s35-3*s14*s35+2*s35^2-s35*s12+s14*s12-3*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s14+2*mt^2+4*s35-s12);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,2,[],1,1,-1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (s14-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-s23-2*mh2+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23*s14+mt^2*s35+s45*s14-s14*s35+2*mh2*s35-s45*s35+s23*s35-s14*mt^2+s14^2-2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2-2*s14+2*s35-s12);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,2,[],1,1,0,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s14-6*mt^2-4*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (12*mt^2*s35+s12^2-4*s14*s35+4*s35^2-6*mt^2*s12-4*s35*s12+2*s14*s12+9*mt^4-6*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-4*s14+12*mt^2+8*s35-4*s12);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,2,[],1,1,0,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (s14-3*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-s23-2*mh2+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-3*s45*mt^2-s23*s14+2*mt^2*s35+s45*s14+3*s23*mt^2-2*s14*s35-2*mh2*s12-mt^2*s12+s14*s12+3*mt^4+4*mh2*s35-2*s45*s35+2*s23*s35-4*s14*mt^2-s23*s12+s45*s12+s14^2+6*mh2*mt^2-2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s23+4*mh2-s45-4*s14+8*mt^2+4*s35-3*s12);

id INT(PentaboxGGtoTTHTopologyC,2,3,2,2,[],1,1,0,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*s23-4*mh2+2*s45+2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2-4*mh2*s45+mt^4+4*mh2^2+s23^2-2*s14*mt^2+4*s23*mh2-2*s23*s45+s14^2+4*mh2*mt^2-4*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s23+8*mh2-2*s45-4*s14+4*mt^2-2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s14+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,2,[],1,1,-2,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14+2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s12^2-2*mt^2*s12+2*s14*s12+mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-2*mt^2+s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,2,[],1,1,-1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14-mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (s14+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-mt^2*s35+s14*s35+2*mt^2*s12+s35*s12+s14*s12-2*mt^4+s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s14+2*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,2,[],1,1,-1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (s23-2*mh2-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-s23+2*mh2+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23*s14+mt^2*s35+s23*mt^2-s14*s35+2*mh2*s12+mt^2*s12-s35*s12+s14*s12-mt^4-s23*s12+s14^2-2*mh2*mt^2+2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2+2*s14-2*mt^2+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,2,[],1,1,0,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14-4*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (4*mt^2*s35+2*s14*s35+s35^2+4*mt^4+4*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*s14+8*mt^2+4*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,2,[],1,1,0,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-s14-2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (s23-2*mh2-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23*s14-mt^2*s35-2*s23*mt^2-s35^2+2*mt^4+2*mh2*s35-s23*s35+3*s14*mt^2+s14^2+4*mh2*mt^2+2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s23+4*mh2+4*s14+5*mt^2+2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,3,2,2,[],1,1,0,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2*s23-4*mh2-2*s14-2*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4-4*mh2*s35+4*mh2^2+s23^2+2*s23*s35+2*s14*mt^2-4*s23*mh2+s14^2+4*mh2*mt^2+4*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s23+8*mh2+4*s14+2*mt^2-4*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,2,[],1,1,-2,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14-2*mt^2+s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,2,[],1,1,-1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (mh2-s45+2*s14-4*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s45*mt^2+mt^2*s35-s45*s14-s14*s35-mt^2*s12+s14*s12+3*mt^4-4*s14*mt^2+s14^2-mh2*mt^2+mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mh2+s45+3*s14-4*mt^2+4*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,2,[],1,1,-1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (0)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2+4*s14-4*mt^2+4*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,2,[],1,1,0,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-2*mh2+2*s45-2*s14+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*mh2-2*s45+2*s14-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (6*s45*mt^2+s45^2+6*mt^2*s35-2*s45*s14+s12^2-2*s14*s35-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+2*s14*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35-6*s14*mt^2-2*s45*s12+s14^2-6*mh2*mt^2+2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-6)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (6*mh2+2*s45+3*s14-10*mt^2-3*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,2,[],1,1,0,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (0)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-7)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2+4*s14-8*mt^2-4*s35+4*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,3,2,2,[],1,1,0,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (0)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2+4*s14-4*s35+4*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,2,[],1,1,-2,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14-mt^2+2*s35+s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,2,[],1,1,-1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (mh2-s45-2*s14-2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*mt^2*s35+s45*s14-s14*s35-mh2*s12+2*mt^2*s12+s14*s12+mh2*s35-s45*s35+2*s14*mt^2+s45*s12+s14^2-mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mh2+s45-3*s14-mt^2+3*s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,2,[],1,1,-1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (0)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2-4*s14+4*s35-4*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,2,[],1,1,0,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*mh2+2*s45+2*s14+4*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (2*mh2-2*s45-2*s14-4*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (4*s45*mt^2+s45^2+2*s45*s14-2*mh2*s45+4*mt^4+mh2^2+4*s14*mt^2+s14^2-4*mh2*mt^2-2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-6)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (6)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (6*mh2+2*s45-3*s14-7*mt^2-3*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,2,[],1,1,0,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (0)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-7)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2-4*s14-4*mt^2-4*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,3,2,2,[],1,1,0,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (0)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2-4*s14+4*mt^2-4*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,1,[],1,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,1,[],1,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,1,[],1,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,2,[],1,-2,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-2,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,2,[],1,-1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s14+mt^2+s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,2,[],1,-1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s14+mt^2+s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,2,[],1,0,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (6*mt^2*s35+s12^2+s35^2-6*mt^2*s12-2*s35*s12+9*mt^4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (12*mt^2+4*s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,2,[],1,0,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-3*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (-2*mh2+s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-3*s45*mt^2-mt^2*s35-2*mh2*s12-s35^2-2*mt^2*s12+s35*s12+6*mt^4+2*mh2*s35-s45*s35+s45*s12+6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*mh2-s45+9*mt^2-s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,5,2,2,[],1,0,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-4*mh2+2*s45-4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-4*s45*mt^2+s45^2-4*mt^2*s35-4*mh2*s45+s35^2+4*mt^4-4*mh2*s35+4*mh2^2+2*s45*s35+8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2-2*s45+6*mt^2-4*s35);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,1,[],1,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,1,[],1,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (mh2+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,1,[],1,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,2,[],1,-2,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-2,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,2,[],1,-1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (mh2+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+s35-s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,2,[],1,-1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s14+mt^2+s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,2,[],1,0,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-2*mh2-2*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (2*mh2+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-2*mt^2*s35+s35^2+mt^4-2*mh2*s35+mh2^2+2*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2+2*s45-mt^2-s35-s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,2,[],1,0,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-3*mh2+s45-3*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-s45*mt^2-3*mt^2*s35-mh2*s45+s35^2+2*mt^4-3*mh2*s35+2*mh2^2+s45*s35+4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*mh2+s45+mt^2-2*s35-s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,5,2,2,[],1,0,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-4*mh2+2*s45-4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-4*s45*mt^2+s45^2-4*mt^2*s35-4*mh2*s45+s35^2+4*mt^4-4*mh2*s35+4*mh2^2+2*s45*s35+8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2-2*s45+6*mt^2-4*s35);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,1,[],1,-1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,1,[],1,0,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (mh2+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,1,[],1,0,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,2,[],1,-2,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-2,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*s14-2*mt^2-2*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,2,[],1,-1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (-mh2-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-mh2*s12-mt^2*s12+s35*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2+s45+s14-2*s35);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,2,[],1,-1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,-1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (-2*mh2+s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-2*mh2*s12-2*mt^2*s12+s35*s12+s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*mh2-s45+2*s14+2*mt^2-3*s35+s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,2,[],1,0,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-2*mh2-2*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (2*mh2+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-2*mt^2*s35+s35^2+mt^4-2*mh2*s35+mh2^2+2*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2+2*s45-mt^2-s35-s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,2,[],1,0,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-3*mh2+s45-3*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-s45*mt^2-3*mt^2*s35-mh2*s45+s35^2+2*mt^4-3*mh2*s35+2*mh2^2+s45*s35+4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*mh2+s45+mt^2-2*s35-s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,5,2,2,[],1,0,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,2,[],1,0,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (-4*mh2+2*s45-4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-4*s45*mt^2+s45^2-4*mt^2*s35-4*mh2*s45+s35^2+4*mt^4-4*mh2*s35+4*mh2^2+2*s45*s35+8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2-2*s45+6*mt^2-4*s35);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*mh2-s45-s14+3*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,2,[],-2,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+2*mt^2-s35+s12);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,2,[],-1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-s14+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-5*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^2*s35-s14*s35-mt^2*s12+s14*s12+4*mt^4-5*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s14+6*mt^2-s12);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,2,[],-1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (2*mh2-s45-2*s14+4*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2*mh2+s45+2*s14-4*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s45*mt^2-mt^2*s35+s45*s14+s14*s35+3*mt^4-4*s14*mt^2+s14^2+2*mh2*mt^2-2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2-s45-2*s14+5*mt^2-2*s35);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,2,[],0,1,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-8*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (8*mt^2*s35+s12^2-2*s14*s35+s35^2-8*mt^2*s12-2*s35*s12+2*s14*s12+16*mt^4-8*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-4*s14+16*mt^2+4*s35-4*s12);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,2,[],0,1,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (s14-4*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-s14+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2*mh2+s45+2*s14-7*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-4*s45*mt^2-mt^2*s35+s45*s14-2*mh2*s12-s35^2-3*mt^2*s12+s35*s12+s14*s12+12*mt^4+2*mh2*s35-s45*s35-7*s14*mt^2+s45*s12+s14^2+8*mh2*mt^2-2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s23+4*mh2-2*s45-4*s14+13*mt^2-2*s12);

id INT(PentaboxGGtoTTHTopologyC,2,6,2,2,[],0,1,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-4*mh2+2*s45+2*s14-6*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (4*mh2-2*s45-2*s14+6*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-4*mh2+2*s45+2*s14-6*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-6*s45*mt^2+s45^2-6*mt^2*s35+2*s45*s14+2*s14*s35-4*mh2*s45+s35^2+9*mt^4-4*mh2*s35+4*mh2^2+2*s45*s35-6*s14*mt^2+s14^2+12*mh2*mt^2-4*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s23+8*mh2-4*s45-4*s14+10*mt^2-4*s35);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*mh2-s45+s14+2*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,2,[],-2,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14+mt^2-2*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,2,[],-1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (s14+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s14-3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-3*mt^2*s35-s14*s35+3*mt^2*s12+s14*s12+3*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s14+4*mt^2-2*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,2,[],-1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-s14+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*mh2-s45+2*s14+2*mt^2-3*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*mh2+s45-2*s14-2*mt^2+3*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*mt^2*s35-s45*s14+s12^2-3*s14*s35+2*mh2*s12+2*s35^2+2*mt^2*s12-3*s35*s12+2*s14*s12-2*mh2*s35+s45*s35+2*s14*mt^2-s45*s12+s14^2+2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2-s45+2*s14+3*mt^2-4*s35+4*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,2,[],0,1,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s14-6*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (9*mt^4+6*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*s14+12*mt^2+2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,2,[],0,1,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-s14-3*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (s14+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*mh2+s45-2*s14-5*mt^2+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-3*s45*mt^2-6*mt^2*s35-s45*s14-2*s14*s35+3*mt^2*s12+s14*s12+6*mt^4+5*s14*mt^2+s14^2+6*mh2*mt^2+2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s23+4*mh2-s45+4*s14+10*mt^2-4*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,6,2,2,[],0,1,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-4*mh2+2*s45-2*s14-4*mt^2+4*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (4*mh2-2*s45+2*s14+4*mt^2-4*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-4*mh2+2*s45-2*s14-4*mt^2+4*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-4*s45*mt^2+s45^2-8*mt^2*s35-2*s45*s14+s12^2-4*s14*s35-4*mh2*s45+4*mh2*s12+4*s35^2+4*mt^2*s12-4*s35*s12+2*s14*s12+4*mt^4-8*mh2*s35+4*mh2^2+4*s45*s35+4*s14*mt^2-2*s45*s12+s14^2+8*mh2*mt^2+4*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s23+8*mh2-2*s45+4*s14+8*mt^2-8*s35+4*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,2,[],-2,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s14-2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s14+2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14*s35+s35^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s14+mt^2-2*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,2,[],-1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (s23+mh2-s45+s14-3*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23*s14+3*mt^2*s35-s45*s14-s14*s35+s35^2-s35*s12+s14*s12-mh2*s35+s45*s35-s23*s35-3*s14*mt^2+mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mh2+3*s14+mt^2-4*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,2,[],-1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (s23+s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-s23-s14+mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23*s14+mt^2*s35-s23*s35-s14*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-5)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2-s45+4*s14+3*mt^2-6*s35+5*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,2,[],0,1,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*s23-2*mh2+2*s45+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s23+2*mh2-2*s45-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (6*s45*mt^2+s45^2+6*mt^2*s35+s12^2-6*s23*mt^2-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35+s23^2-2*s23*s35+2*s23*mh2+2*s23*s12-2*s45*s12-2*s23*s45-6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-6)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2*s23+6*mh2+2*s45+3*s14-5*mt^2-6*s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,2,[],0,1,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*s23-mh2+s45+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s23+mh2-s45-4*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s45*mt^2+mt^2*s35-4*s23*mt^2-mt^2*s12+3*mt^4+s23^2-s23*s35+s23*mh2+s23*s12-s23*s45-mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-7)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s23+8*mh2+4*s14-3*mt^2-8*s35+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,6,2,2,[],0,1,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2+4*s14+4*mt^2-8*s35+4*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,1,[],-1,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,1,[],0,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,1,[],0,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,2,[],-2,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14+2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s12^2-2*mt^2*s12+2*s14*s12+mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-s14+2*mt^2-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,2,[],-1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-s23+mh2-s14-mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23*s14-mt^2*s35-s23*mt^2+s14*s35-mh2*s12+2*mt^2*s12+s35*s12-2*mt^4+2*s14*mt^2+s23*s12+mh2*mt^2-mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (mh2-3*s14+4*mt^2-s35-3*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,2,[],-1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-s23+s45-s14+mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (s23-s45+s14-mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s45*mt^2+s23*s14-s45*s14+s12^2-s23*mt^2-mt^2*s12+s14*s12+s23*s12-s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (5)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*mh2-s45-4*s14+7*mt^2-2*s35-3*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,2,[],0,1,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2*s23-2*mh2+4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s23+2*mh2-4*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (4*mt^2*s35+4*s23*mt^2+s35^2+4*mt^4-2*mh2*s35+mh2^2+s23^2+2*s23*s35-2*s23*mh2-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-6)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (6)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s23+6*mh2-3*s14-4*mt^2-3*s35-3*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,2,[],0,1,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2*s23-mh2-s45+2*mt^2+s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s23+mh2+s45-2*mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*s45*mt^2+2*s23*mt^2+mh2*s45-mh2*s12+2*mt^2*s12+s35*s12-s45*s35+s23^2+s23*s35-s23*mh2+s23*s12-s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-7)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (7)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (s23+8*mh2-s45-4*s14-4*s35-3*s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,6,2,2,[],0,1,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (8*mh2-4*s14+8*mt^2-4*s35-4*s12);

id INT(PentaboxGGtoTTHTopologyC,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s23-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s23+s45)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-mt^2+s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s14+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-mt^2+s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx12,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s45-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s45-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s23-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx34,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+3*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+s45+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+s45+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyC,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyC,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s14-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,1,[],1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (3*mt^2+s35-s12);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,1,[],1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (2*mh2-s45+2*mt^2-s35);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,2,[],1,1,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (6*mt^2*s35+s12^2+s35^2-6*mt^2*s12-2*s35*s12+9*mt^4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-4);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,2,[],1,1,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-3*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-2*mh2+s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-3*s45*mt^2-mt^2*s35-2*mh2*s12-s35^2-2*mt^2*s12+s35*s12+6*mt^4+2*mh2*s35-s45*s35+s45*s12+6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-4);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,2,[],1,1,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-4*mh2+2*s45-4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+s14+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-4*s45*mt^2+s45^2-4*mt^2*s35-4*mh2*s45+s35^2+4*mt^4-4*mh2*s35+4*mh2^2+2*s45*s35+8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-4);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,3,[],1,1,1,-3,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-3,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (9*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-18*mt^2*s35-3*s12^2-3*s35^2+18*mt^2*s12+6*s35*s12-27*mt^4)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s14-2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (s14-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14*s35+s35^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-11)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-11)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-s12^3+9*mt^2*s12^2+3*s35*s12^2+27*mt^6+s35^3+9*mt^2*s35^2-3*s35^2*s12+27*mt^4*s35-18*mt^2*s35*s12-27*mt^4*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-8*s14+22*mt^2+10*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,3,[],1,1,1,-2,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-2,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-6*mt^2*s35-s12^2-s35^2+6*mt^2*s12+2*s35*s12-9*mt^4)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (6*s45*mt^2+2*mt^2*s35+4*mh2*s12+2*s35^2+4*mt^2*s12-2*s35*s12-12*mt^4-4*mh2*s35+2*s45*s35-2*s45*s12-12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (s14-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-s23+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-s23+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23*s14-mt^2*s35-2*s14*s35+s35^2+s23*s35+s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-11)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (2*mh2*s35^2+18*mh2*mt^4+2*mt^2*s12^2-12*mh2*mt^2*s12-4*mh2*s35*s12-s35*s12^2+18*mt^6+2*mh2*s12^2-s35^3+12*mh2*mt^2*s35-4*mt^2*s35^2+2*s35^2*s12+3*mt^4*s35-s45*s12^2-6*s45*mt^2*s35-9*s45*mt^4+2*mt^2*s35*s12-12*mt^4*s12+6*s45*mt^2*s12-s45*s35^2+2*s45*s35*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s23+4*mh2+s45-8*s14+15*mt^2+6*s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,3,[],1,1,1,-1,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-1,-2)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (4*mh2-2*s45+4*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (6*s45*mt^2+2*mt^2*s35+4*mh2*s12+2*s35^2+4*mt^2*s12-2*s35*s12-12*mt^4-4*mh2*s35+2*s45*s35-2*s45*s12-12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (4*s45*mt^2-s45^2+4*mt^2*s35+4*mh2*s45-s35^2-4*mt^4+4*mh2*s35-4*mh2^2-2*s45*s35-8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2*s23+s14+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-16)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (5)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-11)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (12*mh2^2*mt^2-4*mh2*s35^2-s45^2*s12+24*mh2*mt^4-8*mh2*mt^2*s12+4*mh2*s35*s12+12*mt^6+s45^2*s35+s35^3-12*mh2*s45*mt^2-4*mh2*mt^2*s35-mt^2*s35^2+4*mh2^2*s35-s35^2*s12-8*mt^4*s35+4*mh2*s45*s12+2*s45*mt^2*s35-4*mh2^2*s12-12*s45*mt^4+4*mt^2*s35*s12-4*mt^4*s12+3*s45^2*mt^2+4*s45*mt^2*s12-4*mh2*s45*s35+2*s45*s35^2-2*s45*s35*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*s23+8*mh2+2*s45-8*s14+8*mt^2+2*s35);

id INT(PentaboxGGtoTTHTopologyCx12,3,7,3,3,[],1,1,1,0,-3) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (6*mh2-3*s45+6*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (12*s45*mt^2-3*s45^2+12*mt^2*s35+12*mh2*s45-3*s35^2-12*mt^4+12*mh2*s35-12*mh2^2-6*s45*s35-24*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-6*s23+3*s14+6*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (3*s23-s14-3*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-3*s23+s14+3*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-3*s23*s14-3*mt^2*s35-6*s23*mt^2-2*s14*s35+s35^2+3*mt^4+3*s23^2+3*s23*s35+3*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (3*s14-3*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-24)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (13)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-11)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (24*mh2^2*mt^2+6*mh2*s35^2-s45^3+24*mh2*mt^4+8*mt^6+6*mh2*s45^2+8*mh2^3-3*s45^2*s35-s35^3-24*mh2*s45*mt^2-24*mh2*mt^2*s35+6*mt^2*s35^2-12*mh2^2*s35-12*mt^4*s35+12*s45*mt^2*s35-12*mh2^2*s45-12*s45*mt^4+6*s45^2*mt^2+12*mh2*s45*s35-3*s45*s35^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (6*s23+12*mh2+3*s45-8*s14+mt^2-2*s35-s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,1,[],1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (mh2+mt^2-s35);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,1,[],1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (2*mh2-s45+2*mt^2-s35);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,2,[],1,1,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-2*mh2-2*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (2*mh2+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*mh2+2*s45-s14+5*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-2*mt^2*s35+s35^2+mt^4-2*mh2*s35+mh2^2+2*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,2,[],1,1,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-3*mh2+s45-3*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-s45*mt^2-3*mt^2*s35-mh2*s45+s35^2+2*mt^4-3*mh2*s35+2*mh2^2+s45*s35+4*mh2*mt^2);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,2,[],1,1,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-4*mh2+2*s45-4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+s14+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-4*s45*mt^2+s45^2-4*mt^2*s35-4*mh2*s45+s35^2+4*mt^4-4*mh2*s35+4*mh2^2+2*s45*s35+8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-4);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,3,[],1,1,1,-3,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-1,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-2,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-3,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (3*mh2+3*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-6*mh2-6*mt^2+6*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (3*mh2+3*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (6*mt^2*s35-3*s35^2-3*mt^4+6*mh2*s35-3*mh2^2-6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-6*mt^2*s35+3*s35^2+3*mt^4-6*mh2*s35+3*mh2^2+6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-6*mh2+6*s45-3*s14+15*mt^2+6*s35-6*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (3*mh2-3*s45+s14-7*mt^2-3*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (3*mh2-3*s45+2*s14-8*mt^2-3*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (15*s45*mt^2+3*s45^2+15*mt^2*s35-3*s45*s14+3*s12^2-3*s14*s35-6*mh2*s45+6*mh2*s12+3*s35^2-15*mt^2*s12-6*s35*s12+3*s14*s12+19*mt^4-6*mh2*s35+3*mh2^2+6*s45*s35-8*s14*mt^2-6*s45*s12+s14^2-15*mh2*mt^2+3*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (3*mh2^2*mt^2+3*mh2*s35^2+3*mh2*mt^4+mt^6+mh2^3-s35^3-6*mh2*mt^2*s35+3*mt^2*s35^2-3*mh2^2*s35-3*mt^4*s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3*mh2+3*s45-s14+8*mt^2+2*s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,3,[],1,1,1,-2,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-1,-2)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-2,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (4*mh2-s45+4*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-6*mh2+2*s45-6*mt^2+4*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (2*mh2-s45+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (2*s45*mt^2+8*mt^2*s35+2*mh2*s45-3*s35^2-5*mt^4+8*mh2*s35-5*mh2^2-2*s45*s35-10*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s45*mt^2-6*mt^2*s35-2*mh2*s45+2*s35^2+4*mt^4-6*mh2*s35+4*mh2^2+2*s45*s35+8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*s23-2*mh2+2*s45+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2*s23+2*mh2-2*s45-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (6*s45*mt^2+s45^2+6*mt^2*s35+s12^2-6*s23*mt^2-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35+s23^2-2*s23*s35+2*s23*mh2+2*s23*s12-2*s45*s12-2*s23*s45-6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-4*mh2+4*s45-s14+9*mt^2+4*s35-4*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (6*mh2^2*mt^2+4*mh2*s35^2+6*mh2*mt^4+2*mt^6+2*mh2^3-s35^3-2*mh2*s45*mt^2-10*mh2*mt^2*s35+4*mt^2*s35^2-5*mh2^2*s35-5*mt^4*s35+2*s45*mt^2*s35-mh2^2*s45-s45*mt^4+2*mh2*s45*s35-s45*s35^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4*mh2+2*s14-6*mt^2-4*s35+2*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,3,[],1,1,1,-1,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-1,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (5*mh2-2*s45+5*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-4*mh2+2*s45-4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (6*s45*mt^2-s45^2+10*mt^2*s35+6*mh2*s45-3*s35^2-8*mt^4+10*mh2*s35-8*mh2^2-4*s45*s35-16*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-4*s45*mt^2+s45^2-4*mt^2*s35-4*mh2*s45+s35^2+4*mt^4-4*mh2*s35+4*mh2^2+2*s45*s35+8*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-4*s23-2*mh2+2*s45+s14+8*mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (3*s23+mh2-s45-s14-5*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*s45*mt^2-s23*s14-mt^2*s35+s45*s14-8*s23*mt^2+s14*s35-s35^2-2*mt^2*s12+s35*s12-s14*s12+6*mt^4+mh2*s35-s45*s35+2*s23^2-s23*s35+3*s14*mt^2+2*s23*mh2+2*s23*s12-2*s23*s45-2*mh2*mt^2-mh2*s14)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-2*mh2+2*s45+s14+3*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (mh2-s45-s14-mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s45*mt^2-mt^2*s35+s45*s14+s14*s35+mt^2*s12-s14*s12-2*mt^4+2*s14*mt^2+mh2*mt^2-mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (8)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (12*mh2^2*mt^2+5*mh2*s35^2+12*mh2*mt^4+4*mt^6+mh2*s45^2+4*mh2^3-s45^2*s35-s35^3-8*mh2*s45*mt^2-16*mh2*mt^2*s35+5*mt^2*s35^2-8*mh2^2*s35-8*mt^4*s35+6*s45*mt^2*s35-4*mh2^2*s45-4*s45*mt^4+s45^2*mt^2+6*mh2*s45*s35-2*s45*s35^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s23+12*mh2-3*s45+2*s14-15*mt^2-10*s35+5*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,7,3,3,[],1,1,1,0,-3) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (6*mh2-3*s45+6*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (12*s45*mt^2-3*s45^2+12*mt^2*s35+12*mh2*s45-3*s35^2-12*mt^4+12*mh2*s35-12*mh2^2-6*s45*s35-24*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-6*s23+3*s14+6*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (3*s23-s14-3*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-3*s23+s14+3*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-3*s23*s14-3*mt^2*s35-6*s23*mt^2-2*s14*s35+s35^2+3*mt^4+3*s23^2+3*s23*s35+3*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,0,-1)
    * (3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (3*s14-3*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-24)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (13)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (-11)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (24*mh2^2*mt^2+6*mh2*s35^2-s45^3+24*mh2*mt^4+8*mt^6+6*mh2*s45^2+8*mh2^3-3*s45^2*s35-s35^3-24*mh2*s45*mt^2-24*mh2*mt^2*s35+6*mt^2*s35^2-12*mh2^2*s35-12*mt^4*s35+12*s45*mt^2*s35-12*mh2^2*s45-12*s45*mt^4+6*s45^2*mt^2+12*mh2*s45*s35-3*s45*s35^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (6*s23+12*mh2+3*s45-8*s14+mt^2-2*s35-s12);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,1,[],1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-mh2+s45+2*mt^2+s35-s12);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,1,[],1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,2,[],1,1,1,-2,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-2*mh2+2*s45+4*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*s23+2*mh2-s14-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,2,[],1,1,1,-1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,2,[],1,1,1,0,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,3,[],1,1,1,-3,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-1,-2)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-2,-1)
    * (3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-3,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (-3*mh2+3*s45+6*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (6*mh2-6*s45-12*mt^2-6*s35+6*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (-3*mh2+3*s45+6*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (12*s45*mt^2+3*s45^2+12*mt^2*s35+3*s12^2-6*mh2*s45+6*mh2*s12+3*s35^2-12*mt^2*s12-6*s35*s12+12*mt^4-6*mh2*s35+3*mh2^2+6*s45*s35-6*s45*s12-12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-12*s45*mt^2-3*s45^2-12*mt^2*s35-3*s12^2+6*mh2*s45-6*mh2*s12-3*s35^2+12*mt^2*s12+6*s35*s12-12*mt^4+6*mh2*s35-3*mh2^2-6*s45*s35+6*s45*s12+12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-2,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-6*s23-6*mh2+3*s14+3*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (3*s23+3*mh2-s14-2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (3*s23+3*mh2-2*s14-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-3*s23*s14+s14*s35+s35^2-3*mh2*s35+3*mh2^2+3*s23^2-3*s23*s35+6*s23*mh2+s14^2-3*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (6*mh2^2*mt^2-3*mh2*s35^2-s12^3+s45^3-3*s45^2*s12-12*mh2*mt^4+6*mt^2*s12^2+12*mh2*mt^2*s12+6*mh2*s35*s12+3*s35*s12^2+8*mt^6-3*mh2*s45^2-3*mh2*s12^2-mh2^3+3*s45^2*s35+s35^3-12*mh2*s45*mt^2-12*mh2*mt^2*s35+6*mt^2*s35^2+3*mh2^2*s35-3*s35^2*s12+12*mt^4*s35+3*s45*s12^2+6*mh2*s45*s12+12*s45*mt^2*s35+3*mh2^2*s45-3*mh2^2*s12+12*s45*mt^4-12*mt^2*s35*s12-12*mt^4*s12+6*s45^2*mt^2-12*s45*mt^2*s12-6*mh2*s45*s35+3*s45*s35^2-6*s45*s35*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3*mh2+3*s45-s14-mt^2-s35-2*s12);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,3,[],1,1,1,-2,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-1,-2)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-2,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (-2*mh2+2*s45+4*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,-1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-4*s23-6*mh2+2*s45+3*s14-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-3*s23*s14-mt^2*s35+s45*s14+2*s23*mt^2+s14*s35-2*mh2*s45-2*mh2*s35+4*mh2^2+s45*s35+2*s23^2-s23*s35-s14*mt^2+6*s23*mh2-2*s23*s45+s14^2+2*mh2*mt^2-4*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-5)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,-1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s23+6*mh2+2*s45-2*s14-2*s35-3*s12);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,3,[],1,1,1,-1,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,-1,-2)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,2,[],1,1,0,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2*s23-4*mh2+2*s45+2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2-4*mh2*s45+mt^4+4*mh2^2+s23^2-2*s14*mt^2+4*s23*mh2-2*s23*s45+s14^2+4*mh2*mt^2-4*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,1,[],1,0,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2*s23+8*mh2-2*s45-4*s14+4*mt^2-2*s12);

id INT(PentaboxGGtoTTHTopologyCx34,3,7,3,3,[],1,1,1,0,-3) = 
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,3,[],1,1,1,0,-3)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,0,[],1,1,0,1,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,1,[],1,1,-1,1,0)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,0,[],1,1,0,1,0)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (s14+mt^2-2*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,1,[],1,1,0,1,-1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,0,[],1,1,0,1,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,1,[],1,1,-1,1,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,0,[],1,1,0,1,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (-s14+2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,1,[],1,1,0,1,-1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyB,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,0,[],1,1,0,1,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,1,[],1,1,-1,1,0)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-mh2-s45+s14-2*mt^2+s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,0,[],1,1,0,1,0)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (s23-2*s45+mt^2+3*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,1,[],1,1,0,1,-1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,1,[],1,1,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,0,[],1,1,0,1,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,1,[],1,1,0,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,2,[],1,1,-2,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,1,[],1,1,-1,1,0)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-mh2-s14+2*s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,0,[],1,1,0,1,0)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (-s23-s45+2*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,2,[],1,1,-1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,1,[],1,1,0,1,-1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,11,3,2,[],1,1,0,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,1,[],1,-1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,0,[],1,0,1,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,13,3,2,[],1,-2,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,2,[],1,-2,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,1,[],1,-1,1,1,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,-1,1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (2*s14-mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,0,[],1,0,1,1,0)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,0,[],1,0,0,1,0)
    * (2*s14-mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyCx12,3,13,3,2,[],1,-1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,2,[],1,-1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,1,[],1,0,1,1,-1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,13,3,2,[],1,0,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,1,[],1,-1,1,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,0,[],1,0,1,1,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,1,[],1,0,1,1,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,13,3,2,[],1,-2,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,2,[],1,-2,1,1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,1,[],1,-1,1,1,0)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,-1,1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,-1,0,1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-s45-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,0,[],1,0,1,1,0)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,0,[],1,0,0,1,0)
    * (2*s23-s45-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyCx34,3,13,3,2,[],1,-1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,2,[],1,-1,1,1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,1,[],1,0,1,1,-1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,9,2,1,[],1,0,0,1,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,13,3,2,[],1,0,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,3,13,3,2,[],1,0,1,1,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyC,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyC,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s14+2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s14-2*mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (s14-2*mt^2+s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s12^2-2*mt^2*s12+2*s14*s12+mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (s14-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-s23+s45-s14+mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-s45+s14-mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s45*mt^2+s23*s14-s45*s14+s12^2-s23*mt^2-mt^2*s12+s14*s12+s23*s12-s45*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45);

id INT(PentaboxGGtoTTHTopologyCx12,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-s14+s35);

id INT(PentaboxGGtoTTHTopologyCx12,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyCx12,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (2*s14-2*s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14+2*s35)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s14-mt^2+2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s14*s35+s35^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (-s14+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (s23+s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-s14+mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (s23*s14+mt^2*s35-s23*s35-s14*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s23*mt^2+mt^4+s23^2);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s23-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s23+2*mt^2-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-mh2+2*s14-mt^2-s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s23+s45-2*mt^2+3*s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s12^2-2*s23*mt^2-2*mt^2*s12+mt^4+s23^2+2*s23*s12);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (s23-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-s23-s14+mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (mh2-s45+2*s14+mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s23*s14+mt^2*s35+s12^2-mt^2*s12-s35*s12+s14*s12-s23*s35-s14*mt^2+s23*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (3*mh2-2*s45+2*s14+3*mt^2-3*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyCx34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (-s23+s45);

id INT(PentaboxGGtoTTHTopologyCx34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (-s14+mt^2);

id INT(PentaboxGGtoTTHTopologyCx34,3,14,3,2,[],-2,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (2*s23-2*s45)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-mh2-2*s14+mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*s45-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (s45^2+s23^2-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,14,3,2,[],-1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (-s23+s45)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (s23-s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (mh2-s45-2*s14+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (s45*mt^2+s23*s14-s45*s14-s23*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,3,14,3,2,[],0,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (3*mh2-2*s45-2*s14+5*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyC,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s14+mt^2-2*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-2*s45+mt^2+3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+3*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (mh2-s45+2*s14-4*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s45*mt^2+mt^2*s35-s45*s14-s14*s35-mt^2*s12+s14*s12+3*mt^4-4*s14*mt^2+s14^2-mh2*mt^2+mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mh2+3*mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*mh2-2*s45+2*s14-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*mh2+2*s45-2*s14+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (6*s45*mt^2+s45^2+6*mt^2*s35-2*s45*s14+s12^2-2*s14*s35-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+2*s14*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35-6*s14*mt^2-2*s45*s12+s14^2-6*mh2*mt^2+2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyCx34,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s14+mt^2-2*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (mh2-s45-2*s14-2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*mt^2*s35+s45*s14-s14*s35-mh2*s12+2*mt^2*s12+s14*s12+mh2*s35-s45*s35+2*s14*mt^2+s45*s12+s14^2-mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+s45+s14+3*mt^2-s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx34,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (2*mh2-2*s45-2*s14-4*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*mh2+2*s45+2*s14+4*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (4*s45*mt^2+s45^2+2*s45*s14-2*mh2*s45+4*mt^4+mh2^2+4*s14*mt^2+s14^2-4*mh2*mt^2-2*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-2*mh2+2*s45+s14+5*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyCx12,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,21,3,2,[],1,-2,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,-2,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,-1,1,0,1)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-2*s23+s45+mt^2-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,21,3,2,[],1,-1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,-1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,0,1,-1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-mh2+3*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12,3,21,3,2,[],1,0,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,0,1,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,21,3,2,[],1,-2,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,-2,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,-1,1,0,1)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-2*s23+s45+mt^2-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,21,3,2,[],1,-1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,-1,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,0,1,-1,1)
    * (s12)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,-1,1,0,1)
    * (mh2-s45-2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (s12^2+mh2*s12-2*mt^2*s12-s35*s12-s45*s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23+s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,21,3,2,[],1,0,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,0,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,0,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-2*mh2+2*s45+4*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s45-mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyCx34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,-1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,21,3,2,[],1,-2,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,-2,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,21,3,2,[],1,-1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,-1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,-1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,-1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,21,3,2,[],1,0,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,2,[],1,0,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,1,[],1,0,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,1,[],1,0,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,21,3,0,[],1,0,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,5,2,0,[],1,0,1,0,0)
    * (-2*mh2+2*s45+4*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s45-mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,22,3,2,[],-2,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-2,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,22,3,2,[],-1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,22,3,2,[],0,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s45-s14-s12)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyCx34,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,22,3,2,[],-2,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-2,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,22,3,2,[],-1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyCx34,3,22,3,2,[],0,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s45+s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyC,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyCx12,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyCx34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,28,3,0,[],0,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (s45-2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (s23-s14-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,4,23,4,1,[],1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,0,[],1,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,4,23,4,2,[],1,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,1,[],1,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,0,[],1,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (s45-s35)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-2*mh2+2*s45-s14+5*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,4,23,4,3,[],1,1,1,-3,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,3,[],1,1,1,-3,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,2,[],1,1,1,-2,1)
    * (-3*mh2+3*s45+6*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,1,[],1,1,1,-1,1)
    * (-12*s45*mt^2-3*s45^2-12*mt^2*s35-3*s12^2+6*mh2*s45-6*mh2*s12-3*s35^2+12*mt^2*s12+6*s35*s12-12*mt^4+6*mh2*s35-3*mh2^2-6*s45*s35+6*s45*s12+12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-mh2-s45-mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (3*s45-3*s35)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (3*mh2-3*s45+s14-7*mt^2-3*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (3*mh2-3*s45+2*s14-8*mt^2-3*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+3*mh2-3*s45+s14-7*mt^2-4*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (5)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (4)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-3*s23+3*mh2+3*s45+s14-7*mt^2-6*s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,23,4,0,[],1,1,1,0,1)
    * (6*mh2^2*mt^2-3*mh2*s35^2-s12^3+s45^3-3*s45^2*s12-12*mh2*mt^4+6*mt^2*s12^2+12*mh2*mt^2*s12+6*mh2*s35*s12+3*s35*s12^2+8*mt^6-3*mh2*s45^2-3*mh2*s12^2-mh2^3+3*s45^2*s35+s35^3-12*mh2*s45*mt^2-12*mh2*mt^2*s35+6*mt^2*s35^2+3*mh2^2*s35-3*s35^2*s12+12*mt^4*s35+3*s45*s12^2+6*mh2*s45*s12+12*s45*mt^2*s35+3*mh2^2*s45-3*mh2^2*s12+12*s45*mt^4-12*mt^2*s35*s12-12*mt^4*s12+6*s45^2*mt^2-12*s45*mt^2*s12-6*mh2*s45*s35+3*s45*s35^2-6*s45*s35*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-s45*mt^2+s45^2-mt^2*s35-mh2*s45+s35^2+mt^4-mh2*s35+mh2^2-s45*s35+2*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (15*s45*mt^2+3*s45^2+15*mt^2*s35-3*s45*s14+3*s12^2-3*s14*s35-6*mh2*s45+6*mh2*s12+3*s35^2-15*mt^2*s12-6*s35*s12+3*s14*s12+19*mt^4-6*mh2*s35+3*mh2^2+6*s45*s35-8*s14*mt^2-6*s45*s12+s14^2-15*mh2*mt^2+3*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23+s45-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-12);

id INT(PentaboxGGtoTTHTopologyCx34,4,23,4,1,[],1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,0,[],1,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,4,23,4,2,[],1,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,1,[],1,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,0,[],1,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (-2*mh2+2*s45+4*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*mh2+2*s45+s14+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,4,23,4,3,[],1,1,1,-3,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,3,[],1,1,1,-3,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,2,[],1,1,1,-2,1)
    * (-3*mh2+3*s45+6*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,1,[],1,1,1,-1,1)
    * (-12*s45*mt^2-3*s45^2-12*mt^2*s35-3*s12^2+6*mh2*s45-6*mh2*s12-3*s35^2+12*mt^2*s12+6*s35*s12-12*mt^4+6*mh2*s35-3*mh2^2-6*s45*s35+6*s45*s12+12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-1,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,2,[],1,1,1,-2,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,0,-1)
    * (-3*mh2+3*s45+6*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,1,[],1,1,1,-1,0)
    * (6*mh2-6*s45-12*mt^2-6*s35+6*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (3*mh2-3*s45-s14-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (3*mh2-3*s45-2*s14-6*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (3*s23+3*s45-3*mt^2-3*s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,4,23,4,0,[],1,1,1,0,1)
    * (6*mh2^2*mt^2-3*mh2*s35^2-s12^3+s45^3-3*s45^2*s12-12*mh2*mt^4+6*mt^2*s12^2+12*mh2*mt^2*s12+6*mh2*s35*s12+3*s35*s12^2+8*mt^6-3*mh2*s45^2-3*mh2*s12^2-mh2^3+3*s45^2*s35+s35^3-12*mh2*s45*mt^2-12*mh2*mt^2*s35+6*mt^2*s35^2+3*mh2^2*s35-3*s35^2*s12+12*mt^4*s35+3*s45*s12^2+6*mh2*s45*s12+12*s45*mt^2*s35+3*mh2^2*s45-3*mh2^2*s12+12*s45*mt^4-12*mt^2*s35*s12-12*mt^4*s12+6*s45^2*mt^2-12*s45*mt^2*s12-6*mh2*s45*s35+3*s45*s35^2-6*s45*s35*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,7,3,0,[],1,1,1,0,0)
    * (12*s45*mt^2+3*s45^2+12*mt^2*s35+3*s12^2-6*mh2*s45+6*mh2*s12+3*s35^2-12*mt^2*s12-6*s35*s12+12*mt^4-6*mh2*s35+3*mh2^2+6*s45*s35-6*s45*s12-12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (12*s45*mt^2+3*s45^2+6*mt^2*s35+3*s45*s14+s12^2+s14*s35-6*mh2*s45+3*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12-s14*s12+12*mt^4-3*mh2*s35+3*mh2^2+3*s45*s35+6*s14*mt^2-3*s45*s12+s14^2-12*mh2*mt^2-3*mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-3*mh2+3*s45+s14+7*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyC,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,27,4,0,[],1,1,0,1,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyC,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,27,4,1,[],1,1,-1,1,1)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,27,4,0,[],1,1,0,1,1)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (s14+mt^2-2*s35+3*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,4,27,4,0,[],1,1,0,1,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,4,27,4,1,[],1,1,-1,1,1)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,4,27,4,0,[],1,1,0,1,1)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (-s14+2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (2);

id INT(PentaboxGGtoTTHTopologyCx12x34,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,27,4,0,[],1,1,0,1,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12x34,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,27,4,1,[],1,1,-1,1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,27,4,0,[],1,1,0,1,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (mh2-s45-s14-mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (s23-2*s45+mt^2+3*s12);

id INT(PentaboxGGtoTTHTopologyCx34,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,27,4,0,[],1,1,0,1,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,27,4,1,[],1,1,-1,1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,27,4,0,[],1,1,0,1,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (mh2-s45+s14-2*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (-s23-s45+2*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,29,4,1,[],1,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,29,4,0,[],1,0,1,1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx12,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,29,4,2,[],1,-2,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,29,4,1,[],1,-1,1,1,1)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-2*s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,1,[],1,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,29,4,0,[],1,0,1,1,1)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,3,19,3,0,[],1,1,0,0,1)
    * (2*s14-mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-1);

id INT(PentaboxGGtoTTHTopologyCx34,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,29,4,1,[],1,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,29,4,0,[],1,0,1,1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyCx34,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,29,4,2,[],1,-2,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,29,4,1,[],1,-1,1,1,1)
    * (2*s12)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (2*s23-s45-2*s14+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,1,[],1,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,29,4,0,[],1,0,1,1,1)
    * (s12^2)
  + INT(PentaboxGGtoTTHTopologyA,3,19,3,0,[],1,1,0,0,1)
    * (2*s23-s45-mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-1);

id INT(PentaboxGGtoTTHTopologyD,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,1,2,1,0,[],0,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyDx12,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyDx12x34,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyDx34,1,4,1,0,[],0,0,1,0,0) = 0;

id INT(PentaboxGGtoTTHTopologyD,1,8,1,0,[],0,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,1,8,1,0,[],0,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,1,8,1,0,[],0,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,1,8,1,0,[],0,0,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,1,16,1,0,[],0,0,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*mh2-s45-s14+3*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*mh2-s45+s14+2*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,3,2,0,[],1,1,0,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,3,2,1,[],1,1,-1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,3,2,1,[],1,1,0,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyDx34,2,3,2,1,[],1,1,0,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,6,2,0,[],0,1,1,0,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,9,2,1,[],1,-1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,9,2,1,[],1,0,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,9,2,1,[],1,0,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s14-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s14-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s14-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,10,2,1,[],-1,1,0,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,10,2,1,[],0,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,10,2,1,[],0,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyDx12,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (s23-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s14+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,12,2,0,[],0,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,12,2,1,[],-1,0,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyDx34,2,12,2,1,[],0,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-s45+mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,12,2,1,[],0,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (s14-mt^2+s12);

id INT(PentaboxGGtoTTHTopologyD,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23-mh2+s45-s14+4*mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s12);

id INT(PentaboxGGtoTTHTopologyDx12,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23-mh2+s45-s14+4*mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,17,2,1,[],1,-1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,17,2,1,[],1,0,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mh2+s14+2*mt^2+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,17,2,1,[],1,0,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-mh2+s45-s14+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-mh2+s45+s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,18,2,1,[],-1,1,0,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,18,2,1,[],0,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,18,2,1,[],0,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,20,2,1,[],-1,0,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,20,2,1,[],0,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,0,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,20,2,1,[],0,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,1,[],1,-1,1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyD,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyDx12,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*mh2-s45-s14+3*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,24,2,0,[],0,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,2,24,2,1,[],-1,0,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,24,2,1,[],0,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*mh2-s45+s14+2*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,2,24,2,1,[],0,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,3,7,3,1,[],1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyD,3,7,3,1,[],1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,7,3,1,[],1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyDx12,3,7,3,1,[],1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,7,3,1,[],1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,7,3,1,[],1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,7,3,1,[],1,1,1,-1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (-s14+mt^2);

id INT(PentaboxGGtoTTHTopologyDx34,3,7,3,1,[],1,1,1,0,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],0,1,1,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s14+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mh2+s45+3*s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-2*s23+2*s45+2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],0,1,1,-2,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s14+3*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4);

id INT(PentaboxGGtoTTHTopologyDx12,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*s23+2*mh2-s45-3*s14+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s45-s14-s12)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-1,1,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (-s23+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (mh2-s45-2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-mh2+s45-2*s14+2*mt^2+3*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-(s23-s14-mt^2+s35)*(mh2-s45-2*mt^2-s35+s12))
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyDx34,3,11,3,1,[],1,1,-1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,11,3,1,[],1,1,0,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,11,3,2,[],1,1,-2,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s45+s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyDx34,3,11,3,2,[],1,1,-1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-1,1,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (mh2-s45-2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-mh2+s45+2*s14+s35)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * ((s23-s45-s14+mt^2)*(mh2-s45-2*mt^2-s35+s12))
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyDx34,3,11,3,2,[],1,1,0,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s23+s14+mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyD,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,13,3,1,[],1,-1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,13,3,1,[],1,0,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (s23-s14-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,14,3,0,[],0,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,14,3,1,[],-1,1,1,1,0) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (s23-s14-mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,14,3,1,[],0,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s12)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyD,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45);

id INT(PentaboxGGtoTTHTopologyDx12,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyDx12,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23*mt^2+mt^4+s23^2);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23+2*mh2-2*s45-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23-2*mh2+2*s45+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (6*s45*mt^2+s45^2+6*mt^2*s35+s12^2-6*s23*mt^2-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35+s23^2-2*s23*s35+2*s23*mh2+2*s23*s12-2*s45*s12-2*s23*s45-6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-2*s23-2*mh2+2*s45-s14+7*mt^2+2*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23+mh2-s45-4*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mh2+2*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s45*mt^2+mt^2*s35-4*s23*mt^2-mt^2*s12+3*mt^4+s23^2-s23*s35+s23*mh2+s23*s12-s23*s45-mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2-s45+3*s14+3*mt^2-4*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,3,19,3,1,[],1,1,-1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,19,3,1,[],1,1,0,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyDx34,3,19,3,2,[],1,1,-2,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+2*mh2-4*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*mh2+4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (4*mt^2*s35+4*s23*mt^2+s35^2+4*mt^4-2*mh2*s35+mh2^2+s23^2+2*s23*s35-2*s23*mh2-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyDx34,3,19,3,2,[],1,1,-1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+mh2+s45-2*mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23+mh2-s45+mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-2*s45*mt^2+2*s23*mt^2+mh2*s45-mh2*s12+2*mt^2*s12+s35*s12-s45*s35+s23^2+s23*s35-s23*mh2+s23*s12-s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,19,3,2,[],1,1,0,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-2*s45-3*s14+5*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,3,21,3,0,[],1,0,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,21,3,1,[],1,-1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx12,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,21,3,1,[],1,0,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,1,[],1,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12,3,21,3,0,[],1,0,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyAx34,2,5,2,0,[],1,0,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,22,3,0,[],0,1,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,22,3,0,[],0,1,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,22,3,0,[],0,1,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,22,3,1,[],-1,1,1,0,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],-1,1,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,22,3,1,[],0,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,22,3,0,[],0,1,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyD,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,25,3,2,[],1,-2,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23*mt^2+mt^4+s23^2);

id INT(PentaboxGGtoTTHTopologyD,3,25,3,2,[],1,-1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23+mh2-s45-4*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-s23-mh2+s45+3*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23-mh2+s45+4*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s45*mt^2+mt^2*s35-4*s23*mt^2-mt^2*s12+3*mt^4+s23^2-s23*s35+s23*mh2+s23*s12-s23*s45-mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s23+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,25,3,2,[],1,0,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23+2*mh2-2*s45-6*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23-2*mh2+2*s45+6*mt^2+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (6*s45*mt^2+s45^2+6*mt^2*s35+s12^2-6*s23*mt^2-2*mh2*s45+2*mh2*s12+s35^2-6*mt^2*s12-2*s35*s12+9*mt^4-2*mh2*s35+mh2^2+2*s45*s35+s23^2-2*s23*s35+2*s23*mh2+2*s23*s12-2*s45*s12-2*s23*s45-6*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-2*s23-2*mh2+2*s45-s14+7*mt^2+2*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyDx12,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyDx12,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,25,3,2,[],1,-2,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45);

id INT(PentaboxGGtoTTHTopologyDx12,3,25,3,2,[],1,-1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+mh2+s45-2*mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (s23-mh2+2*mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-mh2-s45+2*mt^2+s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (-2*s45*mt^2+2*s23*mt^2+mh2*s45-mh2*s12+2*mt^2*s12+s35*s12-s45*s35+s23^2+s23*s35-s23*mh2+s23*s12-s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-s14+mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,25,3,2,[],1,0,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+2*mh2-4*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*mh2+4*mt^2+2*s35)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (4*mt^2*s35+4*s23*mt^2+s35^2+4*mt^4-2*mh2*s35+mh2^2+s23^2+2*s23*s35-2*s23*mh2-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,25,3,2,[],1,-2,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-2*s45-3*s14+5*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,25,3,2,[],1,-1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-3*s14+6*mt^2+s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23-s45+s14-mt^2+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,25,3,2,[],1,0,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s23-2*mh2-3*s14+7*mt^2+3*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,0,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,1,[],1,-1,0,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (s23+2*mh2-2*s45+s14-7*mt^2-s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyDx34,3,25,3,1,[],1,-1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyDx34,3,25,3,1,[],1,0,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,25,3,2,[],1,-2,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2-s45+3*s14+3*mt^2-4*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,3,25,3,2,[],1,-1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-3)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (3*s14+3*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx34,3,25,3,2,[],1,0,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-4)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-s23-2*mh2+s45+3*s14+5*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*s23+2*mh2-s45-3*s14+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-1);

id INT(PentaboxGGtoTTHTopologyD,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-1,1,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (-s23+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (mh2-s45-2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+mh2-2*s14+s35-s12)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-s45*mt^2+mt^2*s35-s45*s14+2*s23*mt^2-s14*s35+s35^2+mt^2*s12-s35*s12+s14*s12-2*mt^4-mh2*s35+s45*s35+s23*s35-2*s14*mt^2-s23*mh2-s23*s12+s23*s45+mh2*mt^2+mh2*s14)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyD,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s45-s14-s12)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyDx12,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mh2+s45+3*s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-2*s23+2*s45+2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-1,1,1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (mh2-s45-2*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+mh2+s45+2*s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (s45*mt^2+s45^2-mt^2*s35+s45*s14-2*s23*mt^2+s14*s35-mh2*s45+mt^2*s12-s14*s12-2*mt^4+s45*s35-s23*s35+2*s14*mt^2+s23*mh2+s23*s12-s45*s12-s23*s45+mh2*mt^2-mh2*s14)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12);

id INT(PentaboxGGtoTTHTopologyDx12,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (s45+s14-mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],-1,1,1,0,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+s45-s12)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,0,[],0,1,1,0,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-s23+s14+mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-2);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],-1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,1,[],0,1,1,-1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],-1,1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-2*s14+2*mt^2-s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,1,[],0,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2+s14-5*mt^2-3*s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,18,2,0,[],0,1,0,0,1)
    * (s23+2*mh2-2*s45-s14-5*mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-6);

id INT(PentaboxGGtoTTHTopologyDx34,3,26,3,1,[],-1,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,26,3,1,[],0,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,26,3,2,[],-2,1,0,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-2,1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],-1,1,1,0,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,-1,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],-1,0,1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,0,[],0,1,1,0,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-3);

id INT(PentaboxGGtoTTHTopologyDx34,3,26,3,2,[],-1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],-1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,1,[],0,1,1,-1,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,1,[],0,0,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],-1,1,0,0,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2*s14-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyC,2,20,2,0,[],0,0,1,0,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (4);

id INT(PentaboxGGtoTTHTopologyDx34,3,26,3,2,[],0,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,3,22,3,2,[],0,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,0,-1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,1,[],0,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14-5*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,18,2,0,[],0,1,0,0,1)
    * (-s23+2*mh2-s45+s14-5*mt^2-2*s35+s12)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (-6);

id INT(PentaboxGGtoTTHTopologyD,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s14-s35+s12);

id INT(PentaboxGGtoTTHTopologyD,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (s23+2*mh2-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyD,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (3*mh2-2*s45+2*s14+3*mt^2-3*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyDx12,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (-s14+mt^2);

id INT(PentaboxGGtoTTHTopologyDx12,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-s23+2*mh2+s14+mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (2);

id INT(PentaboxGGtoTTHTopologyDx12,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (3*mh2-2*s45-2*s14+5*mt^2-s35)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyA,1,1,1,0,[],1,0,0,0,0)
    * (3);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s23-s45+s12);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45);

id INT(PentaboxGGtoTTHTopologyDx34,3,28,3,1,[],-1,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,28,3,1,[],0,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-s23+mt^2);

id INT(PentaboxGGtoTTHTopologyDx34,3,28,3,2,[],-2,0,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,0,-2)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,28,3,2,[],-1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-1,-1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,3,28,3,2,[],0,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,0,-2)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-1,-1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,2,[],1,1,1,-2,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s23*mt^2+mt^4+s23^2);

id INT(PentaboxGGtoTTHTopologyD,4,15,4,1,[],1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,0,[],0,1,1,1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,15,4,2,[],1,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,1,[],-1,1,1,1,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-2*s23+2*s45+2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,0,[],0,1,1,1,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (-s23+s45-s12);

id INT(PentaboxGGtoTTHTopologyDx12,4,15,4,1,[],1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,0,[],0,1,1,1,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,15,4,2,[],1,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,1,[],-1,1,1,1,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (2*s23-2*s14-2*mt^2+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,0,[],0,1,1,1,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (s23-mt^2);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,15,4,1,[],1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,0,[],0,1,1,1,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,15,4,2,[],1,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,1,[],-1,1,1,1,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,0,[],0,1,1,1,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (-s14+s35-s12);

id INT(PentaboxGGtoTTHTopologyDx34,4,15,4,1,[],1,1,1,1,-1) = 
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,0,[],0,1,1,1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,15,4,2,[],1,1,1,1,-2) = 
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,1,[],-1,1,1,1,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s23+s14+mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,0,[],0,1,1,1,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (s14-mt^2);

id INT(PentaboxGGtoTTHTopologyD,4,23,4,1,[],1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,0,[],1,1,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,23,4,2,[],1,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,1,[],1,1,1,-1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,0,[],1,1,1,0,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (2*s23-2*s45+2*s12);

id INT(PentaboxGGtoTTHTopologyDx12,4,23,4,1,[],1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,0,[],1,1,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,23,4,2,[],1,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,1,[],1,1,1,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,0,[],1,1,1,0,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s23+2*mt^2);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,23,4,1,[],1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,0,[],1,1,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,23,4,2,[],1,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,1,[],1,1,1,-1,1)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,0,[],1,1,1,0,1)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mh2-s45-mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-1);

id INT(PentaboxGGtoTTHTopologyDx34,4,23,4,1,[],1,1,1,-1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,0,[],1,1,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,23,4,2,[],1,1,1,-2,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,1,[],1,1,1,-1,1)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,0,[],1,1,1,0,1)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23+mh2-2*s45-2*mt^2-s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-1);

id INT(PentaboxGGtoTTHTopologyDx12,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,1,[],1,1,-1,1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-2*mh2+s45+4*mt^2+2*s35-s12);

id INT(PentaboxGGtoTTHTopologyDx12,4,27,4,3,[],1,1,-3,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,3,[],1,1,-3,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,2,[],1,1,-2,1,1)
    * (-3*mh2+3*s45+6*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,1,[],1,1,-1,1,1)
    * (-12*s45*mt^2-3*s45^2-12*mt^2*s35-3*s12^2+6*mh2*s45-6*mh2*s12-3*s35^2+12*mt^2*s12+6*s35*s12-12*mt^4+6*mh2*s35-3*mh2^2-6*s45*s35+6*s45*s12+12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+3*mh2-s45-6*mt^2-3*s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-s23+3*mh2-2*s45-6*mt^2-3*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-3*mh2+s45+6*mt^2+3*s35-s12)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (6*mh2^2*mt^2-3*mh2*s35^2-s12^3+s45^3-3*s45^2*s12-12*mh2*mt^4+6*mt^2*s12^2+12*mh2*mt^2*s12+6*mh2*s35*s12+3*s35*s12^2+8*mt^6-3*mh2*s45^2-3*mh2*s12^2-mh2^3+3*s45^2*s35+s35^3-12*mh2*s45*mt^2-12*mh2*mt^2*s35+6*mt^2*s35^2+3*mh2^2*s35-3*s35^2*s12+12*mt^4*s35+3*s45*s12^2+6*mh2*s45*s12+12*s45*mt^2*s35+3*mh2^2*s45-3*mh2^2*s12+12*s45*mt^4-12*mt^2*s35*s12-12*mt^4*s12+6*s45^2*mt^2-12*s45*mt^2*s12-6*mh2*s45*s35+3*s45*s35^2-6*s45*s35*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (6*s45*mt^2+s45^2+12*mt^2*s35+s12^2+6*s23*mt^2-3*mh2*s45+3*mh2*s12+3*s35^2-6*mt^2*s12-3*s35*s12+12*mt^4-6*mh2*s35+3*mh2^2+3*s45*s35+s23^2+3*s23*s35-3*s23*mh2-s23*s12-2*s45*s12+s23*s45-12*mh2*mt^2);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,1,[],1,1,-1,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,2,[],1,1,-2,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,27,4,3,[],1,1,-3,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,3,[],1,1,-3,1,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,27,4,1,[],1,1,-1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,1,[],1,1,-1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (-mh2+s45+2*mt^2+s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,27,4,2,[],1,1,-2,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,2,[],1,1,-2,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,1,[],1,1,-1,1,1)
    * (2*mh2-2*s45-4*mt^2-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (4*s45*mt^2+s45^2+4*mt^2*s35+s12^2-2*mh2*s45+2*mh2*s12+s35^2-4*mt^2*s12-2*s35*s12+4*mt^4-2*mh2*s35+mh2^2+2*s45*s35-2*s45*s12-4*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23-2*mh2+s45+4*mt^2+2*s35-s12);

id INT(PentaboxGGtoTTHTopologyDx34,4,27,4,3,[],1,1,-3,1,1) = 
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,3,[],1,1,-3,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,2,[],1,1,-2,1,1)
    * (-3*mh2+3*s45+6*mt^2+3*s35-3*s12)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,1,[],1,1,-1,1,1)
    * (-12*s45*mt^2-3*s45^2-12*mt^2*s35-3*s12^2+6*mh2*s45-6*mh2*s12-3*s35^2+12*mt^2*s12+6*s35*s12-12*mt^4+6*mh2*s35-3*mh2^2-6*s45*s35+6*s45*s12+12*mh2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (s23-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,0,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-1,-1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,2,[],1,1,-2,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2*s23+3*mh2-s45-6*mt^2-3*s35+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (-s23+3*mh2-2*s45-6*mt^2-3*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,0,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,1,[],1,1,-1,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2*s23-3*mh2+s45+6*mt^2+3*s35-s12)
  + INT(PentaboxGGtoTTHTopologyD,4,27,4,0,[],1,1,0,1,1)
    * (6*mh2^2*mt^2-3*mh2*s35^2-s12^3+s45^3-3*s45^2*s12-12*mh2*mt^4+6*mt^2*s12^2+12*mh2*mt^2*s12+6*mh2*s35*s12+3*s35*s12^2+8*mt^6-3*mh2*s45^2-3*mh2*s12^2-mh2^3+3*s45^2*s35+s35^3-12*mh2*s45*mt^2-12*mh2*mt^2*s35+6*mt^2*s35^2+3*mh2^2*s35-3*s35^2*s12+12*mt^4*s35+3*s45*s12^2+6*mh2*s45*s12+12*s45*mt^2*s35+3*mh2^2*s45-3*mh2^2*s12+12*s45*mt^4-12*mt^2*s35*s12-12*mt^4*s12+6*s45^2*mt^2-12*s45*mt^2*s12-6*mh2*s45*s35+3*s45*s35^2-6*s45*s35*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (6*s45*mt^2+s45^2+12*mt^2*s35+s12^2+6*s23*mt^2-3*mh2*s45+3*mh2*s12+3*s35^2-6*mt^2*s12-3*s35*s12+12*mt^4-6*mh2*s35+3*mh2^2+3*s45*s35+s23^2+3*s23*s35-3*s23*mh2-s23*s12-2*s45*s12+s23*s45-12*mh2*mt^2);

id INT(PentaboxGGtoTTHTopologyD,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,0,[],1,1,1,0,1)
    * (s14-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,1,[],1,1,1,-1,1)
    * (-2*s14+2*s35-2*s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,4,23,4,0,[],1,1,1,0,1)
    * (s12^2-2*s14*s35+s35^2-2*s35*s12+2*s14*s12+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-s23+mh2-s45-mt^2-s35+s12)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (2*s14-2*s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-1);

id INT(PentaboxGGtoTTHTopologyDx12,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,0,[],1,1,1,0,1)
    * (-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,1,[],1,1,1,-1,1)
    * (2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,4,23,4,0,[],1,1,1,0,1)
    * (mt^4-2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (s23+mh2-2*s45-2*mt^2-s35+2*s12)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyA,2,17,2,0,[],1,0,0,0,1)
    * (-1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,0,[],1,1,1,0,1)
    * (s23-s45+s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,1,[],1,1,1,-1,1)
    * (-2*s23+2*s45-2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyB,4,23,4,0,[],1,1,1,0,1)
    * (s45^2+s12^2+s23^2+2*s23*s12-2*s45*s12-2*s23*s45)
  + INT(PentaboxGGtoTTHTopologyB,3,19,3,0,[],1,1,0,0,1)
    * (2*s23-2*s45+2*s12)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (2*s23-2*s45+2*s12);

id INT(PentaboxGGtoTTHTopologyDx34,4,29,4,1,[],1,-1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,1,[],1,1,1,-1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,0,[],1,1,1,0,1)
    * (-s23+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,29,4,2,[],1,-2,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,2,[],1,1,1,-2,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,1,[],1,1,1,-1,1)
    * (2*s23-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,0,-1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,1,[],1,1,-1,0,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (2)
  + INT(PentaboxGGtoTTHTopologyBx12,4,23,4,0,[],1,1,1,0,1)
    * (-2*s23*mt^2+mt^4+s23^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,19,3,0,[],1,1,0,0,1)
    * (-2*s23+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (-2*s23+2*mt^2);

id INT(PentaboxGGtoTTHTopologyD,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,0,[],0,1,1,1,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyD,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,1,[],-1,1,1,1,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (s23-s45-s14+mt^2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx12x34,4,30,4,0,[],0,1,1,1,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx12x34,3,7,3,0,[],1,1,1,0,0)
    * (-s14+s35-s12);

id INT(PentaboxGGtoTTHTopologyDx12,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,0,[],0,1,1,1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,1,[],-1,1,1,1,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-s23+s14+mt^2-s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyA,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyCx34,4,30,4,0,[],0,1,1,1,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx34,3,7,3,0,[],1,1,1,0,0)
    * (s14-mt^2);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,0,[],0,1,1,1,1)
    * (-s23+s45+s14-mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx12x34,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,1,[],-1,1,1,1,1)
    * (2*s23-2*s45-2*s14+2*mt^2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-2)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (-2*s23+2*s45+2*s14-2*mt^2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyB,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,4,30,4,0,[],0,1,1,1,1)
    * (-2*s45*mt^2+s45^2-2*s23*s14+2*s45*s14+2*s23*mt^2+mt^4+s23^2-2*s14*mt^2-2*s23*s45+s14^2)
  + INT(PentaboxGGtoTTHTopologyB,3,7,3,0,[],1,1,1,0,0)
    * (-s23+s45-s12);

id INT(PentaboxGGtoTTHTopologyDx34,4,30,4,1,[],-1,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,1,[],-1,1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,0,[],0,1,1,1,1)
    * (s23-s14-mt^2+s35)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (1);

id INT(PentaboxGGtoTTHTopologyDx34,4,30,4,2,[],-2,1,1,1,1) = 
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,2,[],-2,1,1,1,1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,1,[],-1,1,1,1,1)
    * (-2*s23+2*s14+2*mt^2-2*s35)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],0,-1,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,1,[],-1,0,1,1,1)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyC,3,28,3,0,[],0,0,1,1,1)
    * (2*s23-2*s14-2*mt^2+2*s35-s12)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,0,-1)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,1,[],1,1,1,-1,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyBx12,2,3,2,0,[],1,1,0,0,0)
    * (-1)
  + INT(PentaboxGGtoTTHTopologyAx12x34,2,3,2,0,[],1,1,0,0,0)
    * (1)
  + INT(PentaboxGGtoTTHTopologyCx12,4,30,4,0,[],0,1,1,1,1)
    * (-2*s23*s14-2*mt^2*s35-2*s23*mt^2-2*s14*s35+s35^2+mt^4+s23^2+2*s23*s35+2*s14*mt^2+s14^2)
  + INT(PentaboxGGtoTTHTopologyBx12,3,7,3,0,[],1,1,1,0,0)
    * (s23-mt^2);

