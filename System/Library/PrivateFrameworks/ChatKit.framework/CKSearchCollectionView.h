/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface CKSearchCollectionView : UICollectionView {

	BOOL __ck_editing;
	BOOL _suppressDatasourceUpdates;
	BOOL _lockContentOffset;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                 //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;              //@synthesize _ck_editing=__ck_editing - In the implementation block
@property (assign,nonatomic) BOOL suppressDatasourceUpdates;                                            //@synthesize suppressDatasourceUpdates=_suppressDatasourceUpdates - In the implementation block
@property (assign,nonatomic) BOOL lockContentOffset;                                                    //@synthesize lockContentOffset=_lockContentOffset - In the implementation block
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setDataSource:(id)arg1 ;
-(void)setLockContentOffset:(BOOL)arg1 ;
-(BOOL)lockContentOffset;
-(BOOL)suppressDatasourceUpdates;
-(void)setSuppressDatasourceUpdates:(BOOL)arg1 ;
-(BOOL)_ck_isEditing;
-(UIEdgeInsets)marginInsets;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
@end

