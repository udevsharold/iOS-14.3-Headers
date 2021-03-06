/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@class NSString, MPSectionedIdentifierListHeadEntry;

@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	MPSectionedIdentifierListHeadEntry* _sectionHeadEntry;

}

@property (assign,nonatomic,__weak) MPSectionedIdentifierListHeadEntry * sectionHeadEntry;              //@synthesize sectionHeadEntry=_sectionHeadEntry - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tailEntryWithSectionHeadEntry:(id)arg1 ;
-(long long)entryType;
-(MPSectionedIdentifierListHeadEntry *)sectionHeadEntry;
-(void)setSectionHeadEntry:(MPSectionedIdentifierListHeadEntry *)arg1 ;
-(id)previousEntry;
@end

