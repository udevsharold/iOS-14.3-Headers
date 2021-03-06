/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@interface JSScript : NSObject {

	WeakObjCPtr<JSVirtualMachine> m_virtualMachine;
	long long m_type;
	MappedFileData* m_mappedSource;
	String* m_source;
	RetainPtr<NSURL>* m_sourceURL;
	RetainPtr<NSURL>* m_cachePath;
	RefPtr<JSC::CachedBytecode, WTF::DumbPtrTraits<JSC::CachedBytecode> >* m_cachedBytecode;

}
+(id)scriptOfType:(long long)arg1 memoryMappedFromASCIIFile:(id)arg2 withSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id*)arg6 ;
+(id)scriptOfType:(long long)arg1 withSource:(id)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id*)arg6 ;
-(id)sourceURL;
-(BOOL)isUsingBytecodeCache;
-(id)init;
-(BOOL)writeCache:(String*)arg1 ;
-(RefPtr<JSC::CachedBytecode, WTF::DumbPtrTraits<JSC::CachedBytecode> >*)cachedBytecode;
-(SourceCode*)sourceCode;
-(void)readCache;
-(unsigned)hash;
-(long long)type;
-(JSSourceCode*)jsSourceCode;
-(const String*)source;
-(BOOL)cacheBytecodeWithError:(id*)arg1 ;
@end

