/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAWDMetricData.h>

@class NSString;

@interface SBAppBrightnessMetricData : SBAWDMetricData {

	NSString* _appBundleID;
	unsigned long long _brightness;
	unsigned long long _duration;

}

@property (nonatomic,copy) NSString * appBundleID;                       //@synthesize appBundleID=_appBundleID - In the implementation block
@property (assign,nonatomic) unsigned long long brightness;              //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)brightness;
-(void)setAppBundleID:(NSString *)arg1 ;
-(unsigned long long)duration;
-(NSString *)appBundleID;
-(void)setBrightness:(unsigned long long)arg1 ;
@end

