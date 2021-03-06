/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FATableViewDecorator.h>

@class RUITableView, FAProfilePictureStore;

@interface FAProfilePictureTableViewDecorator : FATableViewDecorator {

	RUITableView* _remoteTableViewController;
	FAProfilePictureStore* _pictureStore;

}
+(BOOL)shouldShowPicturesInPage:(id)arg1 ;
+(BOOL)_shouldShowPictureInSection:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 pictureStore:(id)arg3 ;
-(void)_profilePictureStoreDidReload;
@end

