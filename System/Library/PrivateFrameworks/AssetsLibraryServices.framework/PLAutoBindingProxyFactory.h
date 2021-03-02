/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLXPCProxyCreating.h>

@protocol PLXPCProxyCreating;
@class PLLazyObject, PLResult, NSURL, NSString;

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating> {

	os_unfair_lock_s _bindLock;
	PLLazyObject* _lazyBindToPhotoLibrary;
	PLResult* _cachedBindResult;
	id<PLXPCProxyCreating> _proxyFactory;
	NSURL* _photoLibraryURL;

}

@property (readonly) id<PLXPCProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
@property (copy,readonly) NSURL * photoLibraryURL;                     //@synthesize photoLibraryURL=_photoLibraryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientToServiceSandboxExtensionForURL:(id)arg1 ;
+(unsigned long long)maxBindAttemptCount;
-(id)_bindToPhotoLibrary;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(BOOL)_isResultAnInterruptionError:(id)arg1 ;
-(id)_bindToPhotoLibraryIfNecessary;
-(void)_connectionInterrupted:(id)arg1 ;
-(id)_cachedBindResult;
-(id)initWithProxyFactory:(id)arg1 photoLibraryURL:(id)arg2 ;
-(id)_attemptBindToPhotoLibrary;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id<PLXPCProxyCreating>)proxyFactory;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_blackholeProxyForProxy:(id)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(id)_lazilyBindToPhotoLibrary;
-(void)_updateCachedBindResult:(id)arg1 ;
-(BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_bindToPhotoLibraryAndCacheResult;
-(NSURL *)photoLibraryURL;
@end
