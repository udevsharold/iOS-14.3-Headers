/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSObject;

@interface SDTraceItem : NSObject <NSCopying> {

	double _startTime;
	long long _identifier;
	double _duration;
	NSString* _label;
	NSObject* _data;
	NSString* _string;

}

@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSObject * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * string;                 //@synthesize string=_string - In the implementation block
+(void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3 ;
+(id)stringFromReferenceDate:(double)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)data;
-(void)setDuration:(double)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(long long)identifier;
-(id)description;
-(void)setData:(NSObject *)arg1 ;
-(double)startTime;
-(void)setLabel:(NSString *)arg1 ;
-(double)duration;
-(NSString *)label;
@end

