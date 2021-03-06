/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString;

@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSString * title; 
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(id)nonPersistedModelPropertiesDescription;
+(unsigned)minimumSnapshotPayloadVersion;
-(NSString *)title;
-(id)insertKeywordFromDataInManagedObjectContext:(id)arg1 ;
@end

