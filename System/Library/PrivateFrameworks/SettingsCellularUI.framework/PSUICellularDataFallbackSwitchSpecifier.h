/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class PSListController;

@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier {

	PSListController* _hostController;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(void)setFallbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isFallbackEnabled:(id)arg1 ;
-(id)initWithHostController:(id)arg1 ;
@end

