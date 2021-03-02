/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKIdentityProtocol;
@class CNContactViewController, CNContactStore;

@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol> {

	id<EKIdentityProtocol> _identity;
	CNContactViewController* _personViewController;
	CNContactStore* _store;

}

@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)initWithIdentity:(id)arg1 ;
-(void)setIdentity:(id)arg1 ;
-(Class)_CNContactStoreClass;
-(Class)_CNContactClass;
-(id)CNLabelWork;
-(Class)_CNContactViewControllerClass;
-(id)contactForIdentity:(id)arg1 ;
-(void)updateControllerWithContact:(id)arg1 isNew:(BOOL)arg2 ;
-(id)CNContactPhoneNumbersKey;
-(id)CNContactEmailAddressesKey;
-(Class)_CNMutableContactClass;
-(Class)_CNLabeledValueClass;
-(void)loadView;
@end
