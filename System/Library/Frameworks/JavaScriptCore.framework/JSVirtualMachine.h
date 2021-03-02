/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class NSMapTable;

@interface JSVirtualMachine : NSObject {

	OpaqueJSContextGroupRef m_group;
	Lock m_externalDataMutex;
	NSMapTable* m_contextCache;
	NSMapTable* m_externalObjectGraph;
	NSMapTable* m_externalRememberedSet;

}

@property (readonly) OpaqueJSContextGroupRef JSContextGroupRef; 
+(unsigned long long)setNumberOfDFGCompilerThreads:(unsigned long long)arg1 ;
+(void)setCrashOnVMCreation:(BOOL)arg1 ;
+(unsigned long long)setNumberOfFTLCompilerThreads:(unsigned long long)arg1 ;
+(id)virtualMachineWithContextGroupRef:(OpaqueJSContextGroupRef)arg1 ;
-(id)init;
-(void)addContext:(id)arg1 forGlobalContextRef:(OpaqueJSContextRef)arg2 ;
-(id)initWithContextGroupRef:(OpaqueJSContextGroupRef)arg1 ;
-(void)dealloc;
-(void)shrinkFootprintWhenIdle;
-(id)externalObjectGraph;
-(void)removeManagedReference:(id)arg1 withOwner:(id)arg2 ;
-(BOOL)isWebThreadAware;
-(void)addManagedReference:(id)arg1 withOwner:(id)arg2 ;
-(OpaqueJSContextGroupRef)JSContextGroupRef;
-(id)externalRememberedSet;
-(void)addExternalRememberedObject:(id)arg1 ;
-(Lock*)externalDataMutex;
-(BOOL)isOldExternalObject:(id)arg1 ;
-(id)contextForGlobalContextRef:(OpaqueJSContextRef)arg1 ;
@end
