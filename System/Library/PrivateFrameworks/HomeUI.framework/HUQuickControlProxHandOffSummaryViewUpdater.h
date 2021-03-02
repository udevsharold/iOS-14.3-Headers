/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFProxControlActivityClientDelegate.h>

@protocol OS_dispatch_source;
@class PCTelephonyActivity, NSObject, HUQuickControlSummaryNavigationBarTitleView, NSString;

@interface HUQuickControlProxHandOffSummaryViewUpdater : NSObject <HFProxControlActivityClientDelegate> {

	PCTelephonyActivity* _homePodPhoneCallActivity;
	NSObject*<OS_dispatch_source> _phoneCallStatusUpdateTimer;
	HUQuickControlSummaryNavigationBarTitleView* _titleView;

}

@property (nonatomic,retain) PCTelephonyActivity * homePodPhoneCallActivity;                        //@synthesize homePodPhoneCallActivity=_homePodPhoneCallActivity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> phoneCallStatusUpdateTimer;              //@synthesize phoneCallStatusUpdateTimer=_phoneCallStatusUpdateTimer - In the implementation block
@property (nonatomic,retain) HUQuickControlSummaryNavigationBarTitleView * titleView;               //@synthesize titleView=_titleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitleView:(HUQuickControlSummaryNavigationBarTitleView *)arg1 ;
-(void)dealloc;
-(HUQuickControlSummaryNavigationBarTitleView *)titleView;
-(void)didUpdateActivities:(id)arg1 forProxControlID:(id)arg2 disambiguationContext:(id)arg3 ;
-(void)_updateSummaryViewForActivities:(id)arg1 disambiguationContext:(id)arg2 ;
-(BOOL)_isHomePodPhoneCallStatusUpdateTimerActive;
-(PCTelephonyActivity *)homePodPhoneCallActivity;
-(void)_invalidateHomePodPhoneCallStatusUpdateTimer;
-(void)_startHomePodPhoneCallStatusUpdateTimer;
-(void)setPhoneCallStatusUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)phoneCallStatusUpdateTimer;
-(void)setHomePodPhoneCallActivity:(PCTelephonyActivity *)arg1 ;
-(id)initWithNavigationBarTitleView:(id)arg1 ;
@end
