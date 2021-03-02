/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@class CSCoverSheetViewController, SBMainDisplayPolicyAggregator, NSString;

@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject <CSExternalBehaviorProviding> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBMainDisplayPolicyAggregator* _policyAggregator;
	id _notificationToken;

}

@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(unsigned long long)restrictedCapabilities;
-(unsigned long long)_restrictedCapability:(unsigned long long)arg1 forAggregatorCapability:(long long)arg2 ;
-(void)conformsToCSBehaviorProviding;
-(void)dealloc;
-(unsigned long long)_cameraRestrictions;
-(long long)notificationBehavior;
-(long long)participantState;
-(id)initWithCoverSheetViewController:(id)arg1 policyAggregator:(id)arg2 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(void)conformsToCSExternalBehaviorProviding;
@end
