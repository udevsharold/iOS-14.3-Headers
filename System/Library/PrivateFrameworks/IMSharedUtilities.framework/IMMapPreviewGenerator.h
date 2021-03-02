/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMContactCardPreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 interfaceStyle:(long long)arg3 error:(id*)arg4 ;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)writesToDisk;
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)supportsBlastDoor;
+(CLLocationCoordinate2D)coordinateForvCardURL:(id)arg1 ;
+(id)mapSnapshotterQueue;
+(id)titleBarMaskImageForWidth:(double)arg1 constraints:(IMPreviewConstraints)arg2 ;
+(id)UTITypes;
+(CLLocationCoordinate2D)_legacyCoordinateForvCardURL:(id)arg1 ;
+(id)vCardDataForURL:(id)arg1 ;
+(id)vCardURLSForData:(id)arg1 ;
+(id)valueForKey:(id)arg1 forURLComponents:(id)arg2 ;
+(CGSize)mapThumbnailFillSizeForWidth:(double)arg1 ;
@end
