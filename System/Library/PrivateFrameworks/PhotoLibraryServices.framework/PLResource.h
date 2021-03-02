/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PLResource <PLResourceIdentity>
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) long long unorientedWidth; 
@property (nonatomic,readonly) long long unorientedHeight; 
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) long long dataStoreSubtype; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget; 
@property (nonatomic,readonly) short remoteAvailability; 
@property (nonatomic,readonly) short remoteAvailabilityTarget; 
@property (nonatomic,readonly) int qualitySortValue; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@property (nonatomic,readonly) long long dataLength; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) short trashedState; 
@property (nonatomic,readonly) NSDate * trashedDate; 
@required
-(long long)unorientedHeight;
-(BOOL)isDerivative;
-(NSDate *)trashedDate;
-(BOOL)isPlayableVideo;
-(long long)unorientedWidth;
-(short)trashedState;
-(unsigned)recipeID;
-(int)qualitySortValue;
-(long long)dataLength;
-(id<PLCodecIdentity>)codecID;
-(float)scale;
-(id<PLResourceDataStore>)dataStore;
-(long long)orientedHeight;
-(long long)estimatedDataLength;
-(long long)dataStoreSubtype;
-(unsigned)orientation;
-(long long)orientedWidth;
-(short)localAvailabilityTarget;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(short)remoteAvailability;
-(short)localAvailability;
-(BOOL)isDefaultOrientation;
-(BOOL)isInCloud;
-(unsigned long long)cplType;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
-(short)remoteAvailabilityTarget;
-(id<PLAssetID>)assetID;

@end
