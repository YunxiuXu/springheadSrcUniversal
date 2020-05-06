xof 0303txt 0032
template AnimTicksPerSecond {
 <9e415a43-7ba6-4a73-8743-b73d47e88476>
 DWORD AnimTicksPerSecond;
}

template Frame {
 <3d82ab46-62da-11cf-ab39-0020af71e433>
 [...]
}

template Matrix4x4 {
 <f6f23f45-7686-11cf-8f52-0040333594a3>
 array FLOAT matrix[16];
}

template FrameTransformMatrix {
 <f6f23f41-7686-11cf-8f52-0040333594a3>
 Matrix4x4 frameMatrix;
}

template Vector {
 <3d82ab5e-62da-11cf-ab39-0020af71e433>
 FLOAT x;
 FLOAT y;
 FLOAT z;
}

template MeshFace {
 <3d82ab5f-62da-11cf-ab39-0020af71e433>
 DWORD nFaceVertexIndices;
 array DWORD faceVertexIndices[nFaceVertexIndices];
}

template Mesh {
 <3d82ab44-62da-11cf-ab39-0020af71e433>
 DWORD nVertices;
 array Vector vertices[nVertices];
 DWORD nFaces;
 array MeshFace faces[nFaces];
 [...]
}

template MeshNormals {
 <f6f23f43-7686-11cf-8f52-0040333594a3>
 DWORD nNormals;
 array Vector normals[nNormals];
 DWORD nFaceNormals;
 array MeshFace faceNormals[nFaceNormals];
}

template Coords2d {
 <f6f23f44-7686-11cf-8f52-0040333594a3>
 FLOAT u;
 FLOAT v;
}

template MeshTextureCoords {
 <f6f23f40-7686-11cf-8f52-0040333594a3>
 DWORD nTextureCoords;
 array Coords2d textureCoords[nTextureCoords];
}

template ColorRGBA {
 <35ff44e0-6c7c-11cf-8f52-0040333594a3>
 FLOAT red;
 FLOAT green;
 FLOAT blue;
 FLOAT alpha;
}

template ColorRGB {
 <d3e16e81-7835-11cf-8f52-0040333594a3>
 FLOAT red;
 FLOAT green;
 FLOAT blue;
}

template Material {
 <3d82ab4d-62da-11cf-ab39-0020af71e433>
 ColorRGBA faceColor;
 FLOAT power;
 ColorRGB specularColor;
 ColorRGB emissiveColor;
 [...]
}

template MeshMaterialList {
 <f6f23f42-7686-11cf-8f52-0040333594a3>
 DWORD nMaterials;
 DWORD nFaceIndexes;
 array DWORD faceIndexes[nFaceIndexes];
 [Material <3d82ab4d-62da-11cf-ab39-0020af71e433>]
}

template XSkinMeshHeader {
 <3cf169ce-ff7c-44ab-93c0-f78f62d172e2>
 WORD nMaxSkinWeightsPerVertex;
 WORD nMaxSkinWeightsPerFace;
 WORD nBones;
}

template SkinWeights {
 <6f0d123b-bad2-4167-a0d0-80224f25fabb>
 STRING transformNodeName;
 DWORD nWeights;
 array DWORD vertexIndices[nWeights];
 array FLOAT weights[nWeights];
 Matrix4x4 matrixOffset;
}

template Animation {
 <3d82ab4f-62da-11cf-ab39-0020af71e433>
 [...]
}

template AnimationSet {
 <3d82ab50-62da-11cf-ab39-0020af71e433>
 [Animation <3d82ab4f-62da-11cf-ab39-0020af71e433>]
}

template FloatKeys {
 <10dd46a9-775b-11cf-8f52-0040333594a3>
 DWORD nValues;
 array FLOAT values[nValues];
}

template TimedFloatKeys {
 <f406b180-7b3b-11cf-8f52-0040333594a3>
 DWORD time;
 FloatKeys tfkeys;
}

template AnimationKey {
 <10dd46a8-775b-11cf-8f52-0040333594a3>
 DWORD keyType;
 DWORD nKeys;
 array TimedFloatKeys keys[nKeys];
}


AnimTicksPerSecond {
 60;
}

