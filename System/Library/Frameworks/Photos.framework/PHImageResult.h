/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {

	CGImageRef _imageRef;
	BOOL _isPlaceholder;
	BOOL _degraded;
	NSNumber* _exifOrientation;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,copy) NSNumber * exifOrientation;                    //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
-(BOOL)isPlaceholder;
-(NSString *)uniformTypeIdentifier;
-(id)imageData;
-(void)dealloc;
-(BOOL)isDegraded;
-(NSNumber *)exifOrientation;
-(void)setExifOrientation:(NSNumber *)arg1 ;
-(BOOL)containsValidData;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setDegraded:(BOOL)arg1 ;
-(id)allowedInfoKeys;
-(void)setHighDynamicRangeGainMap:(CVBufferRef)arg1 orientation:(unsigned)arg2 averagePixelLuminance:(id)arg3 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(CGImageRef)imageRef;
-(void)setImageRef:(CGImageRef)arg1 ;
-(id)imageURL;
-(id)sanitizedInfoDictionary;
-(void)setImageURL:(id)arg1 ;
-(void)setImageData:(id)arg1 ;
-(long long)uiOrientation;
@end

