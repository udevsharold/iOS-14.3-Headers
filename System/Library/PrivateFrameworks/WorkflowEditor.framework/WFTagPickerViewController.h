/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol WFTagPickerViewControllerDelegate;
@class NSArray, NSMutableOrderedSet, UISearchController, NSString;

@interface WFTagPickerViewController : UITableViewController <UISearchResultsUpdating> {

	id<WFTagPickerViewControllerDelegate> _delegate;
	NSArray* _tags;
	NSMutableOrderedSet* _selectedTags;
	UISearchController* _searchController;

}

@property (nonatomic,readonly) NSArray * tags;                                                   //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * selectedTags;                               //@synthesize selectedTags=_selectedTags - In the implementation block
@property (nonatomic,readonly) UISearchController * searchController;                            //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic,__weak) id<WFTagPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UISearchController *)searchController;
-(CGSize)preferredContentSize;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)cancel;
-(void)dismiss;
-(id)currentResults;
-(NSArray *)tags;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFTagPickerViewControllerDelegate>)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id<WFTagPickerViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 tags:(id)arg2 ;
-(NSMutableOrderedSet *)selectedTags;
@end

