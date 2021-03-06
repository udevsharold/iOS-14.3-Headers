/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetWriterInputMetadataAdaptorInternal, AVAssetWriterInput;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {

	AVAssetWriterInputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
+(void)initialize;
+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(AVAssetWriterInput *)assetWriterInput;
-(BOOL)appendTimedMetadataGroup:(id)arg1 ;
-(id)description;
@end

