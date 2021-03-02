/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardMessagesViewDelegate.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPassGroupView, PKDashboardMessagesView, NSMutableArray, UIScrollView, NSString;

@interface PKDashboardPassMessagePresenter : NSObject <PKDashboardMessagesViewDelegate, PKDashboardItemPresenter> {

	PKPassGroupView* _groupView;
	PKDashboardMessagesView* _sampleMessageView;
	NSMutableArray* _tablesViews;
	UIScrollView* _scrollView;
	unsigned long long _currentIndex;
	NSString* _currentIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)itemClass;
-(id)_identifierForItem:(id)arg1 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(id)initWithPassGroupView:(id)arg1 ;
-(void)messagesView:(id)arg1 scrolledToMessageWithIdentifier:(id)arg2 ;
-(unsigned long long)_indexForIdentifier:(id)arg1 inMessages:(id)arg2 ;
@end
