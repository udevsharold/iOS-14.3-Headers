/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/SKUIShelfCollectionViewLayout.h>
@class SKUIShelfLayoutData;


@protocol SKUIShelfCollectionViewLayout <NSObject>
@property (nonatomic,retain) SKUIShelfLayoutData * layoutData; 
@required
+(double)snapToBoundariesDecelerationRate;
+(BOOL)collectionViewCanClipToBounds;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(id)arg1;

@end


@class SKUIShelfLayoutData, NSString;

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout> {

	SKUIShelfLayoutData* _layoutData;

}

@property (nonatomic,retain) SKUIShelfLayoutData * layoutData;              //@synthesize layoutData=_layoutData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutAttributesClass;
+(double)snapToBoundariesDecelerationRate;
+(BOOL)collectionViewCanClipToBounds;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(SKUIShelfLayoutData *)arg1 ;
@end

