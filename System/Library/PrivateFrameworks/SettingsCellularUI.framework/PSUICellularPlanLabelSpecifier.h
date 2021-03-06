/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelSpecifier : PSSpecifier {

	PSUICellularPlanManagerCache* _planManagerCache;
	PSUICellularPlanUniversalReference* _planReference;

}

@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                 //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanUniversalReference * planReference;              //@synthesize planReference=_planReference - In the implementation block
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(PSUICellularPlanUniversalReference *)planReference;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(id)cellularPlanLabel:(id)arg1 ;
-(void)updateValuesAndTitles;
-(id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2 ;
@end

