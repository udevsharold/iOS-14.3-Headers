/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsSignificantTimeEventData : HMFObject {

	BOOL _offsetPresent;
	NSString* _significantEvent;

}

@property (nonatomic,copy) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign) BOOL offsetPresent;                               //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(void)setSignificantEvent:(NSString *)arg1 ;
-(NSString *)significantEvent;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(BOOL)offsetPresent;
@end

