/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CKAcknowledgmentVotingViewAnimatorDelegate.h>

@class NSArray, CKAggregateAcknowledgmentChatItem, UICollectionView, CKGroupAcknowledgmentVotingLayout, CKAcknowledgmentVotingViewAnimator, UITapGestureRecognizer, UIButton, _CKAcknowledgmentVoteCountView, NSString;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate> {

	NSArray* _tallies;
	CKAggregateAcknowledgmentChatItem* _chatItem;
	UICollectionView* _collectionView;
	CKGroupAcknowledgmentVotingLayout* _layout;
	CKAcknowledgmentVotingViewAnimator* _animator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIButton* _collapseButton;
	_CKAcknowledgmentVoteCountView* _currentlyExpandedVoteCountView;
	NSArray* _sortedAnimatorModelItems;

}

@property (nonatomic,retain) NSArray * tallies;                                                            //@synthesize tallies=_tallies - In the implementation block
@property (nonatomic,retain) CKAggregateAcknowledgmentChatItem * chatItem;                                 //@synthesize chatItem=_chatItem - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKGroupAcknowledgmentVotingLayout * layout;                                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentVotingViewAnimator * animator;                                //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * collapseButton;                                                    //@synthesize collapseButton=_collapseButton - In the implementation block
@property (nonatomic,retain) _CKAcknowledgmentVoteCountView * currentlyExpandedVoteCountView;              //@synthesize currentlyExpandedVoteCountView=_currentlyExpandedVoteCountView - In the implementation block
@property (nonatomic,copy) NSArray * sortedAnimatorModelItems;                                             //@synthesize sortedAnimatorModelItems=_sortedAnimatorModelItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CKAcknowledgmentVotingViewAnimator *)animator;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setLayout:(CKGroupAcknowledgmentVotingLayout *)arg1 ;
-(void)setAnimator:(CKAcknowledgmentVotingViewAnimator *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(NSArray *)tallies;
-(CKAggregateAcknowledgmentChatItem *)chatItem;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTallies:(NSArray *)arg1 ;
-(CKGroupAcknowledgmentVotingLayout *)layout;
-(UICollectionView *)collectionView;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setChatItem:(CKAggregateAcknowledgmentChatItem *)arg1 ;
-(void)_setupTallies;
-(void)setSortedAnimatorModelItems:(NSArray *)arg1 ;
-(void)_handleCollapseButton:(id)arg1 ;
-(NSArray *)sortedAnimatorModelItems;
-(_CKAcknowledgmentVoteCountView *)currentlyExpandedVoteCountView;
-(UIButton *)collapseButton;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_ackIconSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_voteCountSupplementaryViewAtIndexPath:(id)arg1 ;
-(void)_collapseCollectionView;
-(void)_animateToLayout:(unsigned long long)arg1 aroundSection:(long long)arg2 ;
-(void)_layoutCollapseButton;
-(void)_layoutCurrentlyExpandedVoteCountView;
-(void)_expandCollectionViewExpandedViewAroundSection:(long long)arg1 ;
-(void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg1 ;
-(id)initWithMessagePartChatItem:(id)arg1 ;
-(void)setCollapseButton:(UIButton *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withGestureRecognizer:(id)arg2 ;
-(void)setCurrentlyExpandedVoteCountView:(_CKAcknowledgmentVoteCountView *)arg1 ;
-(void)viewDidLoad;
@end
