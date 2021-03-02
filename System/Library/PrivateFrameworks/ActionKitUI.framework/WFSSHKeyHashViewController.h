/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSString, WFTableDataSource;

@interface WFSSHKeyHashViewController : UITableViewController {

	NSString* _hashString;
	WFTableDataSource* _dataSource;

}

@property (nonatomic,copy,readonly) NSString * hashString;                  //@synthesize hashString=_hashString - In the implementation block
@property (nonatomic,readonly) WFTableDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(NSString *)hashString;
-(WFTableDataSource *)dataSource;
-(void)viewDidLoad;
-(id)initWithHashString:(id)arg1 title:(id)arg2 ;
@end
