/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewListCell.h>

@class CSSearchableItem;

@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell {

	CSSearchableItem* _searchableItem;

}

@property (nonatomic,retain) CSSearchableItem * searchableItem;              //@synthesize searchableItem=_searchableItem - In the implementation block
+(id)reuseIdentifier;
-(CSSearchableItem *)searchableItem;
-(void)configureWithSearchableItem:(id)arg1 ;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
-(void)prepareForReuse;
-(void)updateConfigurationUsingState:(id)arg1 ;
@end
