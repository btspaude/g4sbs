#ifndef __GITINFO_HH
#define __GITINFO_HH

/*
    Generated automatically by cmake process
    Encoding:
-------------------------------------------------------------
commit ee20d818c9c1a6f6dc3f08a608c37775db3eabf0
Merge: 9ebc2f6 319bebc
Author: ajpuckett <puckett@jlab.org>
Date:   Mon Feb 20 10:30:36 2017 -0500

    modified PYTHIA6 event generation macro for more user flexibility to define beam, target particles, Q2 and W2 ranges
## pbf2
 M CMakeLists.txt
 M g4sbs.cc
 M include/G4SBSDetectorConstruction.hh
 M include/G4SBSMessenger.hh
 M rootlogon.C
 M src/G4SBSDetectorConstruction.cc
 M src/G4SBSHArmBuilder.cc
 M src/G4SBSMessenger.cc
 M src/G4SBSTargetBuilder.cc
 M vis.mac
?? #CMakeLists.txt#
?? CMakeCache.txt
?? CMakeFiles/
?? HLO.GRID
?? HNLO.GRID
?? KALO.GRID
?? KNLO.GRID
?? Makefile
?? PILO.GRID
?? PLO.GRID
?? PNLO.GRID
?? PROLO.GRID
?? build/
?? cmake_install.cmake
?? data/
?? include/ArrayHit.hh
?? include/ArraySD.hh
?? include/BonusBField.hh
?? include/DIS.hh
?? include/DetectorConstruction.hh
?? include/DetectorMessenger.hh
?? include/ESSNRunAction.hh
?? include/EmPhysics.hh
?? include/EventAction.hh
?? include/EventActionMessenger.hh
?? include/Field3D.hh
?? include/G4CalDetectorConstruction.hh
?? include/G4RTPC.hh
?? include/PhysicsList.hh
?? include/PhysicsListMessenger.hh
?? include/PrimaryGeneratorAction.hh
?? include/PrimaryGeneratorMessenger.hh
?? include/RTPC.hh
?? include/RootIO.hh
?? include/RunAction.hh
?? include/SteppingAction.hh
?? include/SteppingMessenger.hh
?? include/SteppingVerbose.hh
?? include/TOSCAField2D.hh
?? include/TOSCAField3D.hh
?? src/ArrayHit.cc
?? src/ArraySD.cc
?? src/BonusBField.cc
?? src/DetectorConstruction.cc
?? src/DetectorMessenger.cc
?? src/EmPhysics.cc
?? src/EventAction.cc
?? src/EventActionMessenger.cc
?? src/Field3D.cc
?? src/G4CalDetectorConstruction.cc
?? src/G4RTPC.cc
?? src/PhysicsList.cc
?? src/PhysicsListMessenger.cc
?? src/PrimaryGeneratorAction.cc
?? src/PrimaryGeneratorMessenger.cc
?? src/RTPC.cc
?? src/RunAction.cc
?? src/SteppingAction.cc
?? src/SteppingMessenger.cc
?? src/SteppingVerbose.cc
?? src/TOSCAField2D.cc
?? src/TOSCAField3D.cc
?? src/cteq-database.cc
?? src/cteqpdf.cc

Geant4 version 10.3.1
  ROOT ver
-------------------------------------------------------------
*/

#define __GITMAXINFO_SIZE 2048

