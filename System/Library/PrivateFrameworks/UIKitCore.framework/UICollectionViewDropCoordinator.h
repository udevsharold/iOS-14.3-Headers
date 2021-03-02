/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSIndexPath, UICollectionViewDropProposal;


@protocol UICollectionViewDropCoordinator <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) UICollectionViewDropProposal * proposal; 
@property (nonatomic,readonly) id<UIDropSession> session; 
@required
-(NSIndexPath *)destinationIndexPath;
-(id<UIDropSession>)session;
-(id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
-(NSArray *)items;
-(id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(CGRect)arg3;
-(id)dropItem:(id)arg1 toTarget:(id)arg2;
-(UICollectionViewDropProposal *)proposal;
-(id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2;

@end
