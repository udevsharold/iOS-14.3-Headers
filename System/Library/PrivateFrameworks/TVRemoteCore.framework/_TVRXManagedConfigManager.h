/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface _TVRXManagedConfigManager : NSObject <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)refreshState;
-(BOOL)managedConfigProfileInstalled;
@end

