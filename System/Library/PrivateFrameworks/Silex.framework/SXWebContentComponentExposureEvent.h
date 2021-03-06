/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSURL;

@interface SXWebContentComponentExposureEvent : SXAnalyticsEvent {

	NSString* _componentIdentifier;
	NSURL* _URL;
	NSString* _exposureIdentifier;

}

@property (nonatomic,readonly) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * exposureIdentifier;               //@synthesize exposureIdentifier=_exposureIdentifier - In the implementation block
-(id)initWithComponent:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)componentIdentifier;
-(NSString *)exposureIdentifier;
@end

