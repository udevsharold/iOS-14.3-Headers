/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFMediaProfileContainer;
@class MTAlarm, NSString, HMMediaProfile;

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	MTAlarm* _alarm;
	NSString* _alarmIdentifier;

}

@property (nonatomic,copy) NSString * alarmIdentifier;                                         //@synthesize alarmIdentifier=_alarmIdentifier - In the implementation block
@property (nonatomic,copy) MTAlarm * alarm;                                                    //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HMMediaProfile * mediaProfile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(long long)compare:(id)arg1 ;
-(NSString *)alarmIdentifier;
-(MTAlarm *)alarm;
-(unsigned long long)hash;
-(void)setAlarm:(MTAlarm *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(HMMediaProfile *)mediaProfile;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setAlarmIdentifier:(NSString *)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end
