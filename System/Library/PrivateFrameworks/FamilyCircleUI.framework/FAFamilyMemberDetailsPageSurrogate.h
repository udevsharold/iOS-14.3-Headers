/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>

@protocol UITableViewDelegate;
@class NSObject, UITableView, FAFamilyMember, AAUIProfilePictureStore, NSString;

@interface FAFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate> {

	NSObject*<UITableViewDelegate> _remoteTableViewController;
	UITableView* _remoteTableView;
	FAFamilyMember* _familyMember;
	AAUIProfilePictureStore* _pictureStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)initWithPage:(id)arg1 forPerson:(id)arg2 account:(id)arg3 store:(id)arg4 ;
@end

