/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset,NSObject>
@required
-(CGSize*)imageSize;
-(BOOL)isRAW;
-(id)uniformTypeIdentifier;
-(BOOL)isJPEG;
-(id)thumbnailIdentifier;
-(int)orientation;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isVideo;
-(id)uuid;
-(id)originalFilename;
-(CGSize*)originalImageSize;
-(BOOL)isInFlight;
-(id)debugFilename;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(short)savedAssetType;
-(short)kindSubtype;
-(BOOL)isLoopingVideo;
-(BOOL)isPartOfBurst;
-(BOOL)isStreamedVideo;
-(id)pathForOriginalFile;
-(id)pathForAdjustmentFile;
-(id)pathForAdjustmentDataFile;
-(BOOL)isCloudSharedAsset;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(BOOL)isCloudPlaceholder;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isTimelapsePlaceholder;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isOriginalSRGB;
-(unsigned long long)localResourcesState;
-(BOOL)hasAdjustments;
-(double)aspectRatio;
-(double)duration;
-(short)kind;

@end
