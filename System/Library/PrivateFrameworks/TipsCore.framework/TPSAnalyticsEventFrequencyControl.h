/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, NSNumber;

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent {

	NSString* _displayType;
	NSNumber* _displayCount;
	NSNumber* _notDisplayedDueToFrequencyControlCount;
	NSString* _experimentID;
	NSString* _experimentCampID;

}

@property (nonatomic,retain) NSString * displayType;                                         //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) NSNumber * displayCount;                                        //@synthesize displayCount=_displayCount - In the implementation block
@property (nonatomic,retain) NSNumber * notDisplayedDueToFrequencyControlCount;              //@synthesize notDisplayedDueToFrequencyControlCount=_notDisplayedDueToFrequencyControlCount - In the implementation block
@property (nonatomic,retain) NSString * experimentID;                                        //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * experimentCampID;                                    //@synthesize experimentCampID=_experimentCampID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayType:(NSString *)arg1 ;
-(id)eventName;
-(NSString *)experimentID;
-(NSNumber *)displayCount;
-(NSString *)experimentCampID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayType;
-(void)setExperimentCampID:(NSString *)arg1 ;
-(id)initWithDisplayType:(id)arg1 displayCount:(id)arg2 notDisplayedDueToFrequencyControlCount:(id)arg3 ;
-(void)setDisplayCount:(NSNumber *)arg1 ;
-(NSNumber *)notDisplayedDueToFrequencyControlCount;
-(void)setNotDisplayedDueToFrequencyControlCount:(NSNumber *)arg1 ;
-(void)setDataProvider:(id)arg1 ;
-(void)setExperimentID:(NSString *)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
@end
