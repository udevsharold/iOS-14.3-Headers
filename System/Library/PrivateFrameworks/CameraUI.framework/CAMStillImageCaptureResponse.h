/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSDate, NSDictionary, UIImage, NSURL;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {

	BOOL _expectingPairedVideo;
	NSString* _persistenceUUID;
	NSDate* _captureDate;
	NSDictionary* _metadata;
	NSString* _burstIdentifier;
	unsigned long long _burstRepresentedCount;
	UIImage* _imageWellImage;
	long long _captureID;
	long long _semanticEnhanceScene;
	CGSize _finalExpectedPixelSize;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                                      //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long burstRepresentedCount;                             //@synthesize burstRepresentedCount=_burstRepresentedCount - In the implementation block
@property (nonatomic,readonly) UIImage * imageWellImage;                                             //@synthesize imageWellImage=_imageWellImage - In the implementation block
@property (nonatomic,readonly) BOOL flashFired; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo;              //@synthesize expectingPairedVideo=_expectingPairedVideo - In the implementation block
@property (nonatomic,readonly) CGSize finalExpectedPixelSize;                                        //@synthesize finalExpectedPixelSize=_finalExpectedPixelSize - In the implementation block
@property (nonatomic,readonly) long long captureID;                                                  //@synthesize captureID=_captureID - In the implementation block
@property (nonatomic,readonly) long long semanticEnhanceScene;                                       //@synthesize semanticEnhanceScene=_semanticEnhanceScene - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) SCD_Struct_CA7 duration; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA7 irisStillDisplayTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)placeholderImage;
-(long long)captureID;
-(unsigned long long)numberOfRepresentedAssets;
-(unsigned long long)mediaType;
-(NSDictionary *)metadata;
-(NSURL *)persistenceURL;
-(NSString *)irisStillImageUUID;
-(UIImage *)imageWellImage;
-(long long)semanticEnhanceScene;
-(NSString *)persistenceUUID;
-(BOOL)isExpectingPairedVideo;
-(NSDate *)captureDate;
-(NSString *)uuid;
-(NSString *)description;
-(NSString *)burstIdentifier;
-(NSDictionary *)stillImageMetadata;
-(unsigned long long)burstRepresentedCount;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 coordinationInfo:(id)arg8 finalExpectedPixelSize:(CGSize)arg9 expectingPairedVideo:(BOOL)arg10 captureID:(long long)arg11 semanticEnhanceScene:(long long)arg12 ;
-(CGSize)finalExpectedPixelSize;
-(unsigned long long)mediaSubtypes;
-(SCD_Struct_CA7)duration;
-(BOOL)flashFired;
-(SCD_Struct_CA7)irisStillDisplayTime;
-(NSURL *)irisVideoPersistenceURL;
@end
