/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class PHAdjustmentData, PHImageResult, PHCompositeMediaResult, NSMutableDictionary, NSNumber, NSURL;

@interface PHContentEditingInputResult : PHCompositeMediaResult {

	PHAdjustmentData* _adjustmentData;
	PHImageResult* _imageResult;
	PHCompositeMediaResult* _videoResult;
	NSMutableDictionary* _flipImageURLs;
	NSMutableDictionary* _flipVideoURLs;
	BOOL _canHandleAdjustmentData;
	NSNumber* _baseVersionNeeded;
	NSURL* _overCapturePhotoURL;
	NSURL* _overCaptureVideoURL;
	NSURL* _frontSwappingImageRenderURL;
	NSURL* _backSwappingImageRenderURL;
	NSURL* _frontSwappingVideoRenderURL;
	NSURL* _backSwappingVideoRenderURL;
	PHAdjustmentData* _originalAdjustmentData;

}

@property (assign,nonatomic) BOOL canHandleAdjustmentData;                           //@synthesize canHandleAdjustmentData=_canHandleAdjustmentData - In the implementation block
@property (nonatomic,retain) NSNumber * baseVersionNeeded;                           //@synthesize baseVersionNeeded=_baseVersionNeeded - In the implementation block
@property (nonatomic,retain) NSURL * overCapturePhotoURL;                            //@synthesize overCapturePhotoURL=_overCapturePhotoURL - In the implementation block
@property (nonatomic,retain) NSURL * overCaptureVideoURL;                            //@synthesize overCaptureVideoURL=_overCaptureVideoURL - In the implementation block
@property (nonatomic,copy) NSURL * frontSwappingImageRenderURL;                      //@synthesize frontSwappingImageRenderURL=_frontSwappingImageRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * backSwappingImageRenderURL;                       //@synthesize backSwappingImageRenderURL=_backSwappingImageRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * frontSwappingVideoRenderURL;                      //@synthesize frontSwappingVideoRenderURL=_frontSwappingVideoRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * backSwappingVideoRenderURL;                       //@synthesize backSwappingVideoRenderURL=_backSwappingVideoRenderURL - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * originalAdjustmentData;              //@synthesize originalAdjustmentData=_originalAdjustmentData - In the implementation block
-(id)error;
-(id)uniformTypeIdentifier;
-(void)mergeInfoDictionaryFromResult:(id)arg1 ;
-(void)addAdjustmentDataResult:(id)arg1 ;
-(void)clearAdjustmentData;
-(id)flipImageURLs;
-(id)flipVideoURLs;
-(void)setBaseVersionNeeded:(NSNumber *)arg1 ;
-(void)addFlipImageURL:(id)arg1 forAssetResourceType:(long long)arg2 ;
-(void)addFlipVideoURL:(id)arg1 forAssetResourceType:(long long)arg2 ;
-(id)imageData;
-(id)videoURL;
-(void)setCanHandleAdjustmentData:(BOOL)arg1 ;
-(id)exifOrientation;
-(BOOL)containsValidData;
-(id)description;
-(void)setError:(id)arg1 ;
-(CGImageRef)imageRef;
-(id)imageURL;
-(id)errorInfoKey;
-(NSURL *)overCapturePhotoURL;
-(void)setOverCapturePhotoURL:(NSURL *)arg1 ;
-(NSURL *)overCaptureVideoURL;
-(void)setOverCaptureVideoURL:(NSURL *)arg1 ;
-(NSURL *)frontSwappingImageRenderURL;
-(id)cancelledInfoKey;
-(id)inCloudInfoKey;
-(id)videoAdjustmentData;
-(id)adjustmentData;
-(BOOL)canHandleAdjustmentData;
-(NSNumber *)baseVersionNeeded;
-(id)imagePropertiesLoadIfNeeded:(BOOL)arg1 ;
-(void)setFrontSwappingImageRenderURL:(NSURL *)arg1 ;
-(NSURL *)backSwappingImageRenderURL;
-(void)setBackSwappingImageRenderURL:(NSURL *)arg1 ;
-(NSURL *)frontSwappingVideoRenderURL;
-(void)setFrontSwappingVideoRenderURL:(NSURL *)arg1 ;
-(NSURL *)backSwappingVideoRenderURL;
-(void)setBackSwappingVideoRenderURL:(NSURL *)arg1 ;
-(PHAdjustmentData *)originalAdjustmentData;
-(void)setOriginalAdjustmentData:(PHAdjustmentData *)arg1 ;
-(id)imageSandboxExtensionToken;
-(id)videoSandboxExtensionToken;
-(void)addVideoResult:(id)arg1 ;
-(void)addImageResult:(id)arg1 ;
@end

