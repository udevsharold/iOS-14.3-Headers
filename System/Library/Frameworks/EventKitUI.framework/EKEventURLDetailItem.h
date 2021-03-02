/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, SGSuggestedEventLaunchInfo, NSURL;

@interface EKEventURLDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	SGSuggestedEventLaunchInfo* _launchInfo;
	NSURL* _url;

}
+(Class)_SGSuggestionsServiceClass;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
@end
