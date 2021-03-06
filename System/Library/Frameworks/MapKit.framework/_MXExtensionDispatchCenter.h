/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, _MXExtensionProvider;

@interface _MXExtensionDispatchCenter : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSHashTable* _handlers;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,__weak,readonly) _MXExtensionProvider * extensionProvider;              //@synthesize extensionProvider=_extensionProvider - In the implementation block
-(_MXExtensionProvider *)extensionProvider;
-(void)removeExtensionUpdateHandler:(id)arg1 ;
-(id)initWithExtensionProvider:(id)arg1 ;
-(void)dispatchExtensions:(id)arg1 error:(id)arg2 ;
-(id)addExtensionsUpdateHandler:(/*^block*/id)arg1 ;
@end

