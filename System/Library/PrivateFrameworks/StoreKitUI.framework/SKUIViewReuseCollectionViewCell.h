/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSMapTable, SKUIViewReusePool, NSArray;

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell {

	NSMapTable* _allViewTextProperties;
	SKUIViewReusePool* _viewPool;
	NSArray* _allExistingViews;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                 //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) NSArray * allExistingViews;              //@synthesize allExistingViews=_allExistingViews - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)modifyUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allExistingViews;
-(void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2 ;
-(void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)textPropertiesForView:(id)arg1 ;
-(id)existingViewForIndex:(long long)arg1 ;
-(id)existingViewsForReuseIdentifier:(id)arg1 ;
@end

