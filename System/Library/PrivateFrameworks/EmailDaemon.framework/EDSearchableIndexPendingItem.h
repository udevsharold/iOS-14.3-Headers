/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDIndexableItem;
@class NSString, NSMutableArray;

@interface EDSearchableIndexPendingItem : NSObject {

	NSString* _identifier;
	NSMutableArray* _items;
	id<EDIndexableItem> _referenceItem;

}

@property (nonatomic,retain) NSMutableArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<EDIndexableItem> referenceItem;                    //@synthesize referenceItem=_referenceItem - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,readonly) BOOL requiresPreprocessing; 
-(void)addItem:(id)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSMutableArray *)items;
-(unsigned long long)hash;
-(id)initWithItem:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)estimatedSizeInBytes;
-(id<EDIndexableItem>)referenceItem;
-(void)addPendingItem:(id)arg1 ;
-(BOOL)requiresPreprocessing;
@end

