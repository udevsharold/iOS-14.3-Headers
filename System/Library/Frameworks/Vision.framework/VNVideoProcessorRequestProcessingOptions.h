/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNVideoProcessorCadence;

@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying> {

	VNVideoProcessorCadence* _cadence;

}

@property (copy) VNVideoProcessorCadence * cadence;              //@synthesize cadence=_cadence - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(VNVideoProcessorCadence *)cadence;
-(id)_createVCPVideoProcessorRequestConfiguration;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCadence:(VNVideoProcessorCadence *)arg1 ;
@end

