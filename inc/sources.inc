

!IF DEFINED(_WIN32_BUILD)
UMTYPE=console
C_DEFINES=$(C_DEFINES) -D_WIN32_BUILD
!ELSE
UMTYPE=nt
!ENDIF



INCLUDES=$(ROOTDIR)\inc;\
	$(ROOTDIR)\inc\ndk;\
	$(DDK_INC_PATH);\
	$(SDK_INC_PATH)
