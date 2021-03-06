/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>

@protocol CRKRequestPerformingProtocol;
@class CATRemoteTaskOperation, NSString;

@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate> {

	id<CRKRequestPerformingProtocol> mDaemonProxy;
	CATRemoteTaskOperation* mSubscriptionOperation;
	long long _settingsUIVisible;

}

@property (assign,nonatomic) long long settingsUIVisible;              //@synthesize settingsUIVisible=_settingsUIVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(long long)settingsUIVisible;
-(void)setSettingsUIVisible:(long long)arg1 ;
-(void)endUpdating;
-(void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg1 ;
-(BOOL)isCurrentSubscriptionOperation:(id)arg1 ;
-(void)settingsUIVisibleDidChange:(BOOL)arg1 ;
-(id)initWithDaemonProxy:(id)arg1 ;
-(void)beginUpdating;
@end

