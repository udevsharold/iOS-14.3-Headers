/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteResultsTableViewControllerDelegate <NSObject>
@optional
-(void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
-(id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)autocompleteResultsController:(id)arg1 willOverrideImageDataForRecipient:(id)arg2 completion:(/*^block*/id)arg3;
-(void)autocompleteResultsController:(id)arg1 willExpandSelectedRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 didExpandSelectedRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 willCollapseSelectedRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 didCollapseSelectedRecipient:(id)arg2;

@end
