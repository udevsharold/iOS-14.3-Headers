/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, WAViewType, WAViewAction;

@interface WAViewData : NSObject <AADataEventType> {

	NSString* _viewSessionID;
	WAViewType* _viewType;
	WAViewAction* _viewAction;

}

@property (nonatomic,readonly) NSString * viewSessionID;               //@synthesize viewSessionID=_viewSessionID - In the implementation block
@property (nonatomic,readonly) WAViewType * viewType;                  //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) WAViewAction * viewAction;              //@synthesize viewAction=_viewAction - In the implementation block
+(id)dataName;
-(id)toDict;
-(WAViewType *)viewType;
-(NSString *)viewSessionID;
-(WAViewAction *)viewAction;
-(id)initWithViewSessionID:(id)arg1 viewType:(id)arg2 viewAction:(id)arg3 ;
@end

