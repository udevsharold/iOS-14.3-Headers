/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAURLData : NSObject <AADataEventType> {

	NSString* _url;

}

@property (nonatomic,readonly) NSString * url;              //@synthesize url=_url - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSString *)url;
-(id)initWithUrl:(id)arg1 ;
@end
