/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class PKPaymentService, PKPaymentTransaction, PKTransactionReceipt, QLItem, QLPreviewController, NSString;

@interface PKTransactionReceiptDebugViewController : PKSectionTableViewController <PKPaymentServiceDelegate, QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource> {

	PKPaymentService* _paymentService;
	PKPaymentTransaction* _transaction;
	PKTransactionReceipt* _receipt;
	QLItem* _receiptPreviewItem;
	QLPreviewController* _previewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)provideDataForItem:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithPaymentTransaction:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)_infoCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_headerFieldCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_lineItemCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_summaryItemCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_amountCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_previewCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_presentReceiptPreview;
-(void)viewDidLoad;
@end
