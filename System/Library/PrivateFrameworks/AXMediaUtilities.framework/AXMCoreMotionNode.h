/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCoreMotionNode : AXMSourceNode {

	unsigned long long _samplesPerSecond;
	double _lastSampleTime;

}

@property (assign,nonatomic) double lastSampleTime;                            //@synthesize lastSampleTime=_lastSampleTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplesPerSecond;              //@synthesize samplesPerSecond=_samplesPerSecond - In the implementation block
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)samplesPerSecond;
-(double)lastSampleTime;
-(void)setLastSampleTime:(double)arg1 ;
-(void)triggerWithCoreMotionManager:(id)arg1 deviceOrientation:(long long)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setSamplesPerSecond:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
