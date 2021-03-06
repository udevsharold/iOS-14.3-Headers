/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLLocationUtils : NSObject
+(CLLocationCoordinate2D)defaultLocationCoordinate2D;
+(id)predicateForMomentWithLocation;
+(PLCartesianCoordinate3D)cartesianCoordinateFromLatitude:(float)arg1 longitude:(float)arg2 ;
+(BOOL)horizontalAccuracyIsCoarse:(double)arg1 ;
+(BOOL)canUseCoordinate:(CLLocationCoordinate2D)arg1 ;
+(BOOL)locationIsCoarse:(id)arg1 ;
+(id)predicateForAssetWithLocation;
@end

