/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSSet, NSData, NSDictionary, PLMemory, NSURL;

@interface PLPersistedMemoryMetadata : NSObject {

	BOOL _rejected;
	BOOL _favorite;
	BOOL _pending;
	BOOL _userCreated;
	short _category;
	short _subcategory;
	short _notificationState;
	unsigned short _featuredState;
	NSString* _uuid;
	NSString* _title;
	NSString* _subtitle;
	NSDate* _creationDate;
	NSString* _keyAssetUUID;
	NSSet* _representativeAssetUUIDs;
	NSSet* _curatedAssetUUIDs;
	NSSet* _extendedCuratedAssetUUIDs;
	NSSet* _movieCuratedAssetUUIDs;
	NSData* _movieData;
	NSDictionary* _movieAssetState;
	long long _photosGraphVersion;
	NSData* _photosGraphData;
	NSData* _assetListPredicate;
	double _score;
	long long _version;
	NSData* _blacklistedFeature;
	long long _playCount;
	long long _shareCount;
	long long _viewCount;
	long long _pendingPlayCount;
	long long _pendingShareCount;
	long long _pendingViewCount;
	PLMemory* _memory;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLMemory * memory;                                  //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                                //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,getter=isRejected,nonatomic) BOOL rejected;                    //@synthesize rejected=_rejected - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                    //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isPending,nonatomic) BOOL pending;                      //@synthesize pending=_pending - In the implementation block
@property (assign,getter=isUserCreated,nonatomic) BOOL userCreated;              //@synthesize userCreated=_userCreated - In the implementation block
@property (assign,nonatomic) short category;                                     //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) short subcategory;                                  //@synthesize subcategory=_subcategory - In the implementation block
@property (nonatomic,retain) NSString * keyAssetUUID;                            //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
@property (nonatomic,retain) NSSet * representativeAssetUUIDs;                   //@synthesize representativeAssetUUIDs=_representativeAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * curatedAssetUUIDs;                          //@synthesize curatedAssetUUIDs=_curatedAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * extendedCuratedAssetUUIDs;                  //@synthesize extendedCuratedAssetUUIDs=_extendedCuratedAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * movieCuratedAssetUUIDs;                     //@synthesize movieCuratedAssetUUIDs=_movieCuratedAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSData * movieData;                                 //@synthesize movieData=_movieData - In the implementation block
@property (nonatomic,retain) NSDictionary * movieAssetState;                     //@synthesize movieAssetState=_movieAssetState - In the implementation block
@property (assign,nonatomic) long long photosGraphVersion;                       //@synthesize photosGraphVersion=_photosGraphVersion - In the implementation block
@property (nonatomic,retain) NSData * photosGraphData;                           //@synthesize photosGraphData=_photosGraphData - In the implementation block
@property (nonatomic,retain) NSData * assetListPredicate;                        //@synthesize assetListPredicate=_assetListPredicate - In the implementation block
@property (assign,nonatomic) double score;                                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) short notificationState;                            //@synthesize notificationState=_notificationState - In the implementation block
@property (assign,nonatomic) long long version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * blacklistedFeature;                        //@synthesize blacklistedFeature=_blacklistedFeature - In the implementation block
@property (assign,nonatomic) long long playCount;                                //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) long long shareCount;                               //@synthesize shareCount=_shareCount - In the implementation block
@property (assign,nonatomic) long long viewCount;                                //@synthesize viewCount=_viewCount - In the implementation block
@property (assign,nonatomic) long long pendingPlayCount;                         //@synthesize pendingPlayCount=_pendingPlayCount - In the implementation block
@property (assign,nonatomic) long long pendingShareCount;                        //@synthesize pendingShareCount=_pendingShareCount - In the implementation block
@property (assign,nonatomic) long long pendingViewCount;                         //@synthesize pendingViewCount=_pendingViewCount - In the implementation block
@property (assign,nonatomic) unsigned short featuredState;                       //@synthesize featuredState=_featuredState - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
-(BOOL)isFavorite;
-(void)setUuid:(NSString *)arg1 ;
-(long long)playCount;
-(NSDate *)creationDate;
-(void)setFavorite:(BOOL)arg1 ;
-(PLMemory *)memory;
-(void)setPlayCount:(long long)arg1 ;
-(short)category;
-(NSString *)subtitle;
-(BOOL)isUserCreated;
-(BOOL)isRejected;
-(void)setUserCreated:(BOOL)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)init;
-(void)setPendingViewCount:(long long)arg1 ;
-(BOOL)_readMetadata;
-(BOOL)isObsolete;
-(long long)pendingShareCount;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(long long)shareCount;
-(void)setCategory:(short)arg1 ;
-(NSString *)uuid;
-(id)description;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setViewCount:(long long)arg1 ;
-(void)setMemory:(PLMemory *)arg1 ;
-(id)initWithPLMemory:(id)arg1 metadataURL:(id)arg2 ;
-(id)initWithPLMemory:(id)arg1 pathManager:(id)arg2 ;
-(void)writePersistedData;
-(id)_metadataData;
-(void)_saveMetadata;
-(NSSet *)representativeAssetUUIDs;
-(BOOL)_updateAssetsInMemory:(id)arg1 relationshipName:(id)arg2 persistedAssetUUIDs:(id)arg3 includePendingChanges:(BOOL)arg4 ;
-(void)setRepresentativeAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)curatedAssetUUIDs;
-(void)setCuratedAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)extendedCuratedAssetUUIDs;
-(void)setExtendedCuratedAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)movieCuratedAssetUUIDs;
-(void)setMovieCuratedAssetUUIDs:(NSSet *)arg1 ;
-(void)setMovieAssetState:(NSDictionary *)arg1 ;
-(void)setAssetListPredicate:(NSData *)arg1 ;
-(NSURL *)metadataURL;
-(long long)pendingPlayCount;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(void)setShareCount:(long long)arg1 ;
-(void)setPendingShareCount:(long long)arg1 ;
-(long long)version;
-(void)setPendingPlayCount:(long long)arg1 ;
-(BOOL)isPending;
-(void)setTitle:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(long long)viewCount;
-(void)setPending:(BOOL)arg1 ;
-(short)subcategory;
-(short)notificationState;
-(unsigned short)featuredState;
-(long long)photosGraphVersion;
-(NSData *)assetListPredicate;
-(NSData *)blacklistedFeature;
-(void)setRejected:(BOOL)arg1 ;
-(void)setSubcategory:(short)arg1 ;
-(void)setMovieData:(NSData *)arg1 ;
-(NSData *)photosGraphData;
-(void)setPhotosGraphData:(NSData *)arg1 ;
-(void)setPhotosGraphVersion:(long long)arg1 ;
-(void)setNotificationState:(short)arg1 ;
-(void)setFeaturedState:(unsigned short)arg1 ;
-(void)removePersistedData;
-(id)insertMemoryFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(void)setBlacklistedFeature:(NSData *)arg1 ;
-(NSDictionary *)movieAssetState;
-(NSString *)title;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(long long)pendingViewCount;
-(NSData *)movieData;
@end

