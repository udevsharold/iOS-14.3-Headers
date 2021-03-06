/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol AVVideoCompositing <NSObject>
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
@optional
-(void)cancelAllPendingVideoCompositionRequests;
-(void)anticipateRenderingUsingHint:(id)arg1;
-(void)prerollForRenderingUsingHint:(id)arg1;
-(BOOL)supportsWideColorSourceFrames;
-(BOOL)supportsHDRSourceFrames;

@required
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)startVideoCompositionRequest:(id)arg1;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)renderContextChanged:(id)arg1;

@end

