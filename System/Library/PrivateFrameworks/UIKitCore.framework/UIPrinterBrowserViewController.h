/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKPrinterBrowserDelegate.h>

@protocol UIPrinterBrowserOwner;
@class PKPrinterBrowser, NSMutableArray, NSArray, PKPrinter, UIPrinterSearchingView, NSString;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {

	id<UIPrinterBrowserOwner> _ownerPanelViewController;
	PKPrinterBrowser* _printerBrowser;
	NSMutableArray* _preferredPrinters;
	NSMutableArray* _otherPrinters;
	NSMutableArray* _filteredOutPrinters;
	NSArray* _lastUsedPrinters;
	PKPrinter* _lockedPrinter;
	BOOL _loaded;
	UIPrinterSearchingView* _searchingView;
	BOOL _searchingViewConstraintsSet;
	BOOL _shouldFilterPrinters;
	double _rowHeight;
	double _maximumPopoverHeight;

}

@property (assign) double maximumPopoverHeight;                     //@synthesize maximumPopoverHeight=_maximumPopoverHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)updateViewConstraints;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)showCancelButton;
-(id)initWithOwnerViewController:(id)arg1 ;
-(void)setMaximumPopoverHeight:(double)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)adjustPopoverSize;
-(void)selectPrinter:(id)arg1 ;
-(void)willEnterForeground;
-(void)printerInfoButtonTapped:(id)arg1 ;
-(void)stopPrinterBrowser;
-(void)didChangePreferredContentSize;
-(double)maximumPopoverHeight;
-(void)startPrinterBrowser;
-(void)updateSearching;
-(id)printerAtIndexPath:(id)arg1 ;
-(void)addPrinter:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2 ;
@end

