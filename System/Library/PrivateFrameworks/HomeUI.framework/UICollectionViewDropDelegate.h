/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDropDelegate <NSObject>
@optional
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
-(id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;

@required
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;

@end
