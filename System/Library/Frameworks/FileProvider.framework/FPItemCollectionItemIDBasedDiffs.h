/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableDictionary;

@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs {

	NSMutableArray* _deletedItemIDs;
	NSMutableArray* _updatedItems;
	NSMutableDictionary* _replacedItemsByFormerID;

}

@property (retain) NSMutableArray * deletedItemIDs;                            //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (retain) NSMutableArray * updatedItems;                              //@synthesize updatedItems=_updatedItems - In the implementation block
@property (retain) NSMutableDictionary * replacedItemsByFormerID;              //@synthesize replacedItemsByFormerID=_replacedItemsByFormerID - In the implementation block
-(NSMutableArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSMutableArray *)arg1 ;
-(BOOL)containsChanges;
-(NSMutableDictionary *)replacedItemsByFormerID;
-(void)setReplacedItemsByFormerID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)updatedItems;
-(void)setUpdatedItems:(NSMutableArray *)arg1 ;
@end
