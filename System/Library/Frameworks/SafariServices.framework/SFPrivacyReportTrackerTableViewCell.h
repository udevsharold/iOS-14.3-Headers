/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFPrivacyReportTrackingTableViewCell.h>

@class WBSKnownTrackingThirdParty;

@interface SFPrivacyReportTrackerTableViewCell : SFPrivacyReportTrackingTableViewCell {

	WBSKnownTrackingThirdParty* _tracker;

}

@property (nonatomic,retain) WBSKnownTrackingThirdParty * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WBSKnownTrackingThirdParty *)tracker;
-(void)setTracker:(WBSKnownTrackingThirdParty *)arg1 ;
@end
