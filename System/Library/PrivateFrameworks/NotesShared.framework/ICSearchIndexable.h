/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexable <NSObject>
@optional
-(id)dataForTypeIdentifier:(id)arg1;
-(id)fileURLForTypeIdentifier:(id)arg1;

@required
-(id)modificationDate;
-(id)objectID;
-(id)creationDate;
-(BOOL)isDeletable;
-(id)dataSourceIdentifier;
-(id)contentIdentifier;
-(BOOL)isMovable;
-(id)managedObjectContext;
-(id)userActivityContentAttributeSet;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(id)searchIndexingIdentifier;
-(id)searchableItemAttributeSet;
-(id)searchDomainIdentifier;
-(unsigned long long)searchResultType;

@end
