/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@protocol FPUIAuthenticationServerRepresentation, FPUIAuthenticationServerInfoDelegate;
@interface FPUIAuthenticationServerInfoViewController : FPUIAuthenticationTableViewController {

	id<FPUIAuthenticationServerRepresentation> _serverRepresentation;
	id<FPUIAuthenticationServerInfoDelegate> _serverInfoDelegate;

}

@property (assign,nonatomic,__weak) id<FPUIAuthenticationServerInfoDelegate> serverInfoDelegate;              //@synthesize serverInfoDelegate=_serverInfoDelegate - In the implementation block
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setupTableViewSections;
-(void)removeButtonTapped:(id)arg1 ;
-(id<FPUIAuthenticationServerInfoDelegate>)serverInfoDelegate;
-(id)initWithServerRepresentation:(id)arg1 ;
-(id)defaultLeftBarButtonItem;
-(void)setServerInfoDelegate:(id<FPUIAuthenticationServerInfoDelegate>)arg1 ;
@end

