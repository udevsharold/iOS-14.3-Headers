/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUMutableCallDisplayContext.h>

@protocol TUDynamicCallDisplayContextDelegate, OS_dispatch_queue;
@class NSObject, CXCallDirectoryManager;

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext {

	id<TUDynamicCallDisplayContextDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CXCallDirectoryManager* _callDirectoryManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                             //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) CXCallDirectoryManager * callDirectoryManager;                        //@synthesize callDirectoryManager=_callDirectoryManager - In the implementation block
@property (assign,nonatomic,__weak) id<TUDynamicCallDisplayContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CXCallDirectoryManager *)callDirectoryManager;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)init;
-(id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 ;
-(id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 contactsDataSource:(id)arg4 ;
-(void)_initializeSynchronousStateWithCall:(id)arg1 contactIdentifier:(id)arg2 contactsDataProvider:(id)arg3 ;
-(void)_initializeAsynchronousStateWithCall:(id)arg1 ;
-(void)setCallDirectoryManager:(CXCallDirectoryManager *)arg1 ;
-(id)initWithDisplayContext:(id)arg1 call:(id)arg2 serialQueue:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDelegate:(id<TUDynamicCallDisplayContextDelegate>)arg1 ;
-(id<TUDynamicCallDisplayContextDelegate>)delegate;
@end

