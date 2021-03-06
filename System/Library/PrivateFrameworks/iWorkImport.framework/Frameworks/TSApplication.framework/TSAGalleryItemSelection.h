/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSKSelection.h>

@class TSAGalleryItem, NSOrderedSet;

@interface TSAGalleryItemSelection : TSKSelection {

	TSAGalleryItem* _displayedItem;
	NSOrderedSet* _items;

}

@property (nonatomic,readonly) TSAGalleryItem * displayedItem;              //@synthesize displayedItem=_displayedItem - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * items;                        //@synthesize items=_items - In the implementation block
+(Class)archivedSelectionClass;
-(NSOrderedSet *)items;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)UUIDDescription;
-(id)initWithItems:(id)arg1 displayedItem:(id)arg2 ;
-(TSAGalleryItem *)displayedItem;
@end

