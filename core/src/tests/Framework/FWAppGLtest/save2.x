xof 0302txt 0064
FWScene{
  PHScene scene0{
    0.005;0.001;0;;
    0;-9.8;0;;
    1;0.002;10;0.01;3.40282e+38;3.40282e+38;3.40282e+38;100;3.40282e+38;3.40282e+38;15;0;TRUE;TRUE;0;2;
    PHIKEngine{
      1;20;8.72665;0.523599;0.7;
    }
  }
  GRScene scene0{
  }
}
FWScene{
  PHScene scene1{
    0.005;0.001;0;;
    0;-98;0;;
    1;0.002;10;0.01;3.40282e+38;3.40282e+38;3.40282e+38;100;3.40282e+38;3.40282e+38;15;0;TRUE;TRUE;0;2;
    PHSolid Pointer1{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.3;0.2;-0.3;;
      ;
      0.25;1,0,0,0,1,0,0,0,1;;
      0;0;0;;
      TRUE;FALSE;
    }
    PHSolid soBlock1{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.1;0.4;-0;;
      ;
      10;10,0,0,0,10,0,0,0,10;;
      0;0;0;;
      TRUE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape0{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        }
      }
    }
    PHSolid soBlock2{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.2;0.2;-0;;
      ;
      10;10,0,0,0,10,0,0,0,10;;
      0;0;0;;
      TRUE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape1{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -0.075;0.05;-0.075;,0.075;0.05;-0.075;,0.075;0.05;0.075;,-0.075;0.05;0.075;,0.075;-0.05;0.075;,-0.075;-0.05;0.075;,0.075;-0.05;-0.075;,-0.075;-0.05;-0.075;;
        }
      }
    }
    PHSolid soBlock3{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.1;0;-0;;
      ;
      10;10,0,0,0,10,0,0,0,10;;
      0;0;0;;
      TRUE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape2{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        }
      }
    }
    PHSolid sofrFloor{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0;-0.1;-0;;
      ;
      1;1,0,0,0,1,0,0,0,1;;
      0;0;0;;
      FALSE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape3{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -5;0;-5;,5;0;-5;,5;0;5;,-5;0;5;,5;-1;5;,-5;-1;5;,5;-1;-5;,-5;-1;-5;;
        }
      }
    }
    PHIKEngine{
      1;20;8.72665;0.523599;0.7;
    }
  }
  GRScene scene1{
    GRFrame frPointer1{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.3,0.2,-0.3,1;;
    }
    GRFrame frLight{
      ;
      0.707107,0,0.707107,0,0.5,0.707107,-0.5,0,-0.5,0.707107,0.5,0,0,0,-0,1;;
    }
    GRLight world_light0{
      ;
      0;0;0;0;;
      0.9;0.9;0.9;0.9;;
      0.9;0.9;0.9;0.9;;
      -0.3;-0.3;0.3;0;;
      20;0.8;0.8;0.8;0;-1;-0;;
      1;0.3;0.33;
    }
    GRFrame frBlock3{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.1,0,-0,1;;
      GRMesh frBlock3_mesh0{
        ;
        -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat0{
          ;
          0.019608;1;0.721569;1;;
          0.019608;1;0.721569;1;;
          0.43;0.43;0.43;1;;
          0.004902;0.25;0.180392;1;;
          22;""
;
        }
      }
    }
    {world_mat0}
    GRFrame frBlock2{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.2,0.2,-0,1;;
      GRMesh frBlock2_mesh0{
        ;
        -0.075;0.05;-0.075;,0.075;0.05;-0.075;,0.075;0.05;0.075;,-0.075;0.05;0.075;,0.075;-0.05;0.075;,-0.075;-0.05;0.075;,0.075;-0.05;-0.075;,-0.075;-0.05;-0.075;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat1{
          ;
          1;0.12549;0.078431;1;;
          1;0.12549;0.078431;1;;
          0.83;0.83;0.83;1;;
          0.28;0.035137;0.021961;1;;
          25;""
;
        }
      }
    }
    {world_mat1}
    GRFrame frBlock1{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.1,0.4,-0,1;;
      GRMesh frBlock1_mesh0{
        ;
        -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat2{
          ;
          1;0.933333;0.003922;1;;
          1;0.933333;0.003922;1;;
          0.67;0.67;0.67;1;;
          0.31;0.289333;0.001216;1;;
          25;""
;
        }
      }
    }
    {world_mat2}
    GRFrame frFloor{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0,-0.1,-0,1;;
      GRMesh frFloor_mesh0{
        ;
        -5;0;-5;,5;0;-5;,5;0;5;,-5;0;5;,5;-1;5;,-5;-1;5;,5;-1;-5;,-5;-1;-5;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat3{
          ;
          1;1;1;1;;
          1;1;1;1;;
          0;0;0;1;;
          0;0;0;1;;
          0;""
;
        }
      }
    }
    {world_mat3}
    GRCamera camera{
      ;
      0.01;0.01;;
      0;0;;
      0.01;100;1;
      GRFrame{
        ;
        1,0,-0,0,0,0.7,-0.3,0,-0,0.3,0.7,0,0,0.4,1,1;;
      }
    }
  }
  FWObject object0{
    FALSE;0;
    {Pointer1}
    {frPointer1}
  }
  FWObject object1{
    FALSE;0;
    {soBlock1}
    {frBlock1}
  }
  FWObject object2{
    FALSE;0;
    {soBlock2}
    {frBlock2}
  }
  FWObject object3{
    FALSE;0;
    {soBlock3}
    {frBlock3}
  }
}
FWScene{
  PHScene scene0_1{
    0.005;0.001;0;;
    0;-9.8;0;;
    1;0.002;10;0.01;3.40282e+38;3.40282e+38;3.40282e+38;100;3.40282e+38;3.40282e+38;15;0;TRUE;TRUE;0;2;
    PHIKEngine{
      1;20;8.72665;0.523599;0.7;
    }
  }
  GRScene scene0{
  }
}
FWScene{
  PHScene scene1_1{
    0.005;0.001;0;;
    0;-98;0;;
    1;0.002;10;0.01;3.40282e+38;3.40282e+38;3.40282e+38;100;3.40282e+38;3.40282e+38;15;0;TRUE;TRUE;0;2;
    PHSolid Pointer1{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.3;0.2;-0.3;;
      ;
      0.25;1,0,0,0,1,0,0,0,1;;
      0;0;0;;
      TRUE;FALSE;
    }
    PHSolid soBlock1{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.1;0.4;-0;;
      ;
      10;10,0,0,0,10,0,0,0,10;;
      0;0;0;;
      TRUE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape0_1{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        }
      }
    }
    PHSolid soBlock2{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.2;0.2;-0;;
      ;
      10;10,0,0,0,10,0,0,0,10;;
      0;0;0;;
      TRUE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape1_1{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -0.075;0.05;-0.075;,0.075;0.05;-0.075;,0.075;0.05;0.075;,-0.075;0.05;0.075;,0.075;-0.05;0.075;,-0.075;-0.05;0.075;,0.075;-0.05;-0.075;,-0.075;-0.05;-0.075;;
        }
      }
    }
    PHSolid soBlock3{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0.1;0;-0;;
      ;
      10;10,0,0,0,10,0,0,0,10;;
      0;0;0;;
      TRUE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape2_1{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        }
      }
    }
    PHSolid sofrFloor{
      0;0;0;;
      0;0;0;;
      1;0;0;0;0;-0.1;-0;;
      ;
      1;1,0,0,0,1,0,0,0,1;;
      0;0;0;;
      FALSE;FALSE;
      PHFrame{
        1;0;0;0;0;0;0;;
        CDConvexMesh shape3_1{
          1;0.3;0.5;0.4;0;0;5;0.1;5;0.1;-20;90;200;0;FALSE;FALSE;0.1;1800;0;0;;
          ;
          -5;0;-5;,5;0;-5;,5;0;5;,-5;0;5;,5;-1;5;,-5;-1;5;,5;-1;-5;,-5;-1;-5;;
        }
      }
    }
    PHIKEngine{
      1;20;8.72665;0.523599;0.7;
    }
  }
  GRScene scene1{
    GRFrame frPointer1{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.3,0.2,-0.3,1;;
    }
    GRFrame frLight{
      ;
      0.707107,0,0.707107,0,0.5,0.707107,-0.5,0,-0.5,0.707107,0.5,0,0,0,-0,1;;
    }
    GRLight world_light0{
      ;
      0;0;0;0;;
      0.9;0.9;0.9;0.9;;
      0.9;0.9;0.9;0.9;;
      -0.3;-0.3;0.3;0;;
      20;0.8;0.8;0.8;0;-1;-0;;
      1;0.3;0.33;
    }
    GRFrame frBlock3{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.1,0,-0,1;;
      GRMesh frBlock3_mesh0{
        ;
        -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat0{
          ;
          0.019608;1;0.721569;1;;
          0.019608;1;0.721569;1;;
          0.43;0.43;0.43;1;;
          0.004902;0.25;0.180392;1;;
          22;""
;
        }
      }
    }
    {world_mat0}
    GRFrame frBlock2{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.2,0.2,-0,1;;
      GRMesh frBlock2_mesh0{
        ;
        -0.075;0.05;-0.075;,0.075;0.05;-0.075;,0.075;0.05;0.075;,-0.075;0.05;0.075;,0.075;-0.05;0.075;,-0.075;-0.05;0.075;,0.075;-0.05;-0.075;,-0.075;-0.05;-0.075;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat1{
          ;
          1;0.12549;0.078431;1;;
          1;0.12549;0.078431;1;;
          0.83;0.83;0.83;1;;
          0.28;0.035137;0.021961;1;;
          25;""
;
        }
      }
    }
    {world_mat1}
    GRFrame frBlock1{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0.1,0.4,-0,1;;
      GRMesh frBlock1_mesh0{
        ;
        -0.1;0.05;-0.1;,0.1;0.05;-0.1;,0.1;0.05;0.1;,-0.1;0.05;0.1;,0.1;-0.05;0.1;,-0.1;-0.05;0.1;,0.1;-0.05;-0.1;,-0.1;-0.05;-0.1;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat2{
          ;
          1;0.933333;0.003922;1;;
          1;0.933333;0.003922;1;;
          0.67;0.67;0.67;1;;
          0.31;0.289333;0.001216;1;;
          25;""
;
        }
      }
    }
    {world_mat2}
    GRFrame frFloor{
      ;
      1,0,-0,0,0,1,-0,0,-0,-0,1,0,0,-0.1,-0,1;;
      GRMesh frFloor_mesh0{
        ;
        -5;0;-5;,5;0;-5;,5;0;5;,-5;0;5;,5;-1;5;,-5;-1;5;,5;-1;-5;,-5;-1;-5;;
        4;0,1,2,3;,4;3,2,4,5;,4;5,4,6,7;,4;7,6,1,0;,4;1,6,4,2;,4;7,0,3,5;;
        0.25;-0.5;0.25;,-0.4;-0.2;0.4;,-0.25;-0.5;-0.25;,0.4;-0.2;-0.4;,-0.4;0.2;-0.4;,0.25;0.5;-0.25;,-0.25;0.5;0.25;,0.4;0.2;0.4;;
        ;
        ;
        ;
        0,0,0,0,0,0;
        GRMaterial world_mat3{
          ;
          1;1;1;1;;
          1;1;1;1;;
          0;0;0;1;;
          0;0;0;1;;
          0;""
;
        }
      }
    }
    {world_mat3}
    {world_mat0}
    {world_mat1}
    {world_mat2}
    {world_mat3}
    GRCamera camera{
      ;
      0.01;0.01;;
      0;0;;
      0.01;100;1;
      GRFrame{
        ;
        1,0,-0,0,0,0.7,-0.3,0,-0,0.3,0.7,0,0,0.4,1,1;;
      }
    }
  }
  FWObject object0{
    FALSE;0;
    {Pointer1}
    {frPointer1}
  }
  FWObject object1{
    FALSE;0;
    {soBlock1}
    {frBlock1}
  }
  FWObject object2{
    FALSE;0;
    {soBlock2}
    {frBlock2}
  }
  FWObject object3{
    FALSE;0;
    {soBlock3}
    {frBlock3}
  }
}