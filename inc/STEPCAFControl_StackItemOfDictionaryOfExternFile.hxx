// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_StackItemOfDictionaryOfExternFile_HeaderFile
#define _STEPCAFControl_StackItemOfDictionaryOfExternFile_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile.hxx>

#include <Handle_STEPCAFControl_DictionaryOfExternFile.hxx>
#include <Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_STEPCAFControl_ExternFile.hxx>
class STEPCAFControl_DictionaryOfExternFile;
class STEPCAFControl_ExternFile;
class STEPCAFControl_IteratorOfDictionaryOfExternFile;



class STEPCAFControl_StackItemOfDictionaryOfExternFile : public MMgt_TShared
{

public:

  
  Standard_EXPORT STEPCAFControl_StackItemOfDictionaryOfExternFile();
  
  Standard_EXPORT STEPCAFControl_StackItemOfDictionaryOfExternFile(const Handle(STEPCAFControl_StackItemOfDictionaryOfExternFile)& previous);
  
  Standard_EXPORT   Handle(STEPCAFControl_StackItemOfDictionaryOfExternFile) Previous()  const;
  
  Standard_EXPORT   Handle(STEPCAFControl_DictionaryOfExternFile) Value()  const;
  
  Standard_EXPORT   void SetValue (const Handle(STEPCAFControl_DictionaryOfExternFile)& cval) ;




  DEFINE_STANDARD_RTTI(STEPCAFControl_StackItemOfDictionaryOfExternFile)

protected:




private: 


  Handle(STEPCAFControl_DictionaryOfExternFile) thevalue;
  Handle(STEPCAFControl_StackItemOfDictionaryOfExternFile) theprev;


};







#endif // _STEPCAFControl_StackItemOfDictionaryOfExternFile_HeaderFile
