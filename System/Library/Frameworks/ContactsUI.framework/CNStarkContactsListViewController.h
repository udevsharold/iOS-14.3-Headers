/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactListViewController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class NSArray, CNContactListTableView, CNStarkNoContentBannerView, UITableViewHeaderFooterView, AVExternalDevice, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate> {

	BOOL _limitedUI;
	NSArray* _displayedContactProperties;
	CNContactListTableView* _contactListTableView;
	CNStarkNoContentBannerView* _overlayView;
	UITableViewHeaderFooterView* _siriHeaderView;
	AVExternalDevice* _externalDevice;

}

@property (nonatomic,retain) NSArray * displayedContactProperties;                       //@synthesize displayedContactProperties=_displayedContactProperties - In the implementation block
@property (nonatomic,retain) CNContactListTableView * contactListTableView;              //@synthesize contactListTableView=_contactListTableView - In the implementation block
@property (nonatomic,retain) CNStarkNoContentBannerView * overlayView;                   //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UITableViewHeaderFooterView * siriHeaderView;               //@synthesize siriHeaderView=_siriHeaderView - In the implementation block
@property (assign,nonatomic) BOOL limitedUI;                                             //@synthesize limitedUI=_limitedUI - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                          //@synthesize externalDevice=_externalDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeContactsDisplayedProperties;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(AVExternalDevice *)externalDevice;
-(id)contactListStyleApplier;
-(void)setLimitedUI:(BOOL)arg1 ;
-(NSArray *)displayedContactProperties;
-(void)postMessageOverlayIfNecessary;
-(id)init;
-(void)showContactListTableView;
-(id)initWithDataSource:(id)arg1 searchable:(BOOL)arg2 environment:(id)arg3 shouldUseLargeTitle:(BOOL)arg4 ;
-(id)createTableView;
-(void)setupDataSource;
-(void)dealloc;
-(void)showOverlayView;
-(CNStarkNoContentBannerView *)overlayView;
-(CNContactListTableView *)contactListTableView;
-(void)limitedUINotification:(id)arg1 ;
-(void)handleSiriHeaderViewTap:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)limitedUI;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)setOverlayView:(CNStarkNoContentBannerView *)arg1 ;
-(void)setSiriHeaderView:(UITableViewHeaderFooterView *)arg1 ;
-(void)setDisplayedContactProperties:(NSArray *)arg1 ;
-(UITableViewHeaderFooterView *)siriHeaderView;
-(void)updateLimitedUI;
-(void)setContactListTableView:(CNContactListTableView *)arg1 ;
-(void)refreshTableViewHeaderWithSize:(CGSize)arg1 ;
-(void)viewDidLoad;
@end

