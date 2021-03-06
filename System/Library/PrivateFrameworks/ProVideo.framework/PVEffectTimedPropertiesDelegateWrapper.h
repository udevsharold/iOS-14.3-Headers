/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVEffectTimedPropertiesDelegate;
@class NSArray, NSDictionary;

@interface PVEffectTimedPropertiesDelegateWrapper : NSObject {

	BOOL _wantsStartStopNotifications;
	id<PVEffectTimedPropertiesDelegate> _timedPropertiesDelegate;
	NSArray* _supportedTimedPropertyGroups;
	NSDictionary* _userContext;

}

@property (assign,nonatomic,__weak) id<PVEffectTimedPropertiesDelegate> timedPropertiesDelegate;              //@synthesize timedPropertiesDelegate=_timedPropertiesDelegate - In the implementation block
@property (nonatomic,retain) NSArray * supportedTimedPropertyGroups;                                          //@synthesize supportedTimedPropertyGroups=_supportedTimedPropertyGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * userContext;                                                      //@synthesize userContext=_userContext - In the implementation block
@property (assign,nonatomic) BOOL wantsStartStopNotifications;                                                //@synthesize wantsStartStopNotifications=_wantsStartStopNotifications - In the implementation block
-(NSDictionary *)userContext;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimedPropertiesDelegate:(id<PVEffectTimedPropertiesDelegate>)arg1 ;
-(void)setSupportedTimedPropertyGroups:(NSArray *)arg1 ;
-(void)setWantsStartStopNotifications:(BOOL)arg1 ;
-(id<PVEffectTimedPropertiesDelegate>)timedPropertiesDelegate;
-(id)initWithTimedPropertiesDelegate:(id)arg1 supportedTimedPropertyGroups:(id)arg2 userContext:(id)arg3 ;
-(NSArray *)supportedTimedPropertyGroups;
-(BOOL)wantsStartStopNotifications;
@end

