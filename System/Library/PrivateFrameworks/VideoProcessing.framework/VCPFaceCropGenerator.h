/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFaceCropGenerator : NSObject
+(id)_faceCropDataForImage:(id)arg1 andNormalizedFaceRect:(CGRect)arg2 error:(id*)arg3 ;
+(id)_generateFaceCropWithDescriptor:(id)arg1 andCancelBlock:(id)arg2 error:(id*)arg3 ;
+(void)_reportCancellationOfRemainingFaceCropSourceDescriptors:(id)arg1 withStartingIndex:(unsigned long long)arg2 andFailureBlock:(/*^block*/id)arg3 ;
+(id)generateFaceCropsFromSourceDescriptors:(id)arg1 withProgressBlock:(/*^block*/id)arg2 andFailureBlock:(/*^block*/id)arg3 andCancelBlock:(id)arg4 ;
@end
