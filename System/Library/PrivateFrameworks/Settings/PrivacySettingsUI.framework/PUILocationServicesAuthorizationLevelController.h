/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivacySettingsUI/PUILocationServicesListController.h>

@class NSString, NSDictionary, NSBundle, NSArray;

@interface PUILocationServicesAuthorizationLevelController : PUILocationServicesListController {

	unsigned long long _authMask;
	BOOL _correctiveCompensationState;
	NSString* _serviceKey;
	NSDictionary* _details;
	NSString* _displayName;
	NSBundle* _entityBundle;
	NSArray* _correctiveCompensationSpecifiersGroup;

}

@property (nonatomic,copy) NSString * serviceKey;                                          //@synthesize serviceKey=_serviceKey - In the implementation block
@property (nonatomic,retain) NSDictionary * details;                                       //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSBundle * entityBundle;                                      //@synthesize entityBundle=_entityBundle - In the implementation block
@property (nonatomic,retain) NSArray * correctiveCompensationSpecifiersGroup;              //@synthesize correctiveCompensationSpecifiersGroup=_correctiveCompensationSpecifiersGroup - In the implementation block
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(id)init;
-(NSString *)serviceKey;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setServiceKey:(NSString *)arg1 ;
-(NSDictionary *)details;
-(NSBundle *)entityBundle;
-(void)setEntityBundle:(NSBundle *)arg1 ;
-(NSString *)displayName;
-(void)profileSettingsChanged:(id)arg1 ;
-(void)_updatePreciseLocationCell;
-(NSArray *)correctiveCompensationSpecifiersGroup;
-(void)_synchronizeLocationDetails;
-(id)_constructFooterForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)_setPreciseLocationEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_preciseLocationStatus:(id)arg1 ;
-(void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned long long)arg1 withCorrectiveCompensation:(int)arg2 ;
-(id)_purposeStringForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)_setLocationAuthorizationLevelForSpecifier:(id)arg1 ;
-(id)_usageTextForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)setCorrectiveCompensationSpecifiersGroup:(NSArray *)arg1 ;
@end

