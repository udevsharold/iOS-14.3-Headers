/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionView;

@interface _UICollectionViewEnvironmentAdapter : NSObject {

	UICollectionView* _collectionView;

}

@property (assign,getter=_collectionView,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)_collectionView;
-(id)initWithCollectionView:(id)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(id)createEnvironment;
-(CGSize)contentSize;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

