/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class NSMutableDictionary, NSMapTable;

@interface JSWrapperMap : NSObject {

	NSMutableDictionary* m_classMap;
	unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id> > > >* m_cachedJSWrappers;
	NSMapTable* m_cachedObjCWrappers;

}
-(id)jsWrapperForObject:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(id)objcWrapperForJSValueRef:(OpaqueJSValueRef)arg1 inContext:(id)arg2 ;
-(id)classInfoForClass:(Class)arg1 ;
-(id)initWithGlobalContextRef:(OpaqueJSContextRef)arg1 ;
@end

