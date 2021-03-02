/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/MetalFilter.bundle/MetalFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol ImageBufferProcessor <NSObject>
@property (nonatomic,retain) NSDictionary * tuningParameters; 
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType; 
@optional
-(int)prewarmWithTuningParameters:(id)arg1;

@required
-(int)setup;
-(int)finishProcessing;
-(int)purgeResources;
-(int)process;
-(NSDictionary *)tuningParameters;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(id)arg1;
-(int)prewarm;
-(int)prepareToProcess:(unsigned)arg1;
-(int)resetState;
-(void)setTuningParameters:(id)arg1;

@end
