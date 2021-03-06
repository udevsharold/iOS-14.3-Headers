/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSString;

@interface HFAnalyticsDiscoverTabContentViewedEvent : HFAnalyticsEvent {

	NSString* _contentID;
	NSString* _locale;

}

@property (nonatomic,retain) NSString * contentID;              //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * locale;                 //@synthesize locale=_locale - In the implementation block
-(NSString *)locale;
-(NSString *)contentID;
-(void)setLocale:(NSString *)arg1 ;
-(id)payload;
-(void)setContentID:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

