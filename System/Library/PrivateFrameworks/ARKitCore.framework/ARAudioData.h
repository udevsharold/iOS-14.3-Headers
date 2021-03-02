/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARSensorData.h>

@class NSString;

@interface ARAudioData : NSObject <ARSensorData> {

	double _timestamp;
	opaqueCMSampleBufferRef _sampleBuffer;

}

@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)dealloc;
-(void)setTimestamp:(double)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end
