/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _UIActivityUserDefaultsDataSourceProxy;
@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource {

	id<_UIActivityUserDefaultsDataSourceProxy> _dataSourceProxy;

}

@property (assign,nonatomic,__weak) id<_UIActivityUserDefaultsDataSourceProxy> dataSourceProxy;              //@synthesize dataSourceProxy=_dataSourceProxy - In the implementation block
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setDataSourceProxy:(id<_UIActivityUserDefaultsDataSourceProxy>)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id<_UIActivityUserDefaultsDataSourceProxy>)dataSourceProxy;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
@end
