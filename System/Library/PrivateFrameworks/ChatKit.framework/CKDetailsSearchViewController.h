/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchViewController.h>
#import <libobjc.A.dylib/CKContainerSearchControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/CKDetailsSearchResultsFooterCellDelegate.h>
#import <libobjc.A.dylib/CKDetailsSearchResultsTitleHeaderCellDelegate.h>

@protocol CKDetailsSearchControllerDelegate;
@class CKConversation, NSArray, CKQLPreviewControllerDataSource, CKQLPreviewController, CKDetailsSearchResultsTitleHeaderCell, CKDetailsSearchResultsFooterCell, CKSearchIndexingFooterCell, UIBarButtonItem, NSDate, UICollectionViewCell, NSString;

@interface CKDetailsSearchViewController : CKSearchViewController <CKContainerSearchControllerDelegate, QLPreviewControllerDelegate, CKDetailsSearchResultsFooterCellDelegate, CKDetailsSearchResultsTitleHeaderCellDelegate> {

	BOOL _searchComplete;
	id<CKDetailsSearchControllerDelegate> _detailsDelegate;
	CKConversation* _conversation;
	NSArray* _chatGUIDs;
	CKQLPreviewControllerDataSource* _qlPreviewDataSource;
	CKQLPreviewController* _previewController;
	CKDetailsSearchResultsTitleHeaderCell* _titleSizingCell;
	CKDetailsSearchResultsFooterCell* _footerSizingCell;
	CKSearchIndexingFooterCell* _sizingIndexingFooterCell;
	UIBarButtonItem* _selectButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _flexibleItem;
	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _deleteButton;
	NSDate* _lastUserSelectedCellTime;
	UICollectionViewCell* _lastUserSelectedCell;

}

@property (nonatomic,retain) NSArray * chatGUIDs;                                                       //@synthesize chatGUIDs=_chatGUIDs - In the implementation block
@property (nonatomic,retain) CKQLPreviewControllerDataSource * qlPreviewDataSource;                     //@synthesize qlPreviewDataSource=_qlPreviewDataSource - In the implementation block
@property (nonatomic,retain) CKQLPreviewController * previewController;                                 //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) CKDetailsSearchResultsTitleHeaderCell * titleSizingCell;                   //@synthesize titleSizingCell=_titleSizingCell - In the implementation block
@property (nonatomic,retain) CKDetailsSearchResultsFooterCell * footerSizingCell;                       //@synthesize footerSizingCell=_footerSizingCell - In the implementation block
@property (nonatomic,retain) CKSearchIndexingFooterCell * sizingIndexingFooterCell;                     //@synthesize sizingIndexingFooterCell=_sizingIndexingFooterCell - In the implementation block
@property (assign,nonatomic) BOOL searchComplete;                                                       //@synthesize searchComplete=_searchComplete - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectButton;                                            //@synthesize selectButton=_selectButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * flexibleItem;                                            //@synthesize flexibleItem=_flexibleItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                              //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteButton;                                            //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) NSDate * lastUserSelectedCellTime;                                         //@synthesize lastUserSelectedCellTime=_lastUserSelectedCellTime - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * lastUserSelectedCell;                               //@synthesize lastUserSelectedCell=_lastUserSelectedCell - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsSearchControllerDelegate> detailsDelegate;              //@synthesize detailsDelegate=_detailsDelegate - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                             //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)reloadData;
-(CKConversation *)conversation;
-(void)setQlPreviewDataSource:(CKQLPreviewControllerDataSource *)arg1 ;
-(CKQLPreviewControllerDataSource *)qlPreviewDataSource;
-(BOOL)wantsSpaceKeyCommandActive;
-(void)handleSpacePressed;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDetailsDelegate:(id<CKDetailsSearchControllerDelegate>)arg1 ;
-(void)rekickZKWSearchForAttachmentBatchUpdate;
-(void)searchEnded;
-(NSArray *)chatGUIDs;
-(void)viewDidLayoutSubviews;
-(void)setPreviewController:(CKQLPreviewController *)arg1 ;
-(UIBarButtonItem *)selectButton;
-(void)_selectButtonTapped:(id)arg1 ;
-(void)setSelectButton:(UIBarButtonItem *)arg1 ;
-(id<CKDetailsSearchControllerDelegate>)detailsDelegate;
-(void)presentQuickLookView:(id)arg1 ;
-(NSDate *)lastUserSelectedCellTime;
-(UICollectionViewCell *)lastUserSelectedCell;
-(void)setLastUserSelectedCellTime:(NSDate *)arg1 ;
-(void)setChatGUIDs:(NSArray *)arg1 ;
-(void)setLastUserSelectedCell:(UICollectionViewCell *)arg1 ;
-(id)layoutSectionForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setSearchComplete:(BOOL)arg1 ;
-(id)globalLayoutConfiguration;
-(CKDetailsSearchResultsTitleHeaderCell *)titleSizingCell;
-(id)sizeAttributeForController:(id)arg1 sizingAttribute:(id)arg2 ;
-(Class)_searchResultsHeaderClass;
-(CKDetailsSearchResultsFooterCell *)footerSizingCell;
-(BOOL)searchComplete;
-(CKSearchIndexingFooterCell *)sizingIndexingFooterCell;
-(void)_configureIndexingCell:(id)arg1 ;
-(void)_searchResultHeaderButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)flexibleItem;
-(void)setupDetailsSearchController:(id)arg1 ;
-(void)_deleteAttachmentsAtIndexPaths:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(void)setFlexibleItem:(UIBarButtonItem *)arg1 ;
-(id)_searchControllerForIndexPath:(id)arg1 ;
-(id)_newSnapshotForCurrentControllerState;
-(void)setTitleSizingCell:(CKDetailsSearchResultsTitleHeaderCell *)arg1 ;
-(id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setFooterSizingCell:(CKDetailsSearchResultsFooterCell *)arg1 ;
-(void)setSizingIndexingFooterCell:(CKSearchIndexingFooterCell *)arg1 ;
-(id)_selectedIndexPaths;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_registerCells;
-(UIBarButtonItem *)saveButton;
-(void)searchResultsTitleCellShowAllButtonTapped:(id)arg1 ;
-(void)searchDetailsShowAllButtonTapped:(id)arg1 ;
-(void)searchDetailsFooterCellShowAllTapped:(id)arg1 ;
-(void)_updateToolbar;
-(void)_saveSelectedAttachments:(id)arg1 ;
-(void)_deleteSelectedAttachments:(id)arg1 ;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(CKQLPreviewController *)previewController;
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg1 ;
-(UIBarButtonItem *)deleteButton;
-(void)searchWithText:(id)arg1 ;
-(void)setDeleteButton:(UIBarButtonItem *)arg1 ;
-(void)loadView;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(void)deleteTransferGUID:(id)arg1 ;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searchControllerContentsDidChange:(id)arg1 ;
-(void)deleteMessageItem:(id)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg1 ;
-(void)searchControllerDidBeginDragging:(id)arg1 ;
-(void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3 ;
-(void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2 ;
@end

