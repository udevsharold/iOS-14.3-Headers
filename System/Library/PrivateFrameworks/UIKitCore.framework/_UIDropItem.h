/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDragItem.h>

@class UIDragItem, NSItemProvider;

@interface _UIDropItem : UIDragItem {

	UIDragItem* _localDragItem;
	NSItemProvider* _dropItemProvider;

}

@property (setter=_setLocalDragItem:,getter=_localDragItem,nonatomic,retain) UIDragItem * localDragItem;                           //@synthesize localDragItem=_localDragItem - In the implementation block
@property (setter=_setDropItemProvider:,getter=_dropItemProvider,nonatomic,retain) NSItemProvider * dropItemProvider;              //@synthesize dropItemProvider=_dropItemProvider - In the implementation block
-(void)setLocalObject:(id)arg1 ;
-(id)itemProvider;
-(void)_setDropItemProvider:(id)arg1 ;
-(id)localObject;
-(id)_localDragItem;
-(void)_setLocalDragItem:(id)arg1 ;
-(id)_dropItemProvider;
-(void)_setPrivateLocalContext:(id)arg1 ;
-(id)_privateLocalContext;
@end

