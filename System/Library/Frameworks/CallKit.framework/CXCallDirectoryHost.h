/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallDirectoryManagerDefaultHostProtocol.h>
#import <libobjc.A.dylib/CXCallDirectoryManagerMaintenanceHostProtocol.h>

@protocol OS_dispatch_queue, CXCallDirectoryHostDelegate;
@class NSObject, NSString;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallDirectoryHostDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(oneway void)launchCallDirectorySettingsWithReply:(/*^block*/id)arg1 ;
-(oneway void)compactStoreWithReply:(/*^block*/id)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)getExtensionsWithReply:(/*^block*/id)arg1 ;
-(BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1 ;
-(void)_nsExtensionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<CXCallDirectoryHostDelegate>)arg1 ;
-(oneway void)synchronizeExtensionsWithReply:(/*^block*/id)arg1 ;
-(oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)prepareStoreIfNecessary;
-(id<CXCallDirectoryHostDelegate>)delegate;
@end

