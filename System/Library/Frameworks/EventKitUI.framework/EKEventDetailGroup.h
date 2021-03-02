/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject {

	long long _tag;
	NSArray* _items;
	NSString* _headerTitle;

}

@property (assign,nonatomic) long long tag;                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)headerTitle;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(unsigned long long)numberOfRows;
-(long long)tag;
-(NSArray *)items;
-(void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1 ;
-(void)setTag:(long long)arg1 ;
-(id)description;
-(id)initWithTag:(long long)arg1 headerTitle:(id)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2 ;
-(id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long*)arg2 ;
-(BOOL)hasSubitemForIndexPathRow:(unsigned long long)arg1 ;
@end
