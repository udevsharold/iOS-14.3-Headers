/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable {

	PSIStatement* _insertStatement;
	PSIStatement* _insertPrefixStatement;
	PSIStatement* _deleteStatement;
	PSIStatement* _deletePrefixStatement;
	PSIStatement* _checkStatement;
	PSIStatement* _selectMatchesStatement;
	PSIStatement* _selectStatement;
	CFLocaleRef _locale;
	BOOL _localeIsGerman;

}
-(id)wordEmbeddingsForToken:(id)arg1 ;
-(void)clear;
-(void)insertWord:(id)arg1 synonyms:(id)arg2 ;
-(id)matchesForToken:(id)arg1 ;
-(id)wordEmbeddingVersion;
-(void)cacheSearchableStatements;
-(void)finalizze;
-(void)removeWord:(id)arg1 ;
-(BOOL)isInsertedWithWord:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 locale:(id)arg4 ;
-(id)dumpWordEmbeddingTable;
-(void)cacheWritableStatements;
@end
