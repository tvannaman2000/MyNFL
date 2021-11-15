# MyNFL
NFL Challenge manager scripts ported into Delphi C++ Builder for GUI.  This is the first GUI program I've ever done and I'm learning Delphi as
I go, so expect to see weird things and I likely do things the hard way because I don't know any better.

This is inital semi-working limited version.  

C:\MyNFL is where I store all my .NFL files for loading and unloading.

It is configured to use a MySQL database that resides on my Unraid server.  DDL to create the tables is in the 
  setup -> Initialize League -> Create Tables. path.  You can scrape them out of the .cpp file.
  
  Setup -> Initilize League -> (Init League, Team Utilities, Edit Divisions, Create Tables) are the only 
  working parts of this app so far.  I figured I'd start at the ground floor and build the infrastructure first.


