/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
#import <IMTranscoderAgent/IMTranscoderImageSizeEstimator.h>

@interface IMTranscoderImageFigPhotoSizeEstimator : IMTranscoderImageSizeEstimator {

	FigPhotoDecompressionContainerRef _container;

}
-(void)dealloc;
-(unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3 ;
-(id)initWithURL:(id)arg1 uti:(id)arg2 imageSource:(CGImageSourceRef)arg3 ;
-(unsigned long long)optimizedEstimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3 ;
@end
