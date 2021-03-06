/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSMutableOrderedSet, PLManagedFolder, NSURL;

@interface PLPersistedFolderMetadata : NSObject {

	BOOL _pinned;
	BOOL _prototype;
	BOOL _inTrash;
	BOOL _customSortAscending;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSMutableOrderedSet* _childUUIDs;
	NSString* _remappedUUID;
	PLManagedFolder* _folder;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLManagedFolder * folder;                       //@synthesize folder=_folder - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                            //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                           //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                                //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                    //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isPrototype,nonatomic) BOOL prototype;              //@synthesize prototype=_prototype - In the implementation block
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash;                  //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL customSortAscending;                       //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                              //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * childUUIDs;               //@synthesize childUUIDs=_childUUIDs - In the implementation block
@property (nonatomic,retain,readonly) NSString * remappedUUID;               //@synthesize remappedUUID=_remappedUUID - In the implementation block
@property (nonatomic,readonly) BOOL isRootFolder; 
@property (nonatomic,readonly) BOOL isProjectAlbumRootFolder; 
+(void)updateChildrenOrderingInFolder:(id)arg1 usingChildUUIDs:(id)arg2 sourceDescription:(id)arg3 includePendingChanges:(BOOL)arg4 ;
+(BOOL)isValidPath:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)init;
-(void)setFolder:(PLManagedFolder *)arg1 ;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)isPrototype;
-(BOOL)_readMetadata;
-(void)setCloudGUID:(NSString *)arg1 ;
-(PLManagedFolder *)folder;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(NSString *)uuid;
-(id)description;
-(BOOL)isPinned;
-(void)writePersistedData;
-(void)_saveMetadata;
-(NSURL *)metadataURL;
-(NSString *)cloudGUID;
-(void)setKind:(NSNumber *)arg1 ;
-(void)setPrototype:(BOOL)arg1 ;
-(id)initWithPLManagedFolder:(id)arg1 pathManager:(id)arg2 ;
-(void)setChildUUIDs:(NSMutableOrderedSet *)arg1 ;
-(NSString *)remappedUUID;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isRootFolder;
-(NSMutableOrderedSet *)childUUIDs;
-(void)removePersistedData;
-(int)customSortKey;
-(BOOL)isProjectAlbumRootFolder;
-(void)updateChildrenOrderingInFolder:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(id)insertFolderFromDataInManagedObjectContext:(id)arg1 ;
-(NSNumber *)kind;
-(NSString *)title;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(void)setCustomSortKey:(int)arg1 ;
-(BOOL)customSortAscending;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(BOOL)isInTrash;
-(void)setInTrash:(BOOL)arg1 ;
@end

