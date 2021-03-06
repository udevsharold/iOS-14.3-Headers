/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface FMFMapCacheImage : NSObject <NSSecureCoding> {

	long long _count;
	NSString* _path;
	NSDate* _timestamp;

}

@property (assign,nonatomic) long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPath:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setCount:(long long)arg1 ;
-(NSString *)path;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setPath:(NSString *)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(void)boostPriority;
@end

