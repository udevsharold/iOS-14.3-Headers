/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice, NSString, NSURL;

@interface CLKVideo : NSObject <NSCopying> {

	CLKDevice* _device;
	NSString* _name;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)videoNamed:(id)arg1 forDevice:(id)arg2 inBundle:(id)arg3 ;
+(id)videoWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3 ;
+(id)videoNamed:(id)arg1 forDevice:(id)arg2 ;
+(id)_videoNamed:(id)arg1 device:(id)arg2 bundle:(id)arg3 modifier:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)name;
-(NSURL *)url;
-(id)initWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3 ;
@end
