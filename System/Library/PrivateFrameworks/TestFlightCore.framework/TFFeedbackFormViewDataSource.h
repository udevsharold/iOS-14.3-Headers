/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class TFFeedbackFormPresenter, TFFeedbackFormCellUpdater, NSString;

@interface TFFeedbackFormViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {

	TFFeedbackFormPresenter* _presenter;
	TFFeedbackFormCellUpdater* _cellUpdater;

}

@property (nonatomic,readonly) TFFeedbackFormPresenter * presenter;                  //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) TFFeedbackFormCellUpdater * cellUpdater;              //@synthesize cellUpdater=_cellUpdater - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(TFFeedbackFormPresenter *)presenter;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)initWithPresenter:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)prepareTableViewForDataSource:(id)arg1 ;
-(TFFeedbackFormCellUpdater *)cellUpdater;
@end

