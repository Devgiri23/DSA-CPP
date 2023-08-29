##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lecture_2
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :="D:/C++ And DSA/CompleteC++AndDSA"
ProjectPath            :="D:/C++ And DSA/CompleteC++AndDSA/Lecture_2"
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/Lecture_2
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=devgi
Date                   :=28/05/2023
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=D:/C++ And DSA/CompleteC++AndDSA/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Datatypes&Variables.cpp$(ObjectSuffix) $(IntermediateDirectory)/NamasteDuniya.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Datatypes&Variables.cpp$(ObjectSuffix): Datatypes&Variables.cpp $(IntermediateDirectory)/Datatypes&Variables.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/C++ And DSA/CompleteC++AndDSA/Lecture_2/Datatypes&Variables.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Datatypes&Variables.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Datatypes&Variables.cpp$(DependSuffix): Datatypes&Variables.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Datatypes&Variables.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Datatypes&Variables.cpp$(DependSuffix) -MM Datatypes&Variables.cpp

$(IntermediateDirectory)/Datatypes&Variables.cpp$(PreprocessSuffix): Datatypes&Variables.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Datatypes&Variables.cpp$(PreprocessSuffix) Datatypes&Variables.cpp

$(IntermediateDirectory)/NamasteDuniya.cpp$(ObjectSuffix): NamasteDuniya.cpp $(IntermediateDirectory)/NamasteDuniya.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/C++ And DSA/CompleteC++AndDSA/Lecture_2/NamasteDuniya.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NamasteDuniya.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NamasteDuniya.cpp$(DependSuffix): NamasteDuniya.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NamasteDuniya.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NamasteDuniya.cpp$(DependSuffix) -MM NamasteDuniya.cpp

$(IntermediateDirectory)/NamasteDuniya.cpp$(PreprocessSuffix): NamasteDuniya.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NamasteDuniya.cpp$(PreprocessSuffix) NamasteDuniya.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


