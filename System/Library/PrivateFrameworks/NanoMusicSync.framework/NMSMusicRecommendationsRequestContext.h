/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMapTable, MPModelForYouRecommendationsResponse, MPModelResponse, MPModelStoreBrowseResponse, NSArray, NSSet, NMSMutableMediaSyncInfo, NSOrderedSet;

@interface NMSMusicRecommendationsRequestContext : NSObject {

	NSMutableOrderedSet* _recentMusicModelObjects;
	NSMapTable* _modelObjectSectionMap;
	unsigned long long _minimumNumberOfRecentMusicModelObjects;
	MPModelForYouRecommendationsResponse* _forYouResponse;
	MPModelResponse* _libraryRecentMusicResponse;
	MPModelStoreBrowseResponse* _editorialBrowseResponse;
	MPModelResponse* _lookupResponse;
	NSArray* _importedObjects;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfRecentMusicModelObjects;                   //@synthesize minimumNumberOfRecentMusicModelObjects=_minimumNumberOfRecentMusicModelObjects - In the implementation block
@property (nonatomic,retain) MPModelForYouRecommendationsResponse * forYouResponse;                       //@synthesize forYouResponse=_forYouResponse - In the implementation block
@property (nonatomic,retain) MPModelResponse * libraryRecentMusicResponse;                                //@synthesize libraryRecentMusicResponse=_libraryRecentMusicResponse - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * editorialBrowseResponse;                        //@synthesize editorialBrowseResponse=_editorialBrowseResponse - In the implementation block
@property (nonatomic,retain) MPModelResponse * lookupResponse;                                            //@synthesize lookupResponse=_lookupResponse - In the implementation block
@property (nonatomic,retain) NSArray * importedObjects;                                                   //@synthesize importedObjects=_importedObjects - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRecentMusicModelObjects; 
@property (nonatomic,readonly) NSSet * modelObjects; 
@property (nonatomic,readonly) NMSMutableMediaSyncInfo * importedStoreContainerItemMappings; 
@property (nonatomic,readonly) NSOrderedSet * recommendations; 
-(void)setMinimumNumberOfRecentMusicModelObjects:(unsigned long long)arg1 ;
-(void)setLookupResponse:(MPModelResponse *)arg1 ;
-(void)setLibraryRecentMusicResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)lookupResponse;
-(BOOL)_recentMusicContainsModelObject:(id)arg1 ;
-(NSSet *)modelObjects;
-(void)setForYouResponse:(MPModelForYouRecommendationsResponse *)arg1 ;
-(NMSMutableMediaSyncInfo *)importedStoreContainerItemMappings;
-(NSOrderedSet *)recommendations;
-(void)setImportedObjects:(NSArray *)arg1 ;
-(NSArray *)importedObjects;
-(unsigned long long)numberOfRecentMusicModelObjects;
-(MPModelResponse *)libraryRecentMusicResponse;
-(MPModelForYouRecommendationsResponse *)forYouResponse;
-(unsigned long long)minimumNumberOfRecentMusicModelObjects;
-(void)setEditorialBrowseResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(MPModelStoreBrowseResponse *)editorialBrowseResponse;
-(void)_processResponsesIfNeeded;
@end

