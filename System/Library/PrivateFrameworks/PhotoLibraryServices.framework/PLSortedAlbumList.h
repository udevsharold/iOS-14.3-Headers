/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>

@protocol PLAlbumContainer;
@class NSObject, NSMutableOrderedSet, NSString;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {

	NSObject*<PLAlbumContainer> _backingAlbumList;
	CFArrayRef _toBackingMap;
	CFArrayRef _fromBackingMap;
	/*^block*/id _sortComparator;
	NSMutableOrderedSet* _weak_albums;

}

@property (nonatomic,retain) NSObject*<PLAlbumContainer> backingAlbumList;                    //@synthesize backingAlbumList=_backingAlbumList - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _albums; 
@property (nonatomic,copy) id sortComparator;                                                 //@synthesize sortComparator=_sortComparator - In the implementation block
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
-(id)photoLibrary;
-(BOOL)canEditContainers;
-(id)containers;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(id)albumsSortingComparator;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(NSString *)_typeDescription;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(unsigned long long)albumsCount;
-(BOOL)isEmpty;
-(int)filter;
-(void)setBackingAlbumList:(NSObject*<PLAlbumContainer>)arg1 ;
-(unsigned long long)unreadAlbumsCount;
-(void)dealloc;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(NSMutableOrderedSet *)_albums;
-(BOOL)hasAtLeastOneAlbum;
-(Class)derivedChangeNotificationClass;
-(id)identifier;
-(unsigned long long)containersCount;
-(BOOL)needsReordering;
-(void)createSortedIndexesMap;
-(id)initWithAlbumList:(id)arg1 sortComparator:(/*^block*/id)arg2 ;
-(unsigned long long)countOfSortedAlbums;
-(unsigned long long)indexInSortedAlbumsOfObject:(id)arg1 ;
-(id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)sortComparator;
-(void)setSortComparator:(id)arg1 ;
-(id)managedObjectContext;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(BOOL)canEditAlbums;
-(NSObject*<PLAlbumContainer>)backingAlbumList;
-(void)setNeedsReordering;
-(id)albums;
-(BOOL)isFolder;
-(void)set_albums:(NSMutableOrderedSet *)arg1 ;
-(short)albumListType;
-(NSString *)_prettyDescription;
-(id)containersRelationshipName;
@end
