xof 0302txt 0064
template Header {
 <3D82AB43-62DA-11cf-AB39-0020AF71E433>
 WORD major;
 WORD minor;
 DWORD flags;
}

template Vector {
 <3D82AB5E-62DA-11cf-AB39-0020AF71E433>
 FLOAT x;
 FLOAT y;
 FLOAT z;
}

template Coords2d {
 <F6F23F44-7686-11cf-8F52-0040333594A3>
 FLOAT u;
 FLOAT v;
}

template Matrix4x4 {
 <F6F23F45-7686-11cf-8F52-0040333594A3>
 array FLOAT matrix[16];
}

template ColorRGBA {
 <35FF44E0-6C7C-11cf-8F52-0040333594A3>
 FLOAT red;
 FLOAT green;
 FLOAT blue;
 FLOAT alpha;
}

template ColorRGB {
 <D3E16E81-7835-11cf-8F52-0040333594A3>
 FLOAT red;
 FLOAT green;
 FLOAT blue;
}

template IndexedColor {
 <1630B820-7842-11cf-8F52-0040333594A3>
 DWORD index;
 ColorRGBA indexColor;
}

template Boolean {
 <4885AE61-78E8-11cf-8F52-0040333594A3>
 WORD truefalse;
}

template Boolean2d {
 <4885AE63-78E8-11cf-8F52-0040333594A3>
 Boolean u;
 Boolean v;
}

template MaterialWrap {
 <4885AE60-78E8-11cf-8F52-0040333594A3>
 Boolean u;
 Boolean v;
}

template TextureFilename {
 <A42790E1-7810-11cf-8F52-0040333594A3>
 STRING filename;
}

template Material {
 <3D82AB4D-62DA-11cf-AB39-0020AF71E433>
 ColorRGBA faceColor;
 FLOAT power;
 ColorRGB specularColor;
 ColorRGB emissiveColor;
 [...]
}

template MeshFace {
 <3D82AB5F-62DA-11cf-AB39-0020AF71E433>
 DWORD nFaceVertexIndices;
 array DWORD faceVertexIndices[nFaceVertexIndices];
}

template MeshFaceWraps {
 <4885AE62-78E8-11cf-8F52-0040333594A3>
 DWORD nFaceWrapValues;
 Boolean2d faceWrapValues;
}

template MeshTextureCoords {
 <F6F23F40-7686-11cf-8F52-0040333594A3>
 DWORD nTextureCoords;
 array Coords2d textureCoords[nTextureCoords];
}

template MeshMaterialList {
 <F6F23F42-7686-11cf-8F52-0040333594A3>
 DWORD nMaterials;
 DWORD nFaceIndexes;
 array DWORD faceIndexes[nFaceIndexes];
 [Material]
}

template MeshNormals {
 <F6F23F43-7686-11cf-8F52-0040333594A3>
 DWORD nNormals;
 array Vector normals[nNormals];
 DWORD nFaceNormals;
 array MeshFace faceNormals[nFaceNormals];
}

template MeshVertexColors {
 <1630B821-7842-11cf-8F52-0040333594A3>
 DWORD nVertexColors;
 array IndexedColor vertexColors[nVertexColors];
}

template Mesh {
 <3D82AB44-62DA-11cf-AB39-0020AF71E433>
 DWORD nVertices;
 array Vector vertices[nVertices];
 DWORD nFaces;
 array MeshFace faces[nFaces];
 [...]
}

Header{
1;
0;
1;
}