Frame Root {
 

 FrameTransformMatrix {
  1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000;;
 }

 Mesh NewModel {
  32;
  -1.000000;1.000000;0.000000;,
  1.000000;1.000000;0.000000;,
  1.000000;1.000000;-2.500000;,
  -1.000000;1.000000;-2.500000;,
  1.000000;1.000000;-5.000000;,
  -1.000000;1.000000;-5.000000;,
  -1.000000;1.000000;-5.000000;,
  1.000000;1.000000;-5.000000;,
  1.000000;0.000000;-5.000000;,
  -1.000000;0.000000;-5.000000;,
  -1.000000;0.000000;-5.000000;,
  1.000000;0.000000;-5.000000;,
  1.000000;0.000000;-2.500000;,
  -1.000000;0.000000;-2.500000;,
  1.000000;0.000000;0.000000;,
  -1.000000;0.000000;0.000000;,
  -1.000000;0.000000;0.000000;,
  1.000000;0.000000;0.000000;,
  1.000000;1.000000;0.000000;,
  -1.000000;1.000000;0.000000;,
  1.000000;1.000000;0.000000;,
  1.000000;0.000000;0.000000;,
  1.000000;0.000000;-2.500000;,
  1.000000;1.000000;-2.500000;,
  1.000000;0.000000;-5.000000;,
  1.000000;1.000000;-5.000000;,
  -1.000000;0.000000;0.000000;,
  -1.000000;1.000000;0.000000;,
  -1.000000;1.000000;-2.500000;,
  -1.000000;0.000000;-2.500000;,
  -1.000000;1.000000;-5.000000;,
  -1.000000;0.000000;-5.000000;;
  20;
  3;0,1,2;,
  3;0,2,3;,
  3;3,2,4;,
  3;3,4,5;,
  3;6,7,8;,
  3;6,8,9;,
  3;10,11,12;,
  3;10,12,13;,
  3;13,12,14;,
  3;13,14,15;,
  3;16,17,18;,
  3;16,18,19;,
  3;20,21,22;,
  3;20,22,23;,
  3;23,22,24;,
  3;23,24,25;,
  3;26,27,28;,
  3;26,28,29;,
  3;29,28,30;,
  3;29,30,31;;

  MeshNormals {
   32;
   0.000000;1.000000;0.000000;,
   0.000000;1.000000;0.000000;,
   0.000000;1.000000;0.000000;,
   0.000000;1.000000;0.000000;,
   0.000000;1.000000;0.000000;,
   0.000000;1.000000;0.000000;,
   0.000000;0.000000;-1.000000;,
   0.000000;0.000000;-1.000000;,
   0.000000;0.000000;-1.000000;,
   0.000000;0.000000;-1.000000;,
   0.000000;-1.000000;0.000000;,
   0.000000;-1.000000;0.000000;,
   0.000000;-1.000000;0.000000;,
   0.000000;-1.000000;0.000000;,
   0.000000;-1.000000;0.000000;,
   0.000000;-1.000000;0.000000;,
   0.000000;0.000000;1.000000;,
   0.000000;0.000000;1.000000;,
   0.000000;0.000000;1.000000;,
   0.000000;0.000000;1.000000;,
   1.000000;0.000000;0.000000;,
   1.000000;0.000000;0.000000;,
   1.000000;0.000000;0.000000;,
   1.000000;0.000000;0.000000;,
   1.000000;0.000000;0.000000;,
   1.000000;0.000000;0.000000;,
   -1.000000;0.000000;0.000000;,
   -1.000000;0.000000;0.000000;,
   -1.000000;0.000000;0.000000;,
   -1.000000;0.000000;0.000000;,
   -1.000000;0.000000;0.000000;,
   -1.000000;0.000000;0.000000;;
   20;
   3;0,1,2;,
   3;0,2,3;,
   3;3,2,4;,
   3;3,4,5;,
   3;6,7,8;,
   3;6,8,9;,
   3;10,11,12;,
   3;10,12,13;,
   3;13,12,14;,
   3;13,14,15;,
   3;16,17,18;,
   3;16,18,19;,
   3;20,21,22;,
   3;20,22,23;,
   3;23,22,24;,
   3;23,24,25;,
   3;26,27,28;,
   3;26,28,29;,
   3;29,28,30;,
   3;29,30,31;;
  }

  MeshTextureCoords {
   32;
   0.000000;0.000000;,
   1.000000;0.000000;,
   1.000000;0.500000;,
   0.000000;0.500000;,
   1.000000;1.000000;,
   0.000000;1.000000;,
   0.000000;0.000000;,
   1.000000;0.000000;,
   1.000000;1.000000;,
   0.000000;1.000000;,
   0.000000;0.000000;,
   1.000000;0.000000;,
   1.000000;0.500000;,
   0.000000;0.500000;,
   1.000000;1.000000;,
   0.000000;1.000000;,
   0.000000;0.000000;,
   1.000000;0.000000;,
   1.000000;1.000000;,
   0.000000;1.000000;,
   0.000000;0.000000;,
   1.000000;0.000000;,
   1.000000;0.500000;,
   0.000000;0.500000;,
   1.000000;1.000000;,
   0.000000;1.000000;,
   0.000000;0.000000;,
   1.000000;0.000000;,
   1.000000;0.500000;,
   0.000000;0.500000;,
   1.000000;1.000000;,
   0.000000;1.000000;;
  }

  MeshMaterialList {
   1;
   20;
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0;

   Material {
    1.000000;1.000000;1.000000;1.000000;;
    0.000000;
    0.000000;0.000000;0.000000;;
    0.000000;0.000000;0.000000;;
   }
  }

  XSkinMeshHeader {
   2;
   2;
   3;
  }

  SkinWeights {
   "Base";
   0;
   ;
   ;
   1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.012214,-0.389459,0.049189,1.000000;;
  }

  SkinWeights {
   "Link";
   20;
   0,
   1,
   2,
   3,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   26,
   27,
   28,
   29;
   1.000000,
   1.000000,
   0.444939,
   0.437270,
   0.434849,
   0.425789,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   0.434849,
   0.444939,
   1.000000,
   1.000000,
   0.437270,
   0.425789;
   0.999981,0.000002,0.006198,0.000000,0.000002,1.000000,-0.000752,0.000000,-0.006198,0.000752,0.999980,0.000000,0.011908,-0.389422,0.049557,1.000000;;
  }

  SkinWeights {
   "Hand";
   20;
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   22,
   23,
   24,
   25,
   28,
   29,
   30,
   31;
   0.555061,
   0.562730,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   1.000000,
   0.565151,
   0.574211,
   0.565151,
   0.555061,
   1.000000,
   1.000000,
   0.562730,
   0.574211,
   1.000000,
   1.000000;
   0.999996,-0.000074,0.002906,0.000000,0.000027,0.999873,0.015925,0.000000,-0.002906,-0.015924,0.999869,0.000000,0.019802,-0.429416,2.394612,1.000000;;
  }
 }

 Frame Base {
  

  FrameTransformMatrix {
   1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,-0.012214,0.389459,-0.049189,1.000000;;
  }

  Frame Link {
   

   FrameTransformMatrix {
    0.999981,0.000002,-0.006198,0.000000,0.000002,1.000000,0.000752,0.000000,0.006198,-0.000752,0.999981,0.000000,0.000000,0.000000,0.000000,1.000000;;
   }

   Frame Hand {
    

    FrameTransformMatrix {
     0.999995,0.000027,0.003292,0.000000,0.000027,0.999861,-0.016677,0.000000,-0.003292,0.016677,0.999856,0.000000,0.000000,0.000000,-2.351936,1.000000;;
    }
   }
  }
 }
}

