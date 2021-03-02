/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class CUHomeKitManager, NSData, NSMutableSet, NSXPCListener, NSObject, NSXPCListenerEndpoint, NSString;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {

	CUHomeKitManager* _homeKitManager;
	int _rpIdentityNotifier;
	NSData* _rpSelfIRK;
	unsigned long long _stateHandle;
	NSMutableSet* _xpcConnections;
	NSXPCListener* _xpcListener;
	BOOL _testMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                  //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * testListenerEndpoint; 
@property (assign,nonatomic) BOOL testMode;                                               //@synthesize testMode=_testMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPairingDaemon;
-(void)setTestMode:(BOOL)arg1 ;
-(void)_activate;
-(BOOL)testMode;
-(int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(void)activate;
-(void)_removeDups:(id)arg1 ;
-(id)init;
-(int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)detailedDescription;
-(void)reset;
-(void)dealloc;
-(int)deleteIdentityWithOptions:(unsigned long long)arg1 ;
-(void)_rpIdentityUpdate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(NSString *)description;
-(int)_deleteIdentityWithOptions:(unsigned long long)arg1 ;
-(int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2 ;
-(id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(void)invalidate;
-(id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
@end