Mesh cheese_tex3d{
 36;
 0.05000;0.00488;-0.00488;,
 0.05000;0.05000;-0.05000;,
 0.05000;0.00571;-0.00488;,
 0.05000;0.05000;0.05000;,
 0.05000;-0.05000;0.05000;,
 0.05000;-0.00429;0.00429;,
 0.05000;-0.00429;0.00512;,
 0.05000;0.00571;0.00512;,
 0.05000;0.00071;-0.00488;,
 0.05000;-0.05000;-0.05000;,
 0.05000;-0.00429;0.00012;,
 0.05000;-0.00429;-0.00488;,
 0.04500;0.00571;0.00512;,
 0.04500;0.00571;-0.00488;,
 0.04500;-0.00429;-0.00488;,
 0.04500;-0.00429;0.00512;,
 -0.05000;0.05000;-0.05000;,
 0.05000;0.05000;-0.05000;,
 0.05000;-0.05000;-0.05000;,
 -0.05000;-0.05000;-0.05000;,
 -0.05000;0.05000;0.05000;,
 -0.05000;-0.05000;0.05000;,
 0.05000;-0.05000;0.05000;,
 -0.05000;0.05000;0.05000;,
 -0.05000;0.05000;-0.05000;,
 -0.05000;-0.05000;-0.05000;,
 -0.05000;-0.05000;0.05000;,
 0.05000;0.05000;0.05000;,
 0.05000;0.05000;-0.05000;,
 -0.05000;0.05000;-0.05000;,
 -0.05000;-0.05000;-0.05000;,
 0.05000;-0.05000;-0.05000;,
 0.05000;-0.05000;0.05000;,
 0.04500;-0.00429;0.00512;,
 0.04500;-0.00429;-0.00488;,
 0.04500;0.00571;-0.00488;;
 
 30;
 3;0,1,2;,
 3;1,3,2;,
 3;4,5,6;,
 3;4,6,7;,
 3;4,7,3;,
 3;3,7,2;,
 3;1,0,8;,
 3;1,8,9;,
 3;4,9,10;,
 3;4,10,5;,
 3;9,8,11;,
 3;10,9,11;,
 3;2,12,13;,
 3;2,13,0;,
 3;14,8,13;,
 3;0,13,8;,
 3;15,6,5;,
 3;15,5,14;,
 3;10,14,5;,
 3;8,14,11;,
 3;10,11,14;,
 3;15,12,7;,
 3;7,6,15;,
 3;7,12,2;,
 4;16,17,18,19;,
 4;3,20,21,22;,
 4;23,24,25,26;,
 4;23,27,28,29;,
 4;30,31,32,26;,
 4;12,33,34,35;;
 PhysicalMaterial{				
	1;	//float ns;				///< �R�͂̂΂ˌW��
	1;	//float nd;				///< �R�͂̃_���p�W��
	1;	//float fs;				///< ���C�͂̂΂ˌW��
	1;	//float fd;				///< ���C�͂̃_���p�W��
	1;	//float s;				///< �ő�Î~���C�W��//0.3
	0.5;	//float d;				///< �����C�W��//0.3
}
 
 MeshMaterialList {
  2;
  30;
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
  0;;
  Material {
   0.800000;0.800000;0.800000;1.000000;;
   5.000000;
   0.000000;0.000000;0.000000;;
   0.000000;0.000000;0.000000;;
   TextureFilename {
    "newnegi_tex3d_0.PNG";
   }
  }
  Material {
   1.000000;1.000000;1.000000;1.000000;;
   0.000000;
   0.000000;0.000000;0.000000;;
   0.000000;0.000000;0.000000;;
  }
 }
 MeshNormals {
  15;
  1.000000;0.000000;0.000000;,
  0.000000;-1.000000;-0.000000;,
  0.000000;0.000000;1.000000;,
  -0.000000;1.000000;0.000001;,
  0.000000;0.000000;-1.000000;,
  0.000000;-0.000001;1.000000;,
  0.000000;-0.000000;1.000000;,
  0.000000;-0.000000;1.000000;,
  0.000000;0.000000;1.000000;,
  0.000000;1.000000;0.000003;,
  0.000000;1.000000;0.000001;,
  0.000000;1.000000;-0.000000;,
  0.000000;1.000000;-0.000000;,
  0.000000;1.000000;0.000000;,
  -1.000000;0.000000;0.000000;;
  30;
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;0,0,0;,
  3;1,1,1;,
  3;5,6,7;,
  3;2,8,6;,
  3;7,6,8;,
  3;3,9,10;,
  3;3,10,11;,
  3;12,11,10;,
  3;8,2,2;,
  3;12,13,11;,
  3;4,4,4;,
  3;4,4,4;,
  3;1,1,1;,
  4;4,4,4,4;,
  4;2,2,2,2;,
  4;14,14,14,14;,
  4;13,13,13,13;,
  4;1,1,1,1;,
  4;0,0,0,0;;
 }
 MeshTextureCoords {
  36;
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  1.000000;0.000000;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  1.000000;0.000000;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  1.000000;1.000000;,
  1.000000;0.000000;;
 }
}
