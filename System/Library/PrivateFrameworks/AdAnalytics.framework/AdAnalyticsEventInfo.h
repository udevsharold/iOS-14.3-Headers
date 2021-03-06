/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdAnalytics.framework/AdAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdAnalytics/AdAnalytics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AdAnalyticsEventInfo : NSObject <NSSecureCoding, NSCopying> {

	float _volume;
	NSString* _bundleID;
	NSString* _adID;
	long long _videoState;
	double _currentPlaybackTime;
	double _totalDuration;
	double _visiblePercentage;
	double _timestamp;
	long long _sequenceNumber;

}

@property (nonatomic,copy) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * adID;                           //@synthesize adID=_adID - In the implementation block
@property (assign,nonatomic) long long videoState;                    //@synthesize videoState=_videoState - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime;              //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) double totalDuration;                    //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (assign,nonatomic) float volume;                            //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setSequenceNumber:(long long)arg1 ;
-(long long)sequenceNumber;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)timestamp;
-(id)init;
-(NSString *)adID;
-(void)setTotalDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)totalDuration;
-(double)currentPlaybackTime;
-(void)setAdID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(void)setVideoState:(long long)arg1 ;
-(long long)videoState;
@end

