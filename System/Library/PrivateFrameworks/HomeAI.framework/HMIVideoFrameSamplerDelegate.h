/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMIVideoFrameSamplerDelegate <NSObject>
@optional
-(void)frameSampler:(id)arg1 didDropFrame:(opaqueCMSampleBufferRef)arg2;

@required
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2;

@end