AnimationSet RotationXY {
 

 Animation {
  

  AnimationKey {
   0;
   1;
   60;4;-1.000000,0.000000,0.000000,0.000000;;;
  }

  AnimationKey {
   1;
   1;
   60;3;1.000000,1.000000,1.000000;;;
  }

  AnimationKey {
   2;
   4;
   0;3;-0.012214,0.389459,-0.049189;;,
   20;3;-0.012214,0.389459,-0.049189;;,
   40;3;-0.012214,0.389459,-0.049189;;,
   60;3;-0.012214,0.389459,-0.049189;;;
  }
  { Base }
 }

 Animation {
  

  AnimationKey {
   0;
   4;
   0;4;-0.999995,0.000376,0.003099,0.000000;;,
   20;4;-0.999995,0.000376,0.003099,0.000000;;,
   40;4;-0.999995,0.000376,0.003099,0.000000;;,
   60;4;-0.999995,0.000376,0.003099,0.000000;;;
  }

  AnimationKey {
   1;
   1;
   60;3;1.000000,1.000000,1.000000;;;
  }

  AnimationKey {
   2;
   1;
   60;3;0.000000,0.000000,0.000000;;;
  }
  { Link }
 }

 Animation {
  

  AnimationKey {
   0;
   4;
   0;4;-0.999964,-0.008339,-0.001646,0.000000;;,
   20;4;-0.783701,0.621131,-0.001312,0.002857;;,
   40;4;-0.547322,0.476233,0.520154,-0.450643;;,
   60;4;-0.999964,-0.008339,-0.001646,0.000000;;;
  }

  AnimationKey {
   1;
   1;
   60;3;1.000000,1.000000,1.000000;;;
  }

  AnimationKey {
   2;
   4;
   0;3;0.000000,0.000000,-2.351935;;,
   20;3;0.000000,0.000000,-2.351935;;,
   40;3;0.000000,0.000000,-2.351935;;,
   60;3;0.000000,0.000000,-2.351935;;;
  }
  { Hand }
 }
}
