/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class CKConversation, NSMutableArray, UITextView, STLockoutViewController, STConversationContext, UIView, NSString;

@interface CKBlackholeTranscriptViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _isShowingLockoutView;
	CKConversation* _conversation;
	NSMutableArray* _messages;
	UITextView* _headerTextView;
	STLockoutViewController* _lockoutViewController;
	STConversationContext* _conversationContext;
	UIView* _lockoutView;

}

@property (nonatomic,retain) CKConversation * conversation;                                //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSMutableArray * messages;                                    //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) UITextView * headerTextView;                                  //@synthesize headerTextView=_headerTextView - In the implementation block
@property (assign,nonatomic) BOOL isShowingLockoutView;                                    //@synthesize isShowingLockoutView=_isShowingLockoutView - In the implementation block
@property (nonatomic,retain) STLockoutViewController * lockoutViewController;              //@synthesize lockoutViewController=_lockoutViewController - In the implementation block
@property (nonatomic,retain) STConversationContext * conversationContext;                  //@synthesize conversationContext=_conversationContext - In the implementation block
@property (nonatomic,retain) UIView * lockoutView;                                         //@synthesize lockoutView=_lockoutView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessages:(NSMutableArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(CKConversation *)conversation;
-(void)dealloc;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)generateHeader;
-(NSMutableArray *)messages;
-(UITextView *)headerTextView;
-(void)_updateTranscriptHistory;
-(void)setHeaderTextView:(UITextView *)arg1 ;
-(void)_restoreConverstion;
-(UIView *)lockoutView;
-(BOOL)isChatAllowedByScreenTime:(id)arg1 ;
-(void)updateScreenTimeShieldIfNeededForChat:(id)arg1 ;
-(void)removeLockoutControllerIfNeeded;
-(void)showScreenTimeShieldIfNeeded;
-(void)chatAllowedByScreenTimeChanged:(id)arg1 ;
-(BOOL)isShowingLockoutView;
-(STLockoutViewController *)lockoutViewController;
-(void)setLockoutViewController:(STLockoutViewController *)arg1 ;
-(void)setLockoutView:(UIView *)arg1 ;
-(void)setIsShowingLockoutView:(BOOL)arg1 ;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(void)setConversationContext:(STConversationContext *)arg1 ;
-(STConversationContext *)conversationContext;
-(id)_handleIDsForCurrentConversation;
-(void)layoutLockoutView;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithConversation:(id)arg1 ;
-(void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_alertTitleForDelete;
-(id)_conversationList;
-(void)_deleteConversation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
@end
