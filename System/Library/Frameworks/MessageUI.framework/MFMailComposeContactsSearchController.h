/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearchConsumer.h>

@protocol MFMailComposeContactsSearchControllerDelegate;
@class CNAutocompleteSearchManager, NSMutableArray, NSNumber, NSString;

@interface MFMailComposeContactsSearchController : NSObject <CNAutocompleteSearchConsumer> {

	CNAutocompleteSearchManager* _manager;
	NSMutableArray* _autocompleteSearchResults;
	NSMutableArray* _corecipientSearchResults;
	NSNumber* _corecipientSearchTaskID;
	BOOL _foundAnySearchResults;
	unsigned long long _waitingOnSearchResultsCount;
	id<MFMailComposeContactsSearchControllerDelegate> _delegate;
	NSNumber* _taskID;

}

@property (nonatomic,retain) NSNumber * taskID;                                                              //@synthesize taskID=_taskID - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeContactsSearchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(id)init;
-(void)_reset;
-(void)removeRecipient:(id)arg1 ;
-(void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3 ;
-(void)_finishSearch;
-(void)findCorecipientsWithRecipients:(id)arg1 ;
-(NSNumber *)taskID;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForCorecipients;
-(void)endedNetworkActivity;
-(void)setTaskID:(NSNumber *)arg1 ;
-(void)searchWithString:(id)arg1 ;
-(void)cancelSearch;
-(void)setDelegate:(id<MFMailComposeContactsSearchControllerDelegate>)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id<MFMailComposeContactsSearchControllerDelegate>)delegate;
@end
