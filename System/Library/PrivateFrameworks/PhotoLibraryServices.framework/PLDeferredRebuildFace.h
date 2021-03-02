/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLFaceRebuildDescription.h>

@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>

@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isManual,nonatomic,readonly) BOOL manual; 
@property (getter=isRepresentative,nonatomic,readonly) BOOL representative; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) int nameSource; 
@property (nonatomic,readonly) int cloudNameSource; 
@property (getter=isClusterRejected,nonatomic,readonly) BOOL clusterRejected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * faceUUID; 
@property (nonatomic,copy) NSString * assetCloudGUID; 
@property (nonatomic,copy) NSString * assetUUID; 
@property (nonatomic,copy) NSString * personUUID; 
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL representative; 
@property (assign,nonatomic) BOOL rejected; 
@property (assign,nonatomic) BOOL clusterRejected; 
@property (assign,nonatomic) int nameSource; 
@property (assign,nonatomic) int cloudNameSource; 
@property (assign,nonatomic) int faceAlgorithmVersion; 
+(id)entityName;
+(id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadID;
-(BOOL)isManual;
-(BOOL)isRepresentative;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;
-(BOOL)isClusterRejected;
-(BOOL)isHidden;
@end
