/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class NSString, PSListController, PSSpecifier, BKDevicePearl, BKUserProtectedConfiguration;

@interface PSUIPearlAttentionGroupController : NSObject <PSSpecifierGroup> {

	NSString* _pinCode;
	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	BKDevicePearl* _pearlDevice;
	BKUserProtectedConfiguration* _updatedConfiguration;

}

@property (assign,nonatomic,__weak) PSListController * listController;                         //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                              //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) BKDevicePearl * pearlDevice;                                      //@synthesize pearlDevice=_pearlDevice - In the implementation block
@property (nonatomic,retain) BKUserProtectedConfiguration * updatedConfiguration;              //@synthesize updatedConfiguration=_updatedConfiguration - In the implementation block
@property (nonatomic,retain) NSString * pinCode;                                               //@synthesize pinCode=_pinCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(BKDevicePearl *)pearlDevice;
-(id)_pearlDevice;
-(void)setPearlDevice:(BKDevicePearl *)arg1 ;
-(PSSpecifier *)groupSpecifier;
-(void)setListController:(PSListController *)arg1 ;
-(void)setPinCode:(NSString *)arg1 ;
-(NSString *)pinCode;
-(void)didCancelEnteringPIN;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setPearlUnlock:(id)arg1 specifier:(id)arg2 ;
-(id)pearlUnlock:(id)arg1 ;
-(void)setAttentionAware:(id)arg1 specifier:(id)arg2 ;
-(id)attentionAware:(id)arg1 ;
-(void)setProtectedCredentialsWithPasscode:(id)arg1 ;
-(BKUserProtectedConfiguration *)updatedConfiguration;
-(void)setUpdatedConfiguration:(BKUserProtectedConfiguration *)arg1 ;
@end

