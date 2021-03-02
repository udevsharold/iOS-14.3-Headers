/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(id)nonPersistedModelPropertiesDescription;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg1 ;
-(void)_fixHasLocationSmartAlbum;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
@end
