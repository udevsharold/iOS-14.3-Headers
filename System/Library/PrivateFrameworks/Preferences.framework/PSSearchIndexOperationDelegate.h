/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>
@optional
-(void)searchIndexOperationDidCancel:(id)arg1;

@required
-(void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
-(void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;

@end
