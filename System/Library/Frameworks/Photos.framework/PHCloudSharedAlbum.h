/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetCollection.h>

@class NSString, NSNumber;

@interface PHCloudSharedAlbum : PHAssetCollection {

	BOOL _owned;
	BOOL _cloudMultipleContributorsEnabled;
	short _cloudAlbumSubtype;
	NSString* _cloudOwnerFirstName;
	NSString* _cloudOwnerLastName;
	NSString* _cloudOwnerFullName;
	NSNumber* _cloudOwnerEmailKey;

}

@property (getter=isOwned,nonatomic,readonly) BOOL owned;                                                                    //@synthesize owned=_owned - In the implementation block
@property (getter=isCloudMultipleContributorsEnabled,nonatomic,readonly) BOOL cloudMultipleContributorsEnabled;              //@synthesize cloudMultipleContributorsEnabled=_cloudMultipleContributorsEnabled - In the implementation block
@property (nonatomic,readonly) short cloudAlbumSubtype;                                                                      //@synthesize cloudAlbumSubtype=_cloudAlbumSubtype - In the implementation block
@property (nonatomic,retain,readonly) NSString * cloudOwnerFirstName;                                                        //@synthesize cloudOwnerFirstName=_cloudOwnerFirstName - In the implementation block
@property (nonatomic,retain,readonly) NSString * cloudOwnerLastName;                                                         //@synthesize cloudOwnerLastName=_cloudOwnerLastName - In the implementation block
@property (nonatomic,retain,readonly) NSString * cloudOwnerFullName;                                                         //@synthesize cloudOwnerFullName=_cloudOwnerFullName - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * cloudOwnerEmailKey;                                                         //@synthesize cloudOwnerEmailKey=_cloudOwnerEmailKey - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(NSString *)cloudOwnerFullName;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(short)cloudAlbumSubtype;
-(BOOL)isCloudMultipleContributorsEnabled;
-(NSNumber *)cloudOwnerEmailKey;
-(BOOL)isOwned;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1 ;
-(id)description;
-(NSString *)cloudOwnerLastName;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)collectionHasFixedOrder;
-(NSString *)cloudOwnerFirstName;
-(Class)changeRequestClass;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
@end

