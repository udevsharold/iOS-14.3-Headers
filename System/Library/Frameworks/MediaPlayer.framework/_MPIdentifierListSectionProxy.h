/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMutableIdentifierListSection.h>

@class NSString, NSArray, MPSectionedIdentifierList, NSMutableArray;

@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection> {

	NSString* _sectionIdentifier;
	MPSectionedIdentifierList* _sectionedIdentifierList;
	NSMutableArray* _mutableItemIdentifiers;

}

@property (nonatomic,retain) NSMutableArray * mutableItemIdentifiers;                                   //@synthesize mutableItemIdentifiers=_mutableItemIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                                       //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeItem:(id)arg1 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(NSString *)sectionIdentifier;
-(void)moveItemToHead:(id)arg1 ;
-(void)moveItemToTail:(id)arg1 ;
-(void)updateSection;
-(void)insertItemsAtHead:(id)arg1 ;
-(void)insertItemsAtTail:(id)arg1 ;
-(void)moveItem:(id)arg1 afterItem:(id)arg2 ;
-(NSMutableArray *)mutableItemIdentifiers;
-(id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3 ;
-(void)updateItem:(id)arg1 ;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2 ;
-(void)setMutableItemIdentifiers:(NSMutableArray *)arg1 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(NSArray *)itemIdentifiers;
@end