#define gGitInfoStr "\x63\x6f\x6d\x6d\x69\x74\x20\x65\x65\x32\x30\x64\x38\x31\x38\x63\x39\x63\x31\x61\x36\x66\x36\x64\x63\x33\x66\x30\x38\x61\x36\x30\x38\x63\x33\x37\x37\x37\x35\x64\x62\x33\x65\x61\x62\x66\x30\x0a\x4d\x65\x72\x67\x65\x3a\x20\x39\x65\x62\x63\x32\x66\x36\x20\x33\x31\x39\x62\x65\x62\x63\x0a\x41\x75\x74\x68\x6f\x72\x3a\x20\x61\x6a\x70\x75\x63\x6b\x65\x74\x74\x20\x3c\x70\x75\x63\x6b\x65\x74\x74\x40\x6a\x6c\x61\x62\x2e\x6f\x72\x67\x3e\x0a\x44\x61\x74\x65\x3a\x20\x20\x20\x4d\x6f\x6e\x20\x46\x65\x62\x20\x32\x30\x20\x31\x30\x3a\x33\x30\x3a\x33\x36\x20\x32\x30\x31\x37\x20\x2d\x30\x35\x30\x30\x0a\x0a\x20\x20\x20\x20\x6d\x6f\x64\x69\x66\x69\x65\x64\x20\x50\x59\x54\x48\x49\x41\x36\x20\x65\x76\x65\x6e\x74\x20\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x20\x6d\x61\x63\x72\x6f\x20\x66\x6f\x72\x20\x6d\x6f\x72\x65\x20\x75\x73\x65\x72\x20\x66\x6c\x65\x78\x69\x62\x69\x6c\x69\x74\x79\x20\x74\x6f\x20\x64\x65\x66\x69\x6e\x65\x20\x62\x65\x61\x6d\x2c\x20\x74\x61\x72\x67\x65\x74\x20\x70\x61\x72\x74\x69\x63\x6c\x65\x73\x2c\x20\x51\x32\x20\x61\x6e\x64\x20\x57\x32\x20\x72\x61\x6e\x67\x65\x73\x0a\x23\x23\x20\x70\x62\x66\x32\x0a\x20\x4d\x20\x43\x4d\x61\x6b\x65\x4c\x69\x73\x74\x73\x2e\x74\x78\x74\x0a\x20\x4d\x20\x67\x34\x73\x62\x73\x2e\x63\x63\x0a\x20\x4d\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x47\x34\x53\x42\x53\x44\x65\x74\x65\x63\x74\x6f\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x20\x4d\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x47\x34\x53\x42\x53\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x68\x68\x0a\x20\x4d\x20\x72\x6f\x6f\x74\x6c\x6f\x67\x6f\x6e\x2e\x43\x0a\x20\x4d\x20\x73\x72\x63\x2f\x47\x34\x53\x42\x53\x44\x65\x74\x65\x63\x74\x6f\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2e\x63\x63\x0a\x20\x4d\x20\x73\x72\x63\x2f\x47\x34\x53\x42\x53\x48\x41\x72\x6d\x42\x75\x69\x6c\x64\x65\x72\x2e\x63\x63\x0a\x20\x4d\x20\x73\x72\x63\x2f\x47\x34\x53\x42\x53\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x63\x63\x0a\x20\x4d\x20\x73\x72\x63\x2f\x47\x34\x53\x42\x53\x54\x61\x72\x67\x65\x74\x42\x75\x69\x6c\x64\x65\x72\x2e\x63\x63\x0a\x20\x4d\x20\x76\x69\x73\x2e\x6d\x61\x63\x0a\x3f\x3f\x20\x23\x43\x4d\x61\x6b\x65\x4c\x69\x73\x74\x73\x2e\x74\x78\x74\x23\x0a\x3f\x3f\x20\x43\x4d\x61\x6b\x65\x43\x61\x63\x68\x65\x2e\x74\x78\x74\x0a\x3f\x3f\x20\x43\x4d\x61\x6b\x65\x46\x69\x6c\x65\x73\x2f\x0a\x3f\x3f\x20\x48\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x48\x4e\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x4b\x41\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x4b\x4e\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x4d\x61\x6b\x65\x66\x69\x6c\x65\x0a\x3f\x3f\x20\x50\x49\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x50\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x50\x4e\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x50\x52\x4f\x4c\x4f\x2e\x47\x52\x49\x44\x0a\x3f\x3f\x20\x62\x75\x69\x6c\x64\x2f\x0a\x3f\x3f\x20\x63\x6d\x61\x6b\x65\x5f\x69\x6e\x73\x74\x61\x6c\x6c\x2e\x63\x6d\x61\x6b\x65\x0a\x3f\x3f\x20\x64\x61\x74\x61\x2f\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x41\x72\x72\x61\x79\x48\x69\x74\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x41\x72\x72\x61\x79\x53\x44\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x42\x6f\x6e\x75\x73\x42\x46\x69\x65\x6c\x64\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x44\x49\x53\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x44\x65\x74\x65\x63\x74\x6f\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x44\x65\x74\x65\x63\x74\x6f\x72\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x45\x53\x53\x4e\x52\x75\x6e\x41\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x45\x6d\x50\x68\x79\x73\x69\x63\x73\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x45\x76\x65\x6e\x74\x41\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x45\x76\x65\x6e\x74\x41\x63\x74\x69\x6f\x6e\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x46\x69\x65\x6c\x64\x33\x44\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x47\x34\x43\x61\x6c\x44\x65\x74\x65\x63\x74\x6f\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x47\x34\x52\x54\x50\x43\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x50\x68\x79\x73\x69\x63\x73\x4c\x69\x73\x74\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x50\x68\x79\x73\x69\x63\x73\x4c\x69\x73\x74\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x50\x72\x69\x6d\x61\x72\x79\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x41\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x50\x72\x69\x6d\x61\x72\x79\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x52\x54\x50\x43\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x52\x6f\x6f\x74\x49\x4f\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x52\x75\x6e\x41\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x53\x74\x65\x70\x70\x69\x6e\x67\x41\x63\x74\x69\x6f\x6e\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x53\x74\x65\x70\x70\x69\x6e\x67\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x53\x74\x65\x70\x70\x69\x6e\x67\x56\x65\x72\x62\x6f\x73\x65\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x54\x4f\x53\x43\x41\x46\x69\x65\x6c\x64\x32\x44\x2e\x68\x68\x0a\x3f\x3f\x20\x69\x6e\x63\x6c\x75\x64\x65\x2f\x54\x4f\x53\x43\x41\x46\x69\x65\x6c\x64\x33\x44\x2e\x68\x68\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x41\x72\x72\x61\x79\x48\x69\x74\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x41\x72\x72\x61\x79\x53\x44\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x42\x6f\x6e\x75\x73\x42\x46\x69\x65\x6c\x64\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x44\x65\x74\x65\x63\x74\x6f\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x44\x65\x74\x65\x63\x74\x6f\x72\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x45\x6d\x50\x68\x79\x73\x69\x63\x73\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x45\x76\x65\x6e\x74\x41\x63\x74\x69\x6f\x6e\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x45\x76\x65\x6e\x74\x41\x63\x74\x69\x6f\x6e\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x46\x69\x65\x6c\x64\x33\x44\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x47\x34\x43\x61\x6c\x44\x65\x74\x65\x63\x74\x6f\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x47\x34\x52\x54\x50\x43\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x50\x68\x79\x73\x69\x63\x73\x4c\x69\x73\x74\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x50\x68\x79\x73\x69\x63\x73\x4c\x69\x73\x74\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x50\x72\x69\x6d\x61\x72\x79\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x41\x63\x74\x69\x6f\x6e\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x50\x72\x69\x6d\x61\x72\x79\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x52\x54\x50\x43\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x52\x75\x6e\x41\x63\x74\x69\x6f\x6e\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x53\x74\x65\x70\x70\x69\x6e\x67\x41\x63\x74\x69\x6f\x6e\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x53\x74\x65\x70\x70\x69\x6e\x67\x4d\x65\x73\x73\x65\x6e\x67\x65\x72\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x53\x74\x65\x70\x70\x69\x6e\x67\x56\x65\x72\x62\x6f\x73\x65\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x54\x4f\x53\x43\x41\x46\x69\x65\x6c\x64\x32\x44\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x54\x4f\x53\x43\x41\x46\x69\x65\x6c\x64\x33\x44\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x63\x74\x65\x71\x2d\x64\x61\x74\x61\x62\x61\x73\x65\x2e\x63\x63\x0a\x3f\x3f\x20\x73\x72\x63\x2f\x63\x74\x65\x71\x70\x64\x66\x2e\x63\x63\x0a\x0a\x47\x65\x61\x6e\x74\x34\x20\x76\x65\x72\x73\x69\x6f\x6e\x20\x31\x30\x2e\x33\x2e\x31\x0a\x20\x20\x52\x4f\x4f\x54\x20\x76\x65\x72"

#endif//__GITINFO_HH
