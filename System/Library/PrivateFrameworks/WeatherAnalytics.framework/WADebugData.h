/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WADebugData : NSObject <AADataEventType> {

	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

