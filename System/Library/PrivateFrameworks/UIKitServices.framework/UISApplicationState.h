/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UISApplicationStateClient, NSDate;

@interface UISApplicationState : NSObject {

	NSString* _bundleIdentifier;
	UISApplicationStateClient* _client;

}

@property (assign,setter=_setUsesBackgroundNetwork:,nonatomic) BOOL _usesBackgroundNetwork; 
@property (assign,setter=_setNextWakeDate:,nonatomic) NSDate * _nextWakeDate; 
@property (nonatomic,copy) id badgeValue; 
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)badgeValue;
-(void)setBadgeValue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_setUsesBackgroundNetwork:(BOOL)arg1 ;
-(NSDate *)_nextWakeDate;
-(void)_setNextWakeDate:(id)arg1 ;
-(id)initForCurrentApplication;
-(void)_setMinimumBackgroundFetchInterval:(double)arg1 ;
-(BOOL)_usesBackgroundNetwork;
@end
